#include "book_car.h"
#include "ui_book_car.h"

book_car::book_car(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::book_car)
{
    ui->setupUi(this);
}

book_car::~book_car()
{
    delete ui;
}
