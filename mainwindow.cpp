#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <qDebug.h>

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

void MainWindow::on_btn_click_me_1_clicked()
{
    qDebug() << "User Clciked Button 1";
}

void MainWindow::on_btn_click_me_2_clicked()
{
    qDebug() << "User Clciked Button 2";
}

void MainWindow::on_btn_click_me_3_clicked()
{
    qDebug() << "User Clciked Button 3";
}
