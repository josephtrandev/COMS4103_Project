#include "saletrends.h"
#include "ui_saletrends.h"

#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>

saleTrends::saleTrends(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::saleTrends)
{
    ui->setupUi(this);
}

saleTrends::~saleTrends()
{
    delete ui;
}

void saleTrends::popSaleTable(){
    if(!conn.db.isOpen()){
        conn.dbConnectionOpen();
    }

    QSqlQueryModel * model = new QSqlQueryModel;
    QSqlQuery* qry = new QSqlQuery(conn.db);

    qry->prepare("SELECT * FROM Sales");
    qry->exec();
    model->setQuery(*qry);
    ui->saleTrendTb->setModel(model);
    ui->saleTrendTb->setAlternatingRowColors(true);
    ui->saleTrendTb->setStyleSheet("alternate-background-color: #84A98C");
    ui->saleTrendTb->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}
