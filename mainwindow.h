#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "lusb0_usb.h"
#include <QThread>
#include <QtCore>
#include <QDialog>
#include <QColor>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    Q_PROPERTY(QColor color READ color NOTIFY colorChanged)

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QColor color() const
    {
        return m_color;
    }

signals:
    void colorChanged(QColor arg);

private slots:

    void on_pushButton_clicked();

//    void on_label_linkActivated(const QString &link);

//    void on_checkBox_toggled(bool checked);

    void on_checkBox_clicked();

    void onColorChanged();





private:
    Ui::MainWindow *ui;
    QColor m_color;
};

class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(QObject *parent = 0);
    void run();
    bool Stop;
signals:
    void NumberChanged(int);
public slots:

};


#endif // MAINWINDOW_H
