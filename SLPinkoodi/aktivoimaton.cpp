#include "aktivoimaton.h"
#include "ui_aktivoimaton.h"

Aktivoimaton::Aktivoimaton(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Aktivoimaton)
{
    olioSLMusa = new SLMusa;
    ui->setupUi(this);
}

Aktivoimaton::~Aktivoimaton()
{
    delete olioSLMusa;
    delete ui;
}

void Aktivoimaton::Kusahus()
{
    olioSLMusa->koodiFail();    //musa-effekti
}

void Aktivoimaton::on_pushButton_clicked()
{
    this->close();              //ikkuna kiinni
    olioSLMusa->Sulje();        //musat pois
}
