#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextStream>
#include <QtCore>
#include <QDebug>
#include <QLabel>
#include <QWidget>
#include <QPalette>
#include "chart.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QSplineSeries>
QT_CHARTS_USE_NAMESPACE

extern unsigned char wbuf[64];
extern unsigned char rbuf[64];
extern usb_dev_handle *dev;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->redSlider, SIGNAL(valueChanged(int)), SLOT(onColorChanged()));
    connect(ui->greenSlider, SIGNAL(valueChanged(int)), SLOT(onColorChanged()));
    connect(ui->blueSlider, SIGNAL(valueChanged(int)), SLOT(onColorChanged()));
    onColorChanged();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{


    char RxBuff[2];
    RxBuff[0] = 0x35;
  //  RxBuff[1] = 0x12;
    char TxBuff[6];
    int ret = -1;
    if(dev != NULL)
    {
        usb_bulk_write(dev, 0x01, RxBuff, 1, 100);
        ret = usb_bulk_read(dev, 0x81, TxBuff, 6, 100);
        if (ret< 0)
        {
            ui->label_2->setText("LED OFF");
            qDebug()<< "No data";
        }
        else{
            ui->label_2->setText("LED ON");
            qDebug()<<(int) TxBuff[0];
            qDebug()<<(int) TxBuff[1];
            qDebug()<<(int) TxBuff[2];

        }
    }




}

MyThread::MyThread(QObject *parent) :
    QThread(parent)
{


}

void MyThread::run()
{
    for(int i=0; i< 10000; i++)
    {
        QMutex mutex;
        mutex.lock();
        if(this->Stop)  break;
        mutex.unlock();

        emit NumberChanged(i);
    }



}

void MainWindow::on_checkBox_clicked()
{
    char RxBuff[2];
    char TxBuff[3];
    RxBuff[0] = 0x33;
    RxBuff[1] = 0x12;
    int ret = -1;
    if(dev != NULL)
    {
        usb_bulk_write(dev, 0x01, RxBuff, 1, 100);

        ret = usb_bulk_read(dev, 0x81, TxBuff, 1, 100);
        if (ret< 0)
        {
            qDebug()<< "No data";
        }
        else{
            ui->label_2->setText("Received Data from Device");
            //qDebug()<< TxBuff;
            qDebug()<< ret;
        }
    }
}

void MainWindow::onColorChanged(){
    m_color.setRgb(ui->redSlider->value(), ui->greenSlider->value(), ui->blueSlider->value());
    QPalette pal = ui->displayWidget->palette();
    pal.setColor(QPalette::Window, m_color);
    ui->displayWidget->setPalette(pal);
    emit colorChanged(m_color);
    char warna[3];
    warna[0]=(char)ui->redSlider->value();
    warna[1]=(char)ui->blueSlider->value();
   //char coba[40]=[41],[03], 00, 00, 01, F5, 00, 02, 04, 00, 75, 00, 88, 17, C2, 02, 00, 00, 00, 00, FF, FF, FF, 00, 00, 00, 00, 00, 7E, 12, 2F, 00, 00, 00, 00, 00, 00, 00, 00, 00, 7E, 12, 2F, 00, 05, 00, 00, 00, 89, 4E, E4, 59, FE, FF, FF, FF, 98, D5, 75, 00, EB, 81, 64, 65]
      char coba[40];
      coba[0]=0x40;
      coba[1]=0x03;
      coba[2]=0x00;
      coba[3]=0x00;
      coba[4]=0x01;
      coba[5]=0xF5;
      coba[6]=0x00;
      coba[7]=0x00;
      coba[8]=0x02;

    //qDebug() << warna;
    usb_bulk_write(dev, 0x02, coba, 40, 100);


    char TxBuff[40];
    int ret = -1;
    if(dev != NULL)
    {
        //usb_bulk_write(dev, 0x01, RxBuff, 1, 100);
        ret = usb_bulk_read(dev, 0x81, TxBuff, 40, 100);
        if (ret< 0)
        {
            ui->label_2->setText("LED OFF");
           // qDebug()<< "No data";
        }
        else{
            ui->label_2->setText("LED ON");
           qDebug()<<TxBuff[0];
//            qDebug()<< ret;
//            qDebug()<< TxBuff;


        }
    }

}


