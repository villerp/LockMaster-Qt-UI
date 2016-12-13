#ifndef SLMUSA_H
#define SLMUSA_H

#include "slmusa_global.h"
#include <QtGui>

class SLMUSASHARED_EXPORT SLMusa
{

public:
    SLMusa();
    ~SLMusa();
    void Countdown();
    void Tuplaatko();
    void Tuplaus();
    void TuplausNopea();
    void koodiFail();
    void Sulje();
    void Payne();

private:
    QProcess *olioMusiikki;
};

#endif // SLMUSA_H
