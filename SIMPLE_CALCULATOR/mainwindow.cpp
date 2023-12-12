#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_plus_pushButton_clicked()
{
    float num1,num2,result;
    QString ourResult;
    num1=ui->num1_lineEdit->text().toFloat();
    num2=ui->num2_lineEdit_2->text().toFloat();
    result=num1+num2;

    ourResult=QString::number(result);
    ui->result_lineEdit_3->setText(ourResult);
    QMessageBox::information(0,"msg","Completed");

}

void MainWindow::on_sub_pushButton_2_clicked()
{

    float num1,num2,result;
    QString ourResult;
    num1=ui->num1_lineEdit->text().toFloat();
    num2=ui->num2_lineEdit_2->text().toFloat();
    result=num1-num2;

    ourResult=QString::number(result);
    ui->result_lineEdit_3->setText(ourResult);
    QMessageBox::information(0,"msg","Completed");
}

void MainWindow::on_multi_pushButton_3_clicked()
{

    float num1,num2,result;
    QString ourResult;
    num1=ui->num1_lineEdit->text().toFloat();
    num2=ui->num2_lineEdit_2->text().toFloat();
    result=num1*num2;

    ourResult=QString::number(result);
    ui->result_lineEdit_3->setText(ourResult);
    QMessageBox::information(0,"msg","Completed");

}

void MainWindow::on_division_pushButton_4_clicked()
{
    float num1,num2,result;
    QString ourResult;
    num1=ui->num1_lineEdit->text().toFloat();
    num2=ui->num2_lineEdit_2->text().toFloat();
    result=num1/num2;

    ourResult=QString::number(result);
    ui->result_lineEdit_3->setText(ourResult);
    QMessageBox::information(0,"msg","Completed");
}
