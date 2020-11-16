#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->insertWidget(1, &_iLookUp);
    ui->stackedWidget->insertWidget(2, &_rOrders);
    ui->stackedWidget->insertWidget(3, &_sTrend);
    conn.dbConnectionOpen();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_invenBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    if(!conn.db.isOpen()){
        conn.dbConnectionOpen();
    }
    QSqlQueryModel * model = new QSqlQueryModel;
    QSqlQuery* qry = new QSqlQuery(conn.db);

    qry->prepare("SELECT * FROM Products");
    qry->exec();
    model->setQuery(*qry);
    ui->inventoryTable->setModel(model);
  //  conn.dbConnectionClose();
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
