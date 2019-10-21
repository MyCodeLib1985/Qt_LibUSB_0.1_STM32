#include "mainwindow.h"
#include "lusb0_usb.h"
#include <QApplication>
#include <QLabel>

#include "chart.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QSplineSeries>
QT_CHARTS_USE_NAMESPACE

// TEST SETUP (User configurable)

// Issues a Set configuration request
#define TEST_SET_CONFIGURATION

// Issues a claim interface request
#define TEST_CLAIM_INTERFACE

// Use the libusb-win32 async transfer functions. see
// transfer_bulk_async() below.
#define TEST_ASYNC

// Attempts one bulk read.
#define TEST_BULK_READ

// Attempts one bulk write.
#define TEST_BULK_WRITE

// Device vendor and product id.
//#define MY_VID 0x08C4
//#define MY_PID 0xC1B1
//-------------
//#define MY_VID 0x0478
//#define MY_PID 0xC1B0
//-------------
//#define MY_VID 0x10e1
//#define MY_PID 0xc1b5
//-------------
#define MY_VID 0x26FE
#define MY_PID 0x5711
// Device configuration and interface id.
#define MY_CONFIG 1
#define MY_INTF 0
//p #define MY_INTF 1
// Device endpoint(s)
#define EP_IN 0x81
#define EP_OUT 0x02
//p #define EP_OUT 0x01
// Device of bytes to transfer.
#define BUF_SIZE 64

#define m_dev_DATA_SIZE 8       /* Number of bytes to get at once */
char data[m_dev_DATA_SIZE] = {0};
unsigned char wbuf[64];
unsigned char rbuf[64];
usb_dev_handle *open_dev(void);
usb_dev_handle *dev = NULL; /* the device handle */

usb_dev_handle *open_dev(void)
{
    struct usb_bus *bus;
    struct usb_device *dev;

    for (bus = usb_get_busses(); bus; bus = bus->next)
    {
        for (dev = bus->devices; dev; dev = dev->next)
        {
            qDebug()<<dev->descriptor.idVendor;
            qDebug()<<dev->descriptor.idProduct;
            if (dev->descriptor.idVendor == MY_VID
                    && dev->descriptor.idProduct == MY_PID)
            {
                qDebug()<<dev->descriptor.idVendor;
                qDebug()<<dev->descriptor.idProduct;
                return usb_open(dev);
            }
        }
    }
    return NULL;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    usb_init(); /* initialize the library */
    usb_find_busses(); /* find all busses */
    usb_find_devices(); /* find all connected devices */
    dev = open_dev();
    qDebug()<<"masuk";
    qDebug()<<dev;
    if (!(dev))
    {
         printf("error opening device: \n%s\n", usb_strerror());
         return 0;
    }
    else
    {
         printf("success: device %04X:%04X opened\n", MY_VID, MY_PID);
    }

#ifdef TEST_SET_CONFIGURATION
    if (usb_set_configuration(dev, MY_CONFIG) < 0)
    {
        printf("error setting config #%d: %s\n", MY_CONFIG, usb_strerror());
        usb_close(dev);
        return 0;
    }
    else
    {
        printf("success: set configuration #%d\n", MY_CONFIG);
    }
#endif

#ifdef TEST_CLAIM_INTERFACE
    if (usb_claim_interface(dev, MY_INTF) < 0)
    {
        printf("error claiming interface #%d:\n%s\n", MY_INTF, usb_strerror());
        usb_close(dev);
        return 0;
    }
    else
    {
        printf("success: claim_interface #%d\n", MY_INTF);
    }
#endif

    wbuf[0] = 0x03;
    wbuf[1] = 0;
    wbuf[2] = 0;
    wbuf[3] = 0;
    wbuf[4] = 0;
    wbuf[5] = 0;
    wbuf[6] = 0;
    wbuf[7] = 0;
    for(int i=0; i<4; i++)
    {
        usb_control_msg(dev, 0x21, 0x09, 0x00, 0x00, (char *)wbuf, 8, 100);
        wbuf[0]++;
    }



    MainWindow w;
    w.show();


    return a.exec();
}

