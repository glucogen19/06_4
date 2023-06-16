#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    xLabel = new QLabel(this);
    xLabel->setFont(QFont("Times New Roman",16,QFont::Bold));
    xLabel->setGeometry(0, 0, 200, 30);

    vLabel = new QLabel(this);
    vLabel->setFont(QFont("Times New Roman",16,QFont::Bold));
    vLabel->setGeometry(0, 30, 200, 30);

    pLabel = new QLabel(this);
    pLabel->setFont(QFont("Times New Roman",16,QFont::Bold));
    pLabel->setGeometry(0, 60, 200, 30);

    xLabel->setText("X: " + QString::number(car.getX()));
    vLabel->setText("V: " + QString::number(car.getV()));
    pLabel->setText("P: " + QString::number(car.getP()));
}

MainWindow::~MainWindow()
{
}
