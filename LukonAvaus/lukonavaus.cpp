#include "lukonavaus.h"


//Tämän kirjaston tarkoitus on ohjata raspberryn pinniä, jonka ollessa 1 tekee sähkölukon transistorin johtavaksi, jolloin lukko aukeaa. 0-tila sulkee lukon.

LukonAvaus::LukonAvaus(){}

//jos lukko halutaan avata, suoritetaan "high.sh", joka asettaa halutun pinin tilaan 1
void LukonAvaus::lukkoProsessiHigh()
{
    prosessi1 = new QProcess();
    prosessi1->setWorkingDirectory("/home/pi/Documents/Qt_Programs/Elektroninen_lukko/LukkoExe");
    prosessi1->start("sh high.sh");
}

//jos lukko halutaan sulkea, suoritetaan "low.sh", joka asettaa halutun pinin tilaan 0
void LukonAvaus::lukkoProsessiLow()
{
    prosessi2 = new QProcess();
    prosessi2->setWorkingDirectory("/home/pi/Documents/Qt_Programs/Elektroninen_lukko/LukkoExe");
    prosessi2->start("sh low.sh");
}
