/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_mainmenu
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *AD_CAR;
    QPushButton *book_pushButton_2;

    void setupUi(QDialog *mainmenu)
    {
        if (mainmenu->objectName().isEmpty())
            mainmenu->setObjectName(QString::fromUtf8("mainmenu"));
        mainmenu->resize(897, 558);
        label = new QLabel(mainmenu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-650, -320, 1601, 891));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/sven-d-a4S6KUuLeoM-unsplash(2).jpg")));
        label_2 = new QLabel(mainmenu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 30, 500, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("URW Bookman"));
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("font-size:20"));
        label_2->setTextFormat(Qt::RichText);
        AD_CAR = new QPushButton(mainmenu);
        AD_CAR->setObjectName(QString::fromUtf8("AD_CAR"));
        AD_CAR->setGeometry(QRect(30, 320, 181, 61));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        AD_CAR->setFont(font1);
        AD_CAR->setStyleSheet(QString::fromUtf8("BACKGROUND-COLOR:BLUE"));
        book_pushButton_2 = new QPushButton(mainmenu);
        book_pushButton_2->setObjectName(QString::fromUtf8("book_pushButton_2"));
        book_pushButton_2->setGeometry(QRect(30, 430, 181, 61));
        book_pushButton_2->setFont(font1);
        book_pushButton_2->setStyleSheet(QString::fromUtf8("BACKGROUND-COLOR:RED;"));

        retranslateUi(mainmenu);

        QMetaObject::connectSlotsByName(mainmenu);
    } // setupUi

    void retranslateUi(QDialog *mainmenu)
    {
        mainmenu->setWindowTitle(QApplication::translate("mainmenu", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("mainmenu", "MAIN MENU", nullptr));
        AD_CAR->setText(QApplication::translate("mainmenu", "ADD CAR", nullptr));
        book_pushButton_2->setText(QApplication::translate("mainmenu", "BOOK  A CAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainmenu: public Ui_mainmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
