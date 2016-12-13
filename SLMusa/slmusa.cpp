#include "slmusa.h"

/*@@@@@@@@@@
 *
 *  Qt-multimedia ei toimi linuxissa toivotulla tavalla ja tästä syystä musiikin toisto aiheutti paljon vaikeuksia.
 *  Kuitenkin lopulta onnistuttiin musiikin toistossa QProcess-luokan avulla, jolloin musiikki toistuu ulkoisen soittimen kautta.
 *  QProcessin kautta musiikin toistamisessa on kuitenkin ongelma toistamisen loputuksessa, joka tapahtuu ainoastaan Process-olion tuhoutuessa.
 *  Tämä puolestaan aiheutti riskitekijöitä ohjelmaa ajettaessa, koska tällä toteutuksella olioita on luotava ja tuhottava siellä sun täällä.
 *
  @@@@@@@@@@*/

//tuhotaan olio, jos se on olemassa. Tämä vaikuttaa olevan ainoa keino tuhota prosessi ja musiikki samanaikaisesti
void SLMusa::Sulje()
{
    if(olioMusiikki)
    {
    delete olioMusiikki;
    }
}

//Tervetuloa-musa
void SLMusa::Countdown()
{
    olioMusiikki = new QProcess;
    olioMusiikki->start("aplay /home/pi/Documents/Qt_Programs/Elektroninen_lukko/musat/Countdown_Theme2.wav");
}

//ensimmäisen yrityksen musa
void SLMusa::Tuplaatko()
{
    olioMusiikki = new QProcess;
    olioMusiikki->start("aplay /home/pi/Documents/Qt_Programs/Elektroninen_lukko/musat/Jokeripokeri_tuplaatko_loop.wav");
}

//toisen yrityksen musa
void SLMusa::Tuplaus()
{
    olioMusiikki = new QProcess;
    olioMusiikki->start("aplay /home/pi/Documents/Qt_Programs/Elektroninen_lukko/musat/Jokeripokeri_tuplaus_loop.wav");
}

//kolmannen yrityksen musa
void SLMusa::TuplausNopea()
{
    olioMusiikki = new QProcess;
    olioMusiikki->start("aplay /home/pi/Documents/Qt_Programs/Elektroninen_lukko/musat/Jokeripokeri_tuplaus2_loop.wav");
}

//koodi tai kortin numero väärin -ääni
void SLMusa::koodiFail()
{
    olioMusiikki = new QProcess;
    olioMusiikki->start("aplay /home/pi/Documents/Qt_Programs/Elektroninen_lukko/musat/kusahus.wav");
}

//kortti on lukittu -musa
void SLMusa::Payne()
{
    olioMusiikki = new QProcess;
    olioMusiikki->start("aplay /home/pi/Documents/Qt_Programs/Elektroninen_lukko/musat/max_payne1.wav");
}

//nämä kaksi jätin vain siksi, koska kääntäjä heitti jotain tuntematon herjaa niistä... Eivät tee mitään, joten antaa olla
SLMusa::SLMusa(){}
SLMusa::~SLMusa(){}
