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

void recentOrders::on_orderTable_clicked(const QModelIndex &index)
{
    ui->rsStackWidget->setCurrentIndex(1);
    QString val = ui->orderTable->model()->data(index).toString();
    if(!conn.db.isOpen()){
        conn.dbConnectionOpen();
    }
    QSqlQuery* invoiceQry = new QSqlQuery(conn.db);
    invoiceQry->prepare("SELECT *"
                        "FROM Invoice WHERE OrderID = '"+val+"'");

    if(invoiceQry->exec()){
        while(invoiceQry->next()){
            ui->invoiceBox->setText(invoiceQry->value(0).toString());
            ui->orderIDBox->setText(invoiceQry->value(1).toString());
            ui->invoiceDateBox->setText(invoiceQry->value(2).toString());
            ui->invoiceStatusBox->setText(invoiceQry->value(3).toString());
            ui->sPriceBox->setText("$" + invoiceQry->value(4).toString());
            ui->quantityBox->setText(invoiceQry->value(5).toString());
            ui->totalBox->setText("$" + invoiceQry->value(8).toString());
        }
    }

    //sales query
    QSqlQuery* saleQry = new QSqlQuery(conn.db);
    saleQry->prepare("SELECT * FROM Sales WHERE OrderID = '"+val+"'");
    if(saleQry->exec()){
        while(saleQry->next()){
            ui->saleIDBox->setText(saleQry->value(0).toString());
            ui->productNameBox->setText(saleQry->value(5).toString());
            ui->productStyleBox->setText(saleQry->value(6).toString());
        }
    }

    //customer query
    QSqlQuery* cusQry = new QSqlQuery(conn.db);
    cusQry->prepare("SELECT CustomerID FROM Orders WHERE OrderID = '"+val+"'");
    if(cusQry->exec()){
        while(cusQry->next()){
            ui->customerIDBox->setText(cusQry->value(0).toString());
        }
    }
}

void recentOrders::on_pushButton_clicked()
{
    ui->rsStackWidget->setCurrentIndex(0);
}
