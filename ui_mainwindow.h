/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_5;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_R;
    QSlider *redSlider;
    QSpinBox *redSpinBox;
    QWidget *displayWidget;
    QLabel *label_G;
    QSlider *greenSlider;
    QSpinBox *greenSpinBox;
    QLabel *label_B;
    QSlider *blueSlider;
    QSpinBox *blueSpinBox;
    QWidget *chartWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(419, 552);
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(8);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 161, 101));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Tahoma"));
        font1.setPointSize(10);
        groupBox->setFont(font1);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setTristate(false);

        verticalLayout->addWidget(checkBox);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(190, 30, 201, 101));
        groupBox_2->setFont(font1);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Tahoma"));
        pushButton->setFont(font2);

        verticalLayout_2->addWidget(pushButton);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Tahoma"));
        font3.setPointSize(8);
        label_2->setFont(font3);

        verticalLayout_2->addWidget(label_2);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(130, -10, 311, 41));
        label_5->setFont(font1);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 140, 371, 85));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_R = new QLabel(layoutWidget);
        label_R->setObjectName(QString::fromUtf8("label_R"));
        label_R->setMinimumSize(QSize(15, 0));

        gridLayout->addWidget(label_R, 0, 0, 1, 1);

        redSlider = new QSlider(layoutWidget);
        redSlider->setObjectName(QString::fromUtf8("redSlider"));
        redSlider->setMaximum(255);
        redSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(redSlider, 0, 1, 1, 1);

        redSpinBox = new QSpinBox(layoutWidget);
        redSpinBox->setObjectName(QString::fromUtf8("redSpinBox"));
        redSpinBox->setMaximum(255);

        gridLayout->addWidget(redSpinBox, 0, 2, 1, 1);

        displayWidget = new QWidget(layoutWidget);
        displayWidget->setObjectName(QString::fromUtf8("displayWidget"));
        displayWidget->setMinimumSize(QSize(50, 0));
        displayWidget->setAutoFillBackground(true);

        gridLayout->addWidget(displayWidget, 0, 3, 3, 1);

        label_G = new QLabel(layoutWidget);
        label_G->setObjectName(QString::fromUtf8("label_G"));

        gridLayout->addWidget(label_G, 1, 0, 1, 1);

        greenSlider = new QSlider(layoutWidget);
        greenSlider->setObjectName(QString::fromUtf8("greenSlider"));
        greenSlider->setMaximum(255);
        greenSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(greenSlider, 1, 1, 1, 1);

        greenSpinBox = new QSpinBox(layoutWidget);
        greenSpinBox->setObjectName(QString::fromUtf8("greenSpinBox"));
        greenSpinBox->setMaximum(255);
        greenSpinBox->setSingleStep(50);

        gridLayout->addWidget(greenSpinBox, 1, 2, 1, 1);

        label_B = new QLabel(layoutWidget);
        label_B->setObjectName(QString::fromUtf8("label_B"));

        gridLayout->addWidget(label_B, 2, 0, 1, 1);

        blueSlider = new QSlider(layoutWidget);
        blueSlider->setObjectName(QString::fromUtf8("blueSlider"));
        blueSlider->setMaximum(255);
        blueSlider->setSingleStep(10);
        blueSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(blueSlider, 2, 1, 1, 1);

        blueSpinBox = new QSpinBox(layoutWidget);
        blueSpinBox->setObjectName(QString::fromUtf8("blueSpinBox"));
        blueSpinBox->setMaximum(255);

        gridLayout->addWidget(blueSpinBox, 2, 2, 1, 1);

        chartWidget = new QWidget(centralWidget);
        chartWidget->setObjectName(QString::fromUtf8("chartWidget"));
        chartWidget->setGeometry(QRect(40, 270, 321, 181));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 419, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());

        retranslateUi(MainWindow);
        QObject::connect(redSpinBox, SIGNAL(valueChanged(int)), redSlider, SLOT(setValue(int)));
        QObject::connect(greenSlider, SIGNAL(valueChanged(int)), greenSpinBox, SLOT(setValue(int)));
        QObject::connect(greenSpinBox, SIGNAL(valueChanged(int)), greenSlider, SLOT(setValue(int)));
        QObject::connect(blueSlider, SIGNAL(valueChanged(int)), blueSpinBox, SLOT(setValue(int)));
        QObject::connect(redSlider, SIGNAL(valueChanged(int)), redSpinBox, SLOT(setValue(int)));
        QObject::connect(blueSpinBox, SIGNAL(valueChanged(int)), blueSlider, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "PC to Device", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "LED3", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Device to PC", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Get LED Status", nullptr));
        label_2->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#00aa7f;\">Device Connected</span></p></body></html>", nullptr));
        label_R->setText(QApplication::translate("MainWindow", "R", nullptr));
        label_G->setText(QApplication::translate("MainWindow", "G", nullptr));
        label_B->setText(QApplication::translate("MainWindow", "B", nullptr));
        menu->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
