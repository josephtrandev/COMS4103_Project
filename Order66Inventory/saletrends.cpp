#include "saletrends.h"
#include "ui_saletrends.h"

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
