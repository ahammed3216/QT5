/********************************************************************************
** Form generated from reading UI file 'book_car.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOK_CAR_H
#define UI_BOOK_CAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_book_car
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *book_car)
    {
        if (book_car->objectName().isEmpty())
            book_car->setObjectName(QString::fromUtf8("book_car"));
        book_car->resize(400, 300);
        buttonBox = new QDialogButtonBox(book_car);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(book_car);
        QObject::connect(buttonBox, SIGNAL(accepted()), book_car, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), book_car, SLOT(reject()));

        QMetaObject::connectSlotsByName(book_car);
    } // setupUi

    void retranslateUi(QDialog *book_car)
    {
        book_car->setWindowTitle(QApplication::translate("book_car", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class book_car: public Ui_book_car {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_CAR_H
