#include "sldatabase.h"

//tietokantaan yhdistäminen
void SLDatabase::Tietokanta()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL"); //oltava QMYSQL
    db.setHostName("mysli.oamk.fi");
    db.setDatabaseName("opisk_t4ravi00");
    db.setUserName("t4ravi00");
    db.setPassword("salasana");
    db.open();
}

//tietokantaan päivitetään kortin numeron perusteella aktivoitu-status ei-aktiiviseksi
void SLDatabase::aktivointiUpdate(QString kortti)
{
    QSqlQuery query;
    query.prepare("update kortti set aktivoitu=:aktivoitu where nro='"+kortti+"'");
    query.bindValue(":aktivoitu", 0);
    query.exec();
}

//tietokantaan tulee uusi hälytys-merkintä kortin mukaan
void SLDatabase::halyInsert(QString kortti)
{
    QSqlQuery query;
    query.exec("select * from asiakkaat join kortti on asiakkaat.id_kortti=kortti.id_kortti where nro = '"+kortti+"'");
    QSqlRecord rec = query.record();
    int asiakasCol = rec.indexOf("id_asiakas");
    while (query.next())
    {
        asiakas = query.value(asiakasCol).toString();
    }
    query.prepare("insert into halyt (id_asiakas) values (:id_asiakas)");
    query.bindValue(":id_asiakas", asiakas);
    query.exec();
}

//pinkoodi haetaan pin-stringin perusteella
QString SLDatabase::pinF(QString pin)
{
    QSqlQuery query;
    query.exec("select * from asiakkaat join kortti on asiakkaat.id_kortti=kortti.id_kortti where pinkoodi='"+pin+"'");
    QSqlRecord rec = query.record();
    int pinCol = rec.indexOf("pinkoodi");
    while (query.next())
    {
        koodi = query.value(pinCol).toString();
    }
    return koodi;
}

//kortin numero haetaan luetun kortti-stringin perusteella
QString SLDatabase::korttiF(QString kortti)
{
    QSqlQuery query;
    query.exec("select * from asiakkaat join kortti on asiakkaat.id_kortti=kortti.id_kortti where nro = '"+kortti+"'");
    QSqlRecord rec = query.record();
    int korttiCol = rec.indexOf("nro");
    while (query.next())
    {
        korttivertaus = query.value(korttiCol).toString();
    }
    return korttivertaus;
}

//kortin numero haetaan luetun pin-stringin perusteella
QString SLDatabase::nroF(QString pin)
{
    QSqlQuery query;
    query.exec("select * from asiakkaat join kortti on asiakkaat.id_kortti=kortti.id_kortti where pinkoodi = '"+pin+"'");
    QSqlRecord rec = query.record();
    int nroCol = rec.indexOf("nro");
    while (query.next())
    {
        nro = query.value(nroCol).toString();
    }
    return nro;
}

//etunimi haetaan kortti-stringin perusteella
QString SLDatabase::etunimiF(QString kortti)
{
    QSqlQuery query;
    query.exec("select * from asiakkaat join kortti on asiakkaat.id_kortti=kortti.id_kortti where nro = '"+kortti+"'");
    QSqlRecord rec = query.record();
    int etunimiCol = rec.indexOf("etunimi");
    while (query.next())
    {
        etunimi = query.value(etunimiCol).toString();
    }
    return etunimi;
}

//sukunimi haetaan kortti-stringin perusteella
QString SLDatabase::sukunimiF(QString kortti)
{
    QSqlQuery query;
    query.exec("select * from asiakkaat join kortti on asiakkaat.id_kortti=kortti.id_kortti where nro = '"+kortti+"'");
    QSqlRecord rec = query.record();
    int sukunimiCol = rec.indexOf("sukunimi");
    while (query.next())
    {
        sukunimi = query.value(sukunimiCol).toString();
    }
    return sukunimi;
}

//aktivointitieto haetaan kortti-stringin perusteella
QString SLDatabase::aktivointiF(QString kortti)
{
    QSqlQuery query;
    query.exec("select * from asiakkaat join kortti on asiakkaat.id_kortti=kortti.id_kortti where nro = '"+kortti+"'");
    QSqlRecord rec = query.record();
    int activeCol = rec.indexOf("aktivoitu");
    while (query.next())
    {
        aktivointi = query.value(activeCol).toString();
    }
    return aktivointi;
}

//kortin id haetaan kortti-stringin perusteella
QString SLDatabase::idkorttiF(QString kortti)
{
    QSqlQuery query;
    query.exec("select * from asiakkaat join kortti on asiakkaat.id_kortti=kortti.id_kortti where nro = '"+kortti+"'");
    QSqlRecord rec = query.record();
    int idkorttiCol = rec.indexOf("id_kortti");
    while (query.next())
    {
        idkortti = query.value(idkorttiCol).toString();
    }
    return idkortti;
}

//asiakkaan id haetaan kortti-stringin perusteella
QString SLDatabase::asiakasF(QString kortti)
{
    QSqlQuery query;
    query.exec("select * from asiakkaat join kortti on asiakkaat.id_kortti=kortti.id_kortti where nro = '"+kortti+"'");
    QSqlRecord rec = query.record();
    int asiakasCol = rec.indexOf("id_asiakas");
    while (query.next())
    {
        asiakas = query.value(asiakasCol).toString();
    }
    return asiakas;
}

//kulkeminen-tauluun lisätään tietoa
void SLDatabase::kulkuF(QString kortti, QString asiakas, int x, int y)
{
    QSqlQuery query;
    query.exec("select * from kulkeminen join asiakkaat on kulkeminen.idasiakas=asiakkaat.id_asiakas where nro = '"+kortti+"'");
    query.prepare("INSERT INTO kulkeminen(ilta_kulku, ovi_auki, idasiakas, kortti_aktivoitu)"
                  "values ( :ilta_kulku, :ovi_auki, :idasiakas, :kortti_aktivoitu)");
    query.bindValue(":ilta_kulku", y);
    query.bindValue(":ovi_auki", 1);
    query.bindValue(":idasiakas", asiakas);
    query.bindValue(":kortti_aktivoitu", x);
    query.exec();
}

//uusi kortti lisätään tietokantaan
void SLDatabase::korttiNrolisays(QString kortti)
{
    QSqlQuery query;
    query.prepare("insert into kortti (nro) values(:nro)");
    query.bindValue(":nro", kortti);
    query.exec();
}

//päivitetään tieto: jos kortti käytettiin lukijassa, mutta pinkoodia ei annettu
void SLDatabase::eiKoskettu()
{
    QSqlQuery query;
    query.prepare("update kulkeminen set ovi_auki=:ovi_auki order by id_kulkeminen desc limit 1");
    query.bindValue(":ovi_auki", 0);
    query.exec();
}
