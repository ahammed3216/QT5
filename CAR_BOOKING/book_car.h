#ifndef BOOK_CAR_H
#define BOOK_CAR_H

#include <QDialog>

namespace Ui {
class book_car;
}

class book_car : public QDialog
{
    Q_OBJECT

public:
    explicit book_car(QWidget *parent = nullptr);
    ~book_car();

private:
    Ui::book_car *ui;
};

#endif // BOOK_CAR_H
