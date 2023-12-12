#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_zero_pushButton_15_clicked();

    void on_one_pushButton_12_clicked();

    void on_two_pushButton_10_clicked();

    void on_three_pushButton_14_clicked();

    void on_four_pushButton_11_clicked();

    void on_four_pushButton_9_clicked();

    void on_six_pushButton_13_clicked();

    void on_seven_pushButton_8_clicked();

    void on_eight_pushButton_16_clicked();

    void on_nine_pushButton_7_clicked();

    void on_clear_pushButton_2_clicked();

    void on_plus_pushButton_3_clicked();

    void on_sub_pushButton_clicked();

    void on_div_pushButton_5_clicked();

    void on_mult_pushButton_4_clicked();

    void on_equal_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;
    double num1;
    QString symbol;

};
#endif // MAINWINDOW_H
