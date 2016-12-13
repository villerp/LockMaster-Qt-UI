/********************************************************************************
** Form generated from reading UI file 'pinkoodi.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINKOODI_H
#define UI_PINKOODI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pinkoodi
{
public:
    QLabel *labelKoodiView;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_backspace;
    QPushButton *pushButton_10;
    QPushButton *pushButton_enter;
    QLabel *labelAika;
    QLabel *label;

    void setupUi(QDialog *Pinkoodi)
    {
        if (Pinkoodi->objectName().isEmpty())
            Pinkoodi->setObjectName(QStringLiteral("Pinkoodi"));
        Pinkoodi->resize(1200, 800);
        labelKoodiView = new QLabel(Pinkoodi);
        labelKoodiView->setObjectName(QStringLiteral("labelKoodiView"));
        labelKoodiView->setGeometry(QRect(500, 740, 168, 53));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        font.setStrikeOut(false);
        labelKoodiView->setFont(font);
        layoutWidget = new QWidget(Pinkoodi);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 70, 1131, 661));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButton_6);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton_9);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_backspace = new QPushButton(layoutWidget);
        pushButton_backspace->setObjectName(QStringLiteral("pushButton_backspace"));
        sizePolicy.setHeightForWidth(pushButton_backspace->sizePolicy().hasHeightForWidth());
        pushButton_backspace->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(pushButton_backspace);

        pushButton_10 = new QPushButton(layoutWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(pushButton_10);

        pushButton_enter = new QPushButton(layoutWidget);
        pushButton_enter->setObjectName(QStringLiteral("pushButton_enter"));
        sizePolicy.setHeightForWidth(pushButton_enter->sizePolicy().hasHeightForWidth());
        pushButton_enter->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(pushButton_enter);


        verticalLayout->addLayout(horizontalLayout_4);

        labelAika = new QLabel(Pinkoodi);
        labelAika->setObjectName(QStringLiteral("labelAika"));
        labelAika->setGeometry(QRect(990, 10, 180, 35));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelAika->sizePolicy().hasHeightForWidth());
        labelAika->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        labelAika->setFont(font1);
        label = new QLabel(Pinkoodi);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(450, 10, 271, 53));
        QFont font2;
        font2.setPointSize(30);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        layoutWidget->raise();
        labelKoodiView->raise();
        labelAika->raise();
        label->raise();

        retranslateUi(Pinkoodi);

        QMetaObject::connectSlotsByName(Pinkoodi);
    } // setupUi

    void retranslateUi(QDialog *Pinkoodi)
    {
        Pinkoodi->setWindowTitle(QApplication::translate("Pinkoodi", "Dialog", 0));
        labelKoodiView->setText(QString());
        pushButton->setText(QApplication::translate("Pinkoodi", "1", 0));
        pushButton_2->setText(QApplication::translate("Pinkoodi", "2", 0));
        pushButton_3->setText(QApplication::translate("Pinkoodi", "3", 0));
        pushButton_4->setText(QApplication::translate("Pinkoodi", "4", 0));
        pushButton_5->setText(QApplication::translate("Pinkoodi", "5", 0));
        pushButton_6->setText(QApplication::translate("Pinkoodi", "6", 0));
        pushButton_7->setText(QApplication::translate("Pinkoodi", "7", 0));
        pushButton_8->setText(QApplication::translate("Pinkoodi", "8", 0));
        pushButton_9->setText(QApplication::translate("Pinkoodi", "9", 0));
        pushButton_backspace->setText(QApplication::translate("Pinkoodi", "CLEAR", 0));
        pushButton_10->setText(QApplication::translate("Pinkoodi", "0", 0));
        pushButton_enter->setText(QApplication::translate("Pinkoodi", "ENTER", 0));
        labelAika->setText(QString());
        label->setText(QApplication::translate("Pinkoodi", "Sy\303\266t\303\244 pinkoodi", 0));
    } // retranslateUi

};

namespace Ui {
    class Pinkoodi: public Ui_Pinkoodi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINKOODI_H
