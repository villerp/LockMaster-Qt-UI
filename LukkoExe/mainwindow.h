#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tervetuloa.h"
#include <QString>
#include <QtSerialPort/QSerialPort>
#include <QDebug>
#include <QtCore/QtGlobal>
#include <QDateTime>
#include <QMessageBox>
#include <QtGui>
#include "sldatabase.h"
#include "slpinkoodi.h"
#include "pinkoodi.h"
#include "slajastin.h"
#include "slrfid.h"
#include "lukonavaus.h"
#include "slmusa.h"         //"sl"-alkuiset (ja lukonavaus.h) headerit ovat itse tehtyjä kirjastoja. Ks. pro-tiedoston polut

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
    void pvmKutsu();
    void readData();

signals:

    void korttiSignal(QString);

private:

    Ui::MainWindow *ui;
    SLDatabase *olioSLDatabase;
    QString kortti, korttivertaus, idkortti, aktivointi, avattu, aika, etunimi, sukunimi, asiakas;
    long int startMilliseconds, Seconds;
    int tunnit;
    QTimer *countdown;
    Tervetuloa * olioTervetuloa;
    Pinkoodi *olioPinkoodi;
    SLAjastin *olioSLAjastin;
    SLRFID *olioSLRFID;
    LukonAvaus *olioLukonAvaus;
    SLMusa *olioSLMusa;
};

#endif // MAINWINDOW_H
