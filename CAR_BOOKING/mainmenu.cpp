#include "mainmenu.h"
#include "ui_mainmenu.h"

mainmenu::mainmenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainmenu)
{
    ui->setupUi(this);
}

mainmenu::~mainmenu()
{
    delete ui;
}

void mainmenu::on_AD_CAR_clicked()
{
    mainmenu::close();
    addcarUi.show();
}
