/********************************************************************************
** Form generated from reading UI file 'tervetuloa.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TERVETULOA_H
#define UI_TERVETULOA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Tervetuloa
{
public:
    QLabel *labelAika;
    QPushButton *pushButton;
    QLabel *labelTervetuloa;
    QLabel *labelTime;

    void setupUi(QDialog *Tervetuloa)
    {
        if (Tervetuloa->objectName().isEmpty())
            Tervetuloa->setObjectName(QStringLiteral("Tervetuloa"));
        Tervetuloa->resize(400, 300);
        QFont font;
        font.setPointSize(20);
        Tervetuloa->setFont(font);
        labelAika = new QLabel(Tervetuloa);
        labelAika->setObjectName(QStringLiteral("labelAika"));
        labelAika->setGeometry(QRect(24, 90, 351, 171));
        QFont font1;
        font1.setPointSize(110);
        font1.setBold(true);
        font1.setWeight(75);
        labelAika->setFont(font1);
        pushButton = new QPushButton(Tervetuloa);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 260, 111, 41));
        labelTervetuloa = new QLabel(Tervetuloa);
        labelTervetuloa->setObjectName(QStringLiteral("labelTervetuloa"));
        labelTervetuloa->setGeometry(QRect(0, 50, 400, 70));
        QFont font2;
        font2.setPointSize(18);
        labelTervetuloa->setFont(font2);
        labelTime = new QLabel(Tervetuloa);
        labelTime->setObjectName(QStringLiteral("labelTime"));
        labelTime->setGeometry(QRect(300, 0, 100, 40));

        retranslateUi(Tervetuloa);

        QMetaObject::connectSlotsByName(Tervetuloa);
    } // setupUi

    void retranslateUi(QDialog *Tervetuloa)
    {
        Tervetuloa->setWindowTitle(QApplication::translate("Tervetuloa", "Dialog", 0));
        labelAika->setText(QApplication::translate("Tervetuloa", "<html><head/><body><p align=\"center\"><br/></p></body></html>", 0));
        pushButton->setText(QApplication::translate("Tervetuloa", "Ovi kiinni", 0));
        labelTervetuloa->setText(QApplication::translate("Tervetuloa", "<HTML>\n"
"<Body>\n"
"<p align \"center\">\n"
"<font face =\"verdana\" size=\"7\">Tervetuloa </font>\n"
"</p>\n"
"</BODY>\n"
"<HTML> ", 0));
        labelTime->setText(QApplication::translate("Tervetuloa", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Tervetuloa: public Ui_Tervetuloa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TERVETULOA_H
