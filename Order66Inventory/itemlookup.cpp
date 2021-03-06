#include "itemlookup.h"
#include "ui_itemlookup.h"

#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>

ItemLookUp::ItemLookUp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ItemLookUp)
{
    ui->setupUi(this);
}

ItemLookUp::~ItemLookUp()
{
    delete ui;
}

void ItemLookUp::on_lookUpBtn_clicked()
{
    if(!conn.db.isOpen()){
        conn.dbConnectionOpen();
    }
    QString itemId = ui->getItemText->text();
    QSqlQueryModel * model = new QSqlQueryModel;
    QSqlQuery* qry = new QSqlQuery(conn.db);

    qry->prepare("SELECT p.*, i.Quantity, i.Location, i.UpdateDate FROM Products p, Inventory i WHERE p.ProductID = '"+itemId+"' AND i.ProductID = '"+itemId+"'");
   // qry->bindValue(":itemID", itemId);
    qry->exec();
    model->setQuery(*qry);
    ui->itemLookUpTbl->setModel(model);
    ui->itemLookUpTbl->setAlternatingRowColors(true);
    ui->itemLookUpTbl->setStyleSheet("alternate-background-color: #84A98C");
    ui->itemLookUpTbl->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    if(model->rowCount() == 0){
        switch( QMessageBox::warning(
                    this,
                    tr("Invalid Product ID"),
                    tr("No item with that ID was found"),

                    QMessageBox::Close ) )
        {
          default:
            qDebug( "close" );
            break;
        }
        qDebug() << "No value Found!" << Qt::endl;
    }
    ui->getItemText->clear();
}
