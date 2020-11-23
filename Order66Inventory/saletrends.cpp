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

    qry->prepare("SELECT * FROM Sales ORDER BY ProductID");
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
    QString JanQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'January' GROUP BY ProductID ORDER BY AmountSold DESC";
    QString FebQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'February' GROUP BY ProductID ORDER BY AmountSold DESC";
    QString MarQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'March' GROUP BY ProductID ORDER BY AmountSold DESC";
    QString AprQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'April' GROUP BY ProductID ORDER BY AmountSold DESC";
    QString MayQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'May' GROUP BY ProductID ORDER BY AmountSold DESC";
    QString JunQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'June' GROUP BY ProductID ORDER BY AmountSold DESC";
    QString JulQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'July' GROUP BY ProductID ORDER BY AmountSold DESC";
    QString AugQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'August' GROUP BY ProductID ORDER BY AmountSold DESC";
    QString SepQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'September' GROUP BY ProductID ORDER BY AmountSold DESC";
    QString OctQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'October' GROUP BY ProductID ORDER BY AmountSold DESC";
    QString NovQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'November' GROUP BY ProductID ORDER BY AmountSold DESC";
    QString DecQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales WHERE monthname(SoldDate) = 'December' GROUP BY ProductID ORDER BY AmountSold DESC";
    QString AllQry = "SELECT ProductID, ProductName, SUM(QuantitySold) AS AmountSold, YEAR(SoldDate)AS YearSoldIn FROM Sales GROUP BY ProductID ORDER BY AmountSold DESC";
    QString noFilter = "SELECT * FROM Sales ORDER BY ProductID ASC";

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
}

void saleTrends::on_secProductId_currentIndexChanged(const QString &arg1)
{
    QString qryType = "SELECT ProductID, ProductName, ProductStyle, MONTHNAME(SoldDate) AS MonthSoldIn, SUM(QuantitySold) AS TotalSold, ProductPrice AS PricePerEach, YEAR(SoldDate) AS YearSoldIn FROM Sales WHERE ProductID = '"+arg1+"' GROUP BY MonthSoldIn ORDER BY MONTH(SoldDate) ASC";
    QSqlQueryModel * model = new QSqlQueryModel;
    QSqlQuery* qry = new QSqlQuery(conn.db);

    qry->prepare(qryType);
    qry->exec();
    model->setQuery(*qry);
    ui->advSalesTrendTB->setModel(model);
    ui->advSalesTrendTB->setAlternatingRowColors(true);
    ui->advSalesTrendTB->setStyleSheet("alternate-background-color: #84A98C");
    ui->advSalesTrendTB->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}
