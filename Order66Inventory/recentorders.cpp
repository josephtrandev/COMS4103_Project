#include "recentorders.h"
#include "ui_recentorders.h"

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
