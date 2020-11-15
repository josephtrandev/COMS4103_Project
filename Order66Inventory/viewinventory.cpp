#include "viewinventory.h"
#include "ui_viewinventory.h"

viewInventory::viewInventory(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::viewInventory)
{
    ui->setupUi(this);
}

viewInventory::~viewInventory()
{
    delete ui;
}
