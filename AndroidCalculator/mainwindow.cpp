#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    num1=0;
    symbol="";
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_zero_pushButton_15_clicked()
{
    QString num1=ui->output_lineEdit->text();
    ui->output_lineEdit->setText(num1+"0");
}



void MainWindow::on_one_pushButton_12_clicked()
{
    QString num1=ui->output_lineEdit->text();
    ui->output_lineEdit->setText(num1+"1");
}

void MainWindow::on_two_pushButton_10_clicked()
{
    QString num1=ui->output_lineEdit->text();
    ui->output_lineEdit->setText(num1+"2");

}

void MainWindow::on_three_pushButton_14_clicked()
{
    QString num1=ui->output_lineEdit->text();
    ui->output_lineEdit->setText(num1+"3");

}

void MainWindow::on_four_pushButton_11_clicked()
{
    QString num1=ui->output_lineEdit->text();
    ui->output_lineEdit->setText(num1+"4");
}

void MainWindow::on_four_pushButton_9_clicked()
{
    QString num1=ui->output_lineEdit->text();
    ui->output_lineEdit->setText(num1+"5");
}

void MainWindow::on_six_pushButton_13_clicked()
{
    QString num1=ui->output_lineEdit->text();
    ui->output_lineEdit->setText(num1+"6");
}

void MainWindow::on_seven_pushButton_8_clicked()
{
    QString num1=ui->output_lineEdit->text();
    ui->output_lineEdit->setText(num1+"7");

}

void MainWindow::on_eight_pushButton_16_clicked()
{
    QString num1=ui->output_lineEdit->text();
    ui->output_lineEdit->setText(num1+"8");
}

void MainWindow::on_nine_pushButton_7_clicked()
{
    QString num1=ui->output_lineEdit->text();
    ui->output_lineEdit->setText(num1+"9");
}

void MainWindow::on_clear_pushButton_2_clicked()
{
    ui->output_lineEdit->setText("");
}

void MainWindow::on_plus_pushButton_3_clicked()
{
    num1=ui->output_lineEdit->text().toDouble();
    symbol="+";
    ui->output_lineEdit->setText("");

}

void MainWindow::on_sub_pushButton_clicked()
{
    num1=ui->output_lineEdit->text().toDouble();
    symbol="+";
    ui->output_lineEdit->setText("");

}

void MainWindow::on_div_pushButton_5_clicked()
{
    num1=ui->output_lineEdit->text().toDouble();
    symbol="+";
    ui->output_lineEdit->setText("");

}

void MainWindow::on_mult_pushButton_4_clicked()
{
    num1=ui->output_lineEdit->text().toDouble();
    symbol="+";
    ui->output_lineEdit->setText("");
}

void MainWindow::on_equal_pushButton_6_clicked()
{
    double num2=ui->output_lineEdit->text().toDouble(),result=0;

    if(symbol=="+")
    {
        result=num1+num2;
        ui->output_lineEdit->setText(QString::number(result));
    }
    else if(symbol=="-")
    {
        result=num1-num2;
        ui->output_lineEdit->setText(QString::number(result));
    }
    else if(symbol=="*")
    {
        result=num1*num2;
        ui->output_lineEdit->setText(QString::number(result));
    }
    else
    {
        result=num1/num2;
        ui->output_lineEdit->setText(QString::number(result));

    }
}
