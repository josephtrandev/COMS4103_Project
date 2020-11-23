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

void saleTrends::qryPopTable(QString qryName){
    QSqlQueryModel * model = new QSqlQueryModel;
    QSqlQuery* qry = new QSqlQuery(conn.db);

    qry->prepare(qryName);
    qry->exec();
    model->setQuery(*qry);
    ui->saleTrendTb->setModel(model);
}

void saleTrends::on_comboBox_currentIndexChanged(int index)
{
    QString JanQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'January' GROUP BY ProductID";
    QString FebQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'February' GROUP BY ProductID";
    QString MarQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'March' GROUP BY ProductID";
    QString AprQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'April' GROUP BY ProductID";
    QString MayQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'May' GROUP BY ProductID";
    QString JunQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'June' GROUP BY ProductID";
    QString JulQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'July' GROUP BY ProductID";
    QString AugQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'August' GROUP BY ProductID";
    QString SepQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'September' GROUP BY ProductID";
    QString OctQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'October' GROUP BY ProductID";
    QString NovQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'November' GROUP BY ProductID";
    QString DecQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'December' GROUP BY ProductID";
    QString AllQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales GROUP BY ProductID;";
    QString noFilter = "SELECT * FROM Sales";

    int currIndex = index;

    switch (currIndex) {
        case 0:
            qryPopTable(noFilter);
            break;
        case 1:
            qryPopTable(AllQry);
            break;
        case 2:
            qryPopTable(JanQry);
            break;
        case 3:
            qryPopTable(FebQry);
            break;
        case 4:
            qryPopTable(MarQry);
            break;
        case 5:
            qryPopTable(AprQry);
            break;
        case 6:
            qryPopTable(MayQry);
            break;
        case 7:
            qryPopTable(JunQry);
            break;
        case 8:
            qryPopTable(JulQry);
            break;
        case 9:
            qryPopTable(AugQry);
            break;
        case 10:
            qryPopTable(SepQry);
            break;
        case 11:
            qryPopTable(OctQry);
            break;
        case 12:
            qryPopTable(NovQry);
            break;
        case 13:
            qryPopTable(DecQry);
        default:
            break;
    }
}

void saleTrends::on_rtnToSaleTrend_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void saleTrends::on_goToAdvSrch_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    QSqlQueryModel * model = new QSqlQueryModel;
    QSqlQuery* qry = new QSqlQuery(conn.db);

    qry->prepare("SELECT ProductID FROM Products");
    qry->exec();
    model->setQuery(*qry);
    ui->secProductId->setModel(model);
    ui->secProductId->setCurrentIndex(-1);
}
