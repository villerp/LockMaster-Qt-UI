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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Korttifail
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;

    void setupUi(QDialog *Korttifail)
    {
        if (Korttifail->objectName().isEmpty())
            Korttifail->setObjectName(QStringLiteral("Korttifail"));
        Korttifail->resize(1203, 981);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Korttifail->sizePolicy().hasHeightForWidth());
        Korttifail->setSizePolicy(sizePolicy);
        Korttifail->setSizeGripEnabled(false);
        Korttifail->setModal(false);
        gridLayout = new QGridLayout(Korttifail);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 0, -1);
        label_2 = new QLabel(Korttifail);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(200, 35));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_3 = new QLabel(Korttifail);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(200, 200));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../kuvat/denied.jpg")));
        label_3->setScaledContents(true);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label = new QLabel(Korttifail);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(600, 300));

        gridLayout->addWidget(label, 1, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_6 = new QLabel(Korttifail);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(200, 200));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../kuvat/denied.jpg")));
        label_6->setScaledContents(true);

        gridLayout->addWidget(label_6, 1, 2, 1, 1);

        label_7 = new QLabel(Korttifail);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(1000, 1000));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../kuvat/picard.jpg")));
        label_7->setScaledContents(true);

        gridLayout->addWidget(label_7, 2, 1, 1, 1);

        label_4 = new QLabel(Korttifail);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(200, 200));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../kuvat/denied.jpg")));
        label_4->setScaledContents(true);

        gridLayout->addWidget(label_4, 3, 0, 1, 1, Qt::AlignHCenter);

        label_5 = new QLabel(Korttifail);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(200, 200));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../kuvat/denied.jpg")));
        label_5->setScaledContents(true);

        gridLayout->addWidget(label_5, 3, 2, 1, 1, Qt::AlignHCenter);

        pushButton = new QPushButton(Korttifail);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(1000, 150));
        QFont font1;
        font1.setPointSize(90);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);

        gridLayout->addWidget(pushButton, 3, 1, 1, 1);


        retranslateUi(Korttifail);

        QMetaObject::connectSlotsByName(Korttifail);
    } // setupUi

    void retranslateUi(QDialog *Korttifail)
    {
        Korttifail->setWindowTitle(QApplication::translate("Korttifail", "Kortti on lukittu", 0));
        label_2->setText(QApplication::translate("Korttifail", "12:34:33", 0));
        label_3->setText(QString());
        label->setText(QApplication::translate("Korttifail", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt;\">Korttisi on lukittu.</span></p><p align=\"center\"><span style=\" font-size:48pt;\">Ota yhteys valvojaan.</span></p><p align=\"center\"><span style=\" font-size:48pt;\">Puh. 0700 123 123</span></p></body></html>", 0));
        label_6->setText(QString());
        label_7->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        pushButton->setText(QApplication::translate("Korttifail", "SULJE", 0));
    } // retranslateUi

};

namespace Ui {
    class Korttifail: public Ui_Korttifail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KORTTIFAIL_H
