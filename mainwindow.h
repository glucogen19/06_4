#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include "car.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QLabel *xLabel;
    QLabel *vLabel;
    QLabel *pLabel;
    Car car;
};

#endif // MAINWINDOW_H
