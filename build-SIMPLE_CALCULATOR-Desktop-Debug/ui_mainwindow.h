/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *calculator_label;
    QLabel *num1_label;
    QLabel *num2_label_2;
    QLabel *result_label_2;
    QLineEdit *num1_lineEdit;
    QLineEdit *num2_lineEdit_2;
    QLineEdit *result_lineEdit_3;
    QPushButton *plus_pushButton;
    QPushButton *sub_pushButton_2;
    QPushButton *multi_pushButton_3;
    QPushButton *division_pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        calculator_label = new QLabel(centralwidget);
        calculator_label->setObjectName(QString::fromUtf8("calculator_label"));
        calculator_label->setGeometry(QRect(120, 10, 471, 81));
        QFont font;
        font.setPointSize(22);
        calculator_label->setFont(font);
        num1_label = new QLabel(centralwidget);
        num1_label->setObjectName(QString::fromUtf8("num1_label"));
        num1_label->setGeometry(QRect(100, 170, 141, 20));
        QFont font1;
        font1.setPointSize(18);
        num1_label->setFont(font1);
        num2_label_2 = new QLabel(centralwidget);
        num2_label_2->setObjectName(QString::fromUtf8("num2_label_2"));
        num2_label_2->setGeometry(QRect(100, 230, 141, 20));
        num2_label_2->setFont(font1);
        result_label_2 = new QLabel(centralwidget);
        result_label_2->setObjectName(QString::fromUtf8("result_label_2"));
        result_label_2->setGeometry(QRect(100, 310, 141, 20));
        result_label_2->setFont(font1);
        num1_lineEdit = new QLineEdit(centralwidget);
        num1_lineEdit->setObjectName(QString::fromUtf8("num1_lineEdit"));
        num1_lineEdit->setGeometry(QRect(330, 164, 301, 31));
        QFont font2;
        font2.setPointSize(15);
        num1_lineEdit->setFont(font2);
        num2_lineEdit_2 = new QLineEdit(centralwidget);
        num2_lineEdit_2->setObjectName(QString::fromUtf8("num2_lineEdit_2"));
        num2_lineEdit_2->setGeometry(QRect(330, 230, 301, 31));
        num2_lineEdit_2->setFont(font2);
        result_lineEdit_3 = new QLineEdit(centralwidget);
        result_lineEdit_3->setObjectName(QString::fromUtf8("result_lineEdit_3"));
        result_lineEdit_3->setGeometry(QRect(330, 300, 301, 31));
        result_lineEdit_3->setFont(font2);
        plus_pushButton = new QPushButton(centralwidget);
        plus_pushButton->setObjectName(QString::fromUtf8("plus_pushButton"));
        plus_pushButton->setGeometry(QRect(40, 420, 89, 71));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        plus_pushButton->setFont(font3);
        sub_pushButton_2 = new QPushButton(centralwidget);
        sub_pushButton_2->setObjectName(QString::fromUtf8("sub_pushButton_2"));
        sub_pushButton_2->setGeometry(QRect(180, 420, 89, 71));
        sub_pushButton_2->setFont(font3);
        multi_pushButton_3 = new QPushButton(centralwidget);
        multi_pushButton_3->setObjectName(QString::fromUtf8("multi_pushButton_3"));
        multi_pushButton_3->setGeometry(QRect(320, 420, 89, 71));
        multi_pushButton_3->setFont(font3);
        division_pushButton_4 = new QPushButton(centralwidget);
        division_pushButton_4->setObjectName(QString::fromUtf8("division_pushButton_4"));
        division_pushButton_4->setGeometry(QRect(460, 420, 89, 71));
        division_pushButton_4->setFont(font3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        calculator_label->setText(QApplication::translate("MainWindow", "SIMPLE CALCULATOR", nullptr));
        num1_label->setText(QApplication::translate("MainWindow", "NUM1", nullptr));
        num2_label_2->setText(QApplication::translate("MainWindow", "NUM2", nullptr));
        result_label_2->setText(QApplication::translate("MainWindow", "RESULT", nullptr));
        plus_pushButton->setText(QApplication::translate("MainWindow", "+", nullptr));
        sub_pushButton_2->setText(QApplication::translate("MainWindow", "-", nullptr));
        multi_pushButton_3->setText(QApplication::translate("MainWindow", "*", nullptr));
        division_pushButton_4->setText(QApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
