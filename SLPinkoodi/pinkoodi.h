#ifndef PINKOODI_H
#define PINKOODI_H

#include <QDialog>
#include <QString>
#include <QDebug>
#include "korttifail.h"
#include "tervetuloa.h"
#include <QtSql>
#include "sldatabase.h"
#include <QDateTime>
#include <QtGui>
#include "slpinkoodi.h"
#include "slajastin.h"
#include "korttifail.h"
#include "lukonavaus.h"
#include "slmusa.h"

namespace Ui {
class Pinkoodi;
}

class Pinkoodi : public QDialog
{
    Q_OBJECT

public:

    explicit Pinkoodi(QWidget *parent = 0);
    ~Pinkoodi();
    void korttiLahetys(QString);
    void timer_start(int);
    void oviAuki();
    void pinreset();
    void playAlkumusa();

private slots:

    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_backspace_clicked();
    void on_pushButton_enter_clicked();
    void pinSlot(QString);

protected slots:

    void timeOut();
    void timeOut2();

signals:

    void pinSignal(QString);

private:

    Ui::Pinkoodi *ui;
    QString pin, sensuuri, koodi, aktivointi, etunimi, sukunimi, korttivertaus, kortti2, kortti, aika2, asiakas, pvmaika, idkortti;
    int yritykset, startMilliseconds;
    Tervetuloa *olioTervetuloa;
    SLDatabase *olioSLDatabase;
    SLPinkoodi *olioSLPinkoodi;
    SLAjastin *olioSLAjastin;
    Korttifail *olioKorttifail;
    QTimer *countdown, *countdown2;
    LukonAvaus *olioLukonAvaus;
    SLMusa *olioSLMusa;
};

#endif // PINKOODI_H
