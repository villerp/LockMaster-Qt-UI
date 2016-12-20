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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Tervetuloa
{
public:
    QGridLayout *gridLayout;
    QLabel *labelTime;
    QLabel *labelTervetuloa;
    QLabel *labelAvaukseen;
    QPushButton *pushButton;
    QLabel *labelAika;

    void setupUi(QDialog *Tervetuloa)
    {
        if (Tervetuloa->objectName().isEmpty())
            Tervetuloa->setObjectName(QStringLiteral("Tervetuloa"));
        Tervetuloa->resize(1204, 909);
        gridLayout = new QGridLayout(Tervetuloa);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelTime = new QLabel(Tervetuloa);
        labelTime->setObjectName(QStringLiteral("labelTime"));
        labelTime->setMaximumSize(QSize(16777215, 36));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        labelTime->setFont(font);

        gridLayout->addWidget(labelTime, 0, 0, 1, 1);

        labelTervetuloa = new QLabel(Tervetuloa);
        labelTervetuloa->setObjectName(QStringLiteral("labelTervetuloa"));
        labelTervetuloa->setMaximumSize(QSize(16777215, 53));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setWeight(75);
        labelTervetuloa->setFont(font1);

        gridLayout->addWidget(labelTervetuloa, 1, 0, 1, 1);

        labelAvaukseen = new QLabel(Tervetuloa);
        labelAvaukseen->setObjectName(QStringLiteral("labelAvaukseen"));
        labelAvaukseen->setMaximumSize(QSize(16777215, 44));
        QFont font2;
        font2.setPointSize(25);
        font2.setBold(true);
        font2.setWeight(75);
        labelAvaukseen->setFont(font2);

        gridLayout->addWidget(labelAvaukseen, 2, 0, 1, 1);

        pushButton = new QPushButton(Tervetuloa);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(150, 50));
        pushButton->setMaximumSize(QSize(900, 300));
        QFont font3;
        font3.setPointSize(90);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton->setFont(font3);
        pushButton->setDefault(false);

        gridLayout->addWidget(pushButton, 4, 0, 1, 1);

        labelAika = new QLabel(Tervetuloa);
        labelAika->setObjectName(QStringLiteral("labelAika"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(2);
        sizePolicy1.setHeightForWidth(labelAika->sizePolicy().hasHeightForWidth());
        labelAika->setSizePolicy(sizePolicy1);
        labelAika->setMaximumSize(QSize(1000, 600));
        QFont font4;
        font4.setPointSize(400);
        font4.setBold(true);
        font4.setWeight(75);
        labelAika->setFont(font4);
        labelAika->setScaledContents(true);
        labelAika->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelAika, 3, 0, 1, 1);


        retranslateUi(Tervetuloa);

        QMetaObject::connectSlotsByName(Tervetuloa);
    } // setupUi

    void retranslateUi(QDialog *Tervetuloa)
    {
        Tervetuloa->setWindowTitle(QApplication::translate("Tervetuloa", "Tervetuloa", 0));
        labelTime->setText(QApplication::translate("Tervetuloa", "<html><head/><body><p align=\"right\">20:45:22</p></body></html>", 0));
        labelTervetuloa->setText(QApplication::translate("Tervetuloa", "<html><head/><body><p align=\"center\">ghjgj</p></body></html>", 0));
        labelAvaukseen->setText(QApplication::translate("Tervetuloa", "<html><head/><body><p align=\"center\">dgfd</p></body></html>", 0));
        pushButton->setText(QApplication::translate("Tervetuloa", "Ovi kiinni", 0));
        labelAika->setText(QApplication::translate("Tervetuloa", "<html><head/><body><p align=\"center\">hh</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Tervetuloa: public Ui_Tervetuloa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TERVETULOA_H
