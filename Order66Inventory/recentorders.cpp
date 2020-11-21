#include "recentorders.h"
#include "ui_recentorders.h"

#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>

recentOrders::recentOrders(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::recentOrders)
{
    ui->setupUi(this);
}

recentOrders::~recentOrders()
{
    delete ui;
}

void recentOrders::popOrderTable(){
    if(!conn.db.isOpen()){
        conn.dbConnectionOpen();
    }

    QSqlQueryModel * model = new QSqlQueryModel;
    QSqlQuery* qry = new QSqlQuery(conn.db);

    qry->prepare("SELECT * FROM Orders");
    qry->exec();
    model->setQuery(*qry);
    ui->orderTable->setModel(model);
    ui->orderTable->setAlternatingRowColors(true);
    ui->orderTable->setStyleSheet("alternate-background-color: #84A98C");
    ui->orderTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}
