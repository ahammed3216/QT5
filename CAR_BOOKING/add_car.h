#ifndef ADD_CAR_H
#define ADD_CAR_H

#include <QDialog>

namespace Ui {
class add_car;
}

class add_car : public QDialog
{
    Q_OBJECT

public:
    explicit add_car(QWidget *parent = nullptr);
    ~add_car();

private slots:
    void on_exit_pushButton_3_clicked();

    void on_submit_pushButton_4_clicked();

private:
    Ui::add_car *ui;
};

#endif // ADD_CAR_H
