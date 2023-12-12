/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *username_lineEdit;
    QLineEdit *password_lineEdit_3;
    QPushButton *exit_pushButton_2;
    QPushButton *lohgin_pushButton_3;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(1145, 764);
        login->setAutoFillBackground(false);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-430, -300, 1601, 891));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/sven-d-a4S6KUuLeoM-unsplash(2).jpg")));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 80, 500, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("URW Bookman"));
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("font-size:20"));
        label_2->setTextFormat(Qt::RichText);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 200, 211, 91));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu Condensed"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color:black;"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 260, 211, 91));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color:black;"));
        username_lineEdit = new QLineEdit(centralwidget);
        username_lineEdit->setObjectName(QString::fromUtf8("username_lineEdit"));
        username_lineEdit->setGeometry(QRect(250, 230, 201, 31));
        username_lineEdit->setStyleSheet(QString::fromUtf8("background-color:grey;"));
        password_lineEdit_3 = new QLineEdit(centralwidget);
        password_lineEdit_3->setObjectName(QString::fromUtf8("password_lineEdit_3"));
        password_lineEdit_3->setGeometry(QRect(250, 290, 201, 31));
        password_lineEdit_3->setStyleSheet(QString::fromUtf8("background-color:grey"));
        password_lineEdit_3->setEchoMode(QLineEdit::Password);
        exit_pushButton_2 = new QPushButton(centralwidget);
        exit_pushButton_2->setObjectName(QString::fromUtf8("exit_pushButton_2"));
        exit_pushButton_2->setGeometry(QRect(190, 370, 101, 31));
        QFont font2;
        font2.setPointSize(16);
        exit_pushButton_2->setFont(font2);
        exit_pushButton_2->setStyleSheet(QString::fromUtf8("BACKGROUND-COLOR:RED"));
        lohgin_pushButton_3 = new QPushButton(centralwidget);
        lohgin_pushButton_3->setObjectName(QString::fromUtf8("lohgin_pushButton_3"));
        lohgin_pushButton_3->setGeometry(QRect(350, 370, 101, 31));
        lohgin_pushButton_3->setFont(font2);
        lohgin_pushButton_3->setStyleSheet(QString::fromUtf8("BACKGROUND-COLOR:GREEN"));
        login->setCentralWidget(centralwidget);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QApplication::translate("login", "login", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("login", "CAR BOOKING", nullptr));
        label_3->setText(QApplication::translate("login", "USER NAME", nullptr));
        label_4->setText(QApplication::translate("login", "PASSWORD", nullptr));
        exit_pushButton_2->setText(QApplication::translate("login", "EXIT", nullptr));
        lohgin_pushButton_3->setText(QApplication::translate("login", "LOGIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
