#ifndef MAINMENU_H
#define MAINMENU_H

#include <QDialog>
#include "add_car.h"

namespace Ui {
class mainmenu;
}

class mainmenu : public QDialog
{
    Q_OBJECT

public:
    explicit mainmenu(QWidget *parent = nullptr);
    ~mainmenu();

private slots:
    void on_AD_CAR_clicked();

private:
    Ui::mainmenu *ui;
    add_car addcarUi;
};

#endif // MAINMENU_H
