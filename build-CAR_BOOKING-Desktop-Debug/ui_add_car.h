/********************************************************************************
** Form generated from reading UI file 'add_car.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_CAR_H
#define UI_ADD_CAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_add_car
{
public:
    QLabel *add_car_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *car_no_lineEdit;
    QLabel *label_5;
    QLineEdit *brand_lineEdit_2;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *fare_lineEdit_2;
    QPushButton *exit_pushButton_3;
    QPushButton *submit_pushButton_4;
    QLineEdit *type_lineEdit_3;

    void setupUi(QDialog *add_car)
    {
        if (add_car->objectName().isEmpty())
            add_car->setObjectName(QString::fromUtf8("add_car"));
        add_car->resize(1185, 589);
        add_car_2 = new QLabel(add_car);
        add_car_2->setObjectName(QString::fromUtf8("add_car_2"));
        add_car_2->setGeometry(QRect(-360, -250, 1601, 891));
        add_car_2->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/sven-d-a4S6KUuLeoM-unsplash(2).jpg")));
        label_3 = new QLabel(add_car);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 20, 500, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("URW Bookman"));
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("font-size:20"));
        label_3->setTextFormat(Qt::RichText);
        label_4 = new QLabel(add_car);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 190, 211, 91));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu Condensed"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color:black;"));
        car_no_lineEdit = new QLineEdit(add_car);
        car_no_lineEdit->setObjectName(QString::fromUtf8("car_no_lineEdit"));
        car_no_lineEdit->setGeometry(QRect(250, 220, 201, 31));
        car_no_lineEdit->setStyleSheet(QString::fromUtf8("background-color:grey;"));
        label_5 = new QLabel(add_car);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 260, 211, 91));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color:black;"));
        brand_lineEdit_2 = new QLineEdit(add_car);
        brand_lineEdit_2->setObjectName(QString::fromUtf8("brand_lineEdit_2"));
        brand_lineEdit_2->setGeometry(QRect(250, 280, 201, 31));
        brand_lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:grey;"));
        label_6 = new QLabel(add_car);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 340, 211, 91));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color:black;"));
        label_7 = new QLabel(add_car);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 410, 211, 91));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color:black;"));
        fare_lineEdit_2 = new QLineEdit(add_car);
        fare_lineEdit_2->setObjectName(QString::fromUtf8("fare_lineEdit_2"));
        fare_lineEdit_2->setGeometry(QRect(250, 430, 201, 31));
        fare_lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:grey;"));
        exit_pushButton_3 = new QPushButton(add_car);
        exit_pushButton_3->setObjectName(QString::fromUtf8("exit_pushButton_3"));
        exit_pushButton_3->setGeometry(QRect(160, 510, 101, 31));
        QFont font2;
        font2.setPointSize(16);
        exit_pushButton_3->setFont(font2);
        exit_pushButton_3->setStyleSheet(QString::fromUtf8("BACKGROUND-COLOR:RED"));
        submit_pushButton_4 = new QPushButton(add_car);
        submit_pushButton_4->setObjectName(QString::fromUtf8("submit_pushButton_4"));
        submit_pushButton_4->setGeometry(QRect(320, 510, 101, 31));
        submit_pushButton_4->setFont(font2);
        submit_pushButton_4->setStyleSheet(QString::fromUtf8("BACKGROUND-COLOR:GREEN"));
        type_lineEdit_3 = new QLineEdit(add_car);
        type_lineEdit_3->setObjectName(QString::fromUtf8("type_lineEdit_3"));
        type_lineEdit_3->setGeometry(QRect(250, 360, 201, 31));
        type_lineEdit_3->setStyleSheet(QString::fromUtf8("background-color:grey;"));

        retranslateUi(add_car);

        QMetaObject::connectSlotsByName(add_car);
    } // setupUi

    void retranslateUi(QDialog *add_car)
    {
        add_car->setWindowTitle(QApplication::translate("add_car", "Dialog", nullptr));
        add_car_2->setText(QString());
        label_3->setText(QApplication::translate("add_car", "ADD A CAR", nullptr));
        label_4->setText(QApplication::translate("add_car", "CAR NO", nullptr));
        label_5->setText(QApplication::translate("add_car", "BRAND", nullptr));
        label_6->setText(QApplication::translate("add_car", "TYPE", nullptr));
        label_7->setText(QApplication::translate("add_car", "FARE", nullptr));
        exit_pushButton_3->setText(QApplication::translate("add_car", "EXIT", nullptr));
        submit_pushButton_4->setText(QApplication::translate("add_car", "SUBMIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_car: public Ui_add_car {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_CAR_H
