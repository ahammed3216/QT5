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
    QLabel *label;
    QLineEdit *output_lineEdit;
    QPushButton *sub_pushButton;
    QPushButton *clear_pushButton_2;
    QPushButton *plus_pushButton_3;
    QPushButton *mult_pushButton_4;
    QPushButton *div_pushButton_5;
    QPushButton *equal_pushButton_6;
    QPushButton *nine_pushButton_7;
    QPushButton *seven_pushButton_8;
    QPushButton *four_pushButton_9;
    QPushButton *two_pushButton_10;
    QPushButton *four_pushButton_11;
    QPushButton *one_pushButton_12;
    QPushButton *six_pushButton_13;
    QPushButton *three_pushButton_14;
    QPushButton *zero_pushButton_15;
    QPushButton *eight_pushButton_16;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(447, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:black"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 371, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:white;"));
        output_lineEdit = new QLineEdit(centralwidget);
        output_lineEdit->setObjectName(QString::fromUtf8("output_lineEdit"));
        output_lineEdit->setGeometry(QRect(12, 64, 421, 91));
        output_lineEdit->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black"));
        sub_pushButton = new QPushButton(centralwidget);
        sub_pushButton->setObjectName(QString::fromUtf8("sub_pushButton"));
        sub_pushButton->setGeometry(QRect(340, 190, 91, 61));
        sub_pushButton->setStyleSheet(QString::fromUtf8("background-color:yellow;"));
        clear_pushButton_2 = new QPushButton(centralwidget);
        clear_pushButton_2->setObjectName(QString::fromUtf8("clear_pushButton_2"));
        clear_pushButton_2->setGeometry(QRect(120, 190, 91, 61));
        clear_pushButton_2->setStyleSheet(QString::fromUtf8("background-color:yellow;"));
        plus_pushButton_3 = new QPushButton(centralwidget);
        plus_pushButton_3->setObjectName(QString::fromUtf8("plus_pushButton_3"));
        plus_pushButton_3->setGeometry(QRect(230, 190, 91, 61));
        plus_pushButton_3->setStyleSheet(QString::fromUtf8("background-color:yellow;"));
        mult_pushButton_4 = new QPushButton(centralwidget);
        mult_pushButton_4->setObjectName(QString::fromUtf8("mult_pushButton_4"));
        mult_pushButton_4->setGeometry(QRect(340, 370, 91, 61));
        mult_pushButton_4->setStyleSheet(QString::fromUtf8("background-color:yellow;"));
        div_pushButton_5 = new QPushButton(centralwidget);
        div_pushButton_5->setObjectName(QString::fromUtf8("div_pushButton_5"));
        div_pushButton_5->setGeometry(QRect(340, 280, 91, 61));
        div_pushButton_5->setStyleSheet(QString::fromUtf8("background-color:yellow;"));
        equal_pushButton_6 = new QPushButton(centralwidget);
        equal_pushButton_6->setObjectName(QString::fromUtf8("equal_pushButton_6"));
        equal_pushButton_6->setGeometry(QRect(340, 460, 91, 61));
        equal_pushButton_6->setStyleSheet(QString::fromUtf8("background-color:yellow;"));
        nine_pushButton_7 = new QPushButton(centralwidget);
        nine_pushButton_7->setObjectName(QString::fromUtf8("nine_pushButton_7"));
        nine_pushButton_7->setGeometry(QRect(10, 190, 91, 61));
        nine_pushButton_7->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        seven_pushButton_8 = new QPushButton(centralwidget);
        seven_pushButton_8->setObjectName(QString::fromUtf8("seven_pushButton_8"));
        seven_pushButton_8->setGeometry(QRect(120, 280, 91, 61));
        seven_pushButton_8->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        four_pushButton_9 = new QPushButton(centralwidget);
        four_pushButton_9->setObjectName(QString::fromUtf8("four_pushButton_9"));
        four_pushButton_9->setGeometry(QRect(10, 370, 91, 61));
        four_pushButton_9->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        two_pushButton_10 = new QPushButton(centralwidget);
        two_pushButton_10->setObjectName(QString::fromUtf8("two_pushButton_10"));
        two_pushButton_10->setGeometry(QRect(10, 460, 91, 61));
        two_pushButton_10->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        four_pushButton_11 = new QPushButton(centralwidget);
        four_pushButton_11->setObjectName(QString::fromUtf8("four_pushButton_11"));
        four_pushButton_11->setGeometry(QRect(120, 370, 91, 61));
        four_pushButton_11->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        one_pushButton_12 = new QPushButton(centralwidget);
        one_pushButton_12->setObjectName(QString::fromUtf8("one_pushButton_12"));
        one_pushButton_12->setGeometry(QRect(120, 460, 91, 61));
        one_pushButton_12->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        six_pushButton_13 = new QPushButton(centralwidget);
        six_pushButton_13->setObjectName(QString::fromUtf8("six_pushButton_13"));
        six_pushButton_13->setGeometry(QRect(230, 280, 91, 61));
        six_pushButton_13->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        three_pushButton_14 = new QPushButton(centralwidget);
        three_pushButton_14->setObjectName(QString::fromUtf8("three_pushButton_14"));
        three_pushButton_14->setGeometry(QRect(230, 370, 91, 61));
        three_pushButton_14->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        zero_pushButton_15 = new QPushButton(centralwidget);
        zero_pushButton_15->setObjectName(QString::fromUtf8("zero_pushButton_15"));
        zero_pushButton_15->setGeometry(QRect(230, 460, 91, 61));
        zero_pushButton_15->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        eight_pushButton_16 = new QPushButton(centralwidget);
        eight_pushButton_16->setObjectName(QString::fromUtf8("eight_pushButton_16"));
        eight_pushButton_16->setGeometry(QRect(10, 280, 91, 61));
        eight_pushButton_16->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 447, 22));
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
        label->setText(QApplication::translate("MainWindow", "CALCULATOR", nullptr));
        sub_pushButton->setText(QApplication::translate("MainWindow", "-", nullptr));
        clear_pushButton_2->setText(QApplication::translate("MainWindow", "C", nullptr));
        plus_pushButton_3->setText(QApplication::translate("MainWindow", "+", nullptr));
        mult_pushButton_4->setText(QApplication::translate("MainWindow", "*", nullptr));
        div_pushButton_5->setText(QApplication::translate("MainWindow", "/", nullptr));
        equal_pushButton_6->setText(QApplication::translate("MainWindow", "=", nullptr));
        nine_pushButton_7->setText(QApplication::translate("MainWindow", "9", nullptr));
        seven_pushButton_8->setText(QApplication::translate("MainWindow", "7", nullptr));
        four_pushButton_9->setText(QApplication::translate("MainWindow", "5", nullptr));
        two_pushButton_10->setText(QApplication::translate("MainWindow", "2", nullptr));
        four_pushButton_11->setText(QApplication::translate("MainWindow", "4", nullptr));
        one_pushButton_12->setText(QApplication::translate("MainWindow", "1", nullptr));
        six_pushButton_13->setText(QApplication::translate("MainWindow", "6", nullptr));
        three_pushButton_14->setText(QApplication::translate("MainWindow", "3", nullptr));
        zero_pushButton_15->setText(QApplication::translate("MainWindow", "0", nullptr));
        eight_pushButton_16->setText(QApplication::translate("MainWindow", "8", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
