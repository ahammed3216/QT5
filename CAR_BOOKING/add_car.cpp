#include "add_car.h"
#include "ui_add_car.h"
#include <QtCore/QCoreApplication>
#include <QFile>
#include <QTextStream>

add_car::add_car(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_car)
{
    ui->setupUi(this);

}

add_car::~add_car()
{
    delete ui;
}

void add_car::on_exit_pushButton_3_clicked()
{
    add_car::close();
}

void add_car::on_submit_pushButton_4_clicked()
{
    QVector<QString>car_data;

    car_data.append(ui->car_no_lineEdit->text());
    car_data.append(ui->brand_lineEdit_2->text());
    car_data.append(ui->type_lineEdit_3->text());
    car_data.append(ui->fare_lineEdit_2->text());

    QFile file("car_data.txt");

    if(file.open(QIODevice::Append | QIODevice::Text))
    {

        QTextStream(&file);

        for(auto i=0;i<car_data.size();i++)
        {
            stream<<car_data[i]<<" ";
        }
        stream<<"\n";
    }

    file.close();
}
