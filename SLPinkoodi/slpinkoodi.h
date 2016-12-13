#ifndef SLPINKOODI_H
#define SLPINKOODI_H

#include "slpinkoodi_global.h"
#include <QDebug>
#include <QString>

class SLPINKOODISHARED_EXPORT SLPinkoodi
{

public:

    QString nappi1(QString);
    QString nappi2(QString);
    QString nappi3(QString);
    QString nappi4(QString);
    QString nappi5(QString);
    QString nappi6(QString);
    QString nappi7(QString);
    QString nappi8(QString);
    QString nappi9(QString);
    QString nappi10(QString);
    void nappiClear();
    QString nappiEnter(QString);
    QString pinreset();

private:

    QString pin, sensuuri, koodi;

};

#endif // SLPINKOODI_H
