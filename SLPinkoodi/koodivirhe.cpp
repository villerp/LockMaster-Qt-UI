#include "koodivirhe.h"
#include "ui_koodivirhe.h"

Koodivirhe::Koodivirhe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Koodivirhe)
{
    olioSLMusa = new SLMusa;
    ui->setupUi(this);
}

Koodivirhe::~Koodivirhe()
{
    delete olioSLMusa;
    delete ui;
}

void Koodivirhe::yrityksetKoppi(int x)
{
    olioSLMusa->koodiFail();                        //kusahdus-musa päälle
    yritykset = x;                                  //"koppi"
    ui->label_4->setAlignment(Qt::AlignCenter);     //keskittää labelin
    ui->label_4->setNum(yritykset);                 //asettaa yritysten määrän labeliin
}

void Koodivirhe::on_pushButton_clicked()
{
    this->close();                                  //ikkuna kiinni
    olioSLMusa->Sulje();                            //musa pois
}
