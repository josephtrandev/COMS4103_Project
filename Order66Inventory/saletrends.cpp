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
    QString JanQry = "SELECT * FROM Sales WHERE SoldDate BETWEEN '2020-01-01' AND '2020-01-30'";
    QString FebQry = "SELECT * FROM Sales WHERE SoldDate BETWEEN '2020-02-01' AND '2020-02-29'";
    QString MarQry = "SELECT * FROM Sales WHERE SoldDate BETWEEN '2020-03-01' AND '2020-03-30'";
    QString AprQry = "SELECT * FROM Sales WHERE SoldDate BETWEEN '2020-04-01' AND '2020-04-31'";
    QString MayQry = "SELECT * FROM Sales WHERE SoldDate BETWEEN '2020-05-01' AND '2020-05-30'";
    QString JunQry = "SELECT * FROM Sales WHERE SoldDate BETWEEN '2020-06-01' AND '2020-06-31'";
    QString JulQry = "SELECT * FROM Sales WHERE SoldDate BETWEEN '2020-07-01' AND '2020-07-30'";
    QString AugQry = "SELECT * FROM Sales WHERE SoldDate BETWEEN '2020-08-01' AND '2020-08-31'";
    QString SepQry = "SELECT * FROM Sales WHERE SoldDate BETWEEN '2020-09-01' AND '2020-09-30'";
    QString OctQry = "SELECT * FROM Sales WHERE SoldDate BETWEEN '2020-10-01' AND '2020-10-31'";
    QString NovQry = "SELECT * FROM Sales WHERE SoldDate BETWEEN '2020-11-01' AND '2020-11-30'";
    QString DecQry = "SELECT * FROM Sales WHERE SoldDate BETWEEN '2020-12-01' AND '2020-12-31'";
    QString AllQry = "SELECT * FROM Sales";

    int currIndex = ui->comboBox->currentIndex();

    switch (currIndex) {
        case 0:
            qryPopTable(AllQry);
            break;
        case 1:
            qryPopTable(JanQry);
            break;
        case 2:
            qryPopTable(FebQry);
            break;
        case 3:
            qryPopTable(MarQry);
            break;
        case 4:
            qryPopTable(AprQry);
            break;
        case 5:
            qryPopTable(MayQry);
            break;
        case 6:
            qryPopTable(JunQry);
            break;
        case 7:
            qryPopTable(JulQry);
            break;
        case 8:
            qryPopTable(AugQry);
            break;
        case 9:
            qryPopTable(SepQry);
            break;
        case 10:
            qryPopTable(OctQry);
            break;
        case 11:
            qryPopTable(NovQry);
            break;
        case 12:
            qryPopTable(DecQry);
            break;
        default:
            index = 0;
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
}
