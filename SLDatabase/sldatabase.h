#ifndef SLDATABASE_H
#define SLDATABASE_H

#include "sldatabase_global.h"
#include <QtSql>
#include <QDebug>
#include <QString>
#include <QtSerialPort/QSerialPort>
#include <QtCore/QtGlobal>
#include <QDateTime>
#include <QMessageBox>
#include <QtGui>

class SLDATABASESHARED_EXPORT SLDatabase
{

public:

    void Tietokanta();
    QString pinF(QString);
    QString korttiF(QString);
    QString etunimiF(QString);
    QString aktivointiF(QString);
    QString sukunimiF(QString);
    QString idkorttiF(QString);
    QString asiakasF(QString);
    QString nroF(QString);
    void kulkuF(QString, QString, int, int);
    void korttiNrolisays(QString);
    void eiKoskettu();
    void halyInsert(QString);
    void aktivointiUpdate(QString);

private slots:

    void timeOut(int);

private:

    QString korttivertaus, etunimi, sukunimi, idkortti, aktivointi, asiakas, koodi, pin, nro;
};

#endif // SLDATABASE_H
