#ifndef LUKONAVAUS_H
#define LUKONAVAUS_H

#include "lukonavaus_global.h"
#include <QProcess>

class LUKONAVAUSSHARED_EXPORT LukonAvaus
{

public:
    LukonAvaus();
    void lukkoProsessiHigh();
    void lukkoProsessiLow();
private:
    QProcess *prosessi1, *prosessi2;
};

#endif // LUKONAVAUS_H
