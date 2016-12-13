/********************************************************************************
** Form generated from reading UI file 'korttifail.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KORTTIFAIL_H
#define UI_KORTTIFAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Korttifail
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButtonOK;

    void setupUi(QDialog *Korttifail)
    {
        if (Korttifail->objectName().isEmpty())
            Korttifail->setObjectName(QStringLiteral("Korttifail"));
        Korttifail->resize(400, 300);
        textBrowser = new QTextBrowser(Korttifail);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(70, 60, 256, 111));
        pushButtonOK = new QPushButton(Korttifail);
        pushButtonOK->setObjectName(QStringLiteral("pushButtonOK"));
        pushButtonOK->setGeometry(QRect(140, 210, 101, 31));

        retranslateUi(Korttifail);

        QMetaObject::connectSlotsByName(Korttifail);
    } // setupUi

    void retranslateUi(QDialog *Korttifail)
    {
        Korttifail->setWindowTitle(QApplication::translate("Korttifail", "Dialog", 0));
        textBrowser->setHtml(QApplication::translate("Korttifail", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Roboto'; font-size:12pt; font-weight:200; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Korttisi on lukittu. Ota yhteys valvojaan. Puh. 0700 123 123</p></body></html>", 0));
        pushButtonOK->setText(QApplication::translate("Korttifail", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class Korttifail: public Ui_Korttifail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KORTTIFAIL_H
