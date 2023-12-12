#include "login.h"
#include "ui_login.h"
#include "QDebug"
#include "QMessageBox"

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}










void login::on_exit_pushButton_2_clicked()
{
    QApplication::exit();
}

void login::on_lohgin_pushButton_3_clicked()
{
    QString username=ui->username_lineEdit->text();
    QString password=ui->password_lineEdit_3->text();
    if(username == "admin")
    {
        if(password=="admin123")
        {
            QMessageBox::information(0,"status","login sucessfull");
            login::close();
            mainmenuUi.show();

        }
        else
        {
            QMessageBox::information(0,"status","Incorrect password");
        }
    }
    else
    {
        QMessageBox::information(0,"status","Incorrect usename");
    }
}
