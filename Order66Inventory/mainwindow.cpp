#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->insertWidget(1, &_iLookUp);
    ui->stackedWidget->insertWidget(2, &_rOrders);
    ui->stackedWidget->insertWidget(3, &_sTrend);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_invenBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_itemBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_recentBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_trendBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}
