#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <saletrends.h>

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
    if(!conn.db.isOpen()){
        conn.dbConnectionOpen();
    }
    ui->stackedWidget->setCurrentIndex(0);
    QSqlQueryModel * model = new QSqlQueryModel;
    QSqlQuery* qry = new QSqlQuery(conn.db);

    qry->prepare("SELECT * FROM Products");
    qry->exec();
    model->setQuery(*qry);
    ui->inventoryTable->setModel(model);
    ui->inventoryTable->setAlternatingRowColors(true);
    ui->inventoryTable->setStyleSheet("alternate-background-color: #84A98C");
    ui->inventoryTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void MainWindow::on_itemBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_recentBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    _rOrders.popOrderTable();
}

void MainWindow::on_trendBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    _sTrend.popSaleTable();
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_inventoryTable_clicked(const QModelIndex &index)
{
    ui->stackedWidget->setCurrentIndex(4);
    QString val = ui->inventoryTable->model()->data(index).toString();
    qDebug()<<" 1";
    qDebug() <<val;

}

