#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "pinkoodi.h"
#include "tervetuloa.h"
#include "korttifail.h"
#include <QString>
#include <QtSerialPort/QSerialPort>
#include <QDebug>
#include <QtCore/QtGlobal>
#include <QDateTime>
#include <QMessageBox>
#include <QtGui>
#include "sldatabase.h"
#include "slpinkoodi.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:

    void korttiSlot(QString);

    void readData();

    void timeOut();

    //void sqlSlot(QString);


signals:

    void korttiSignal(QString);

private:
    Ui::MainWindow *ui;
    SLDatabase *olioSLDatabase;
    QString kortti, korttivertaus, pvmaika, idkortti, aktivointi, avattu, aika, etunimi, sukunimi, asiakas;
    QSerialPort *serial;
    long int startMilliseconds, Seconds;
    int tunnit;
    QTimer *countdown;
    Pinkoodi *olioPinkoodi;
    Tervetuloa * olioTervetuloa;


};

#endif // MAINWINDOW_H
