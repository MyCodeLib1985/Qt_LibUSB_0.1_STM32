#-------------------------------------------------
#
# Project created by QtCreator 2016-07-11T10:39:32
#
#-------------------------------------------------

QT       += core gui charts
LIBS+="F:/RA TU Ilmenau/Chinese Guy/Qt_STM32F401_HID_Test/Qt_STM32F401_HID_Test/lib/gcc/libusb.a"
#LIBS+="F:/RA TU Ilmenau/Chinese Guy/Qt_STM32F401_HID_Test/Qt_STM32F401_HID_Test/lib/msvc_x64/libusb.lib"

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test
TEMPLATE = app


SOURCES += main.cpp\
        chart.cpp \
        mainwindow.cpp

HEADERS  += mainwindow.h \
    chart.h \
    include/lusb0_usb.h \
    lusb0_usb.h

FORMS    += mainwindow.ui

DISTFILES += \
    lib/msvc_x64/libusb.lib\
    lib/gcc/libusb.a
