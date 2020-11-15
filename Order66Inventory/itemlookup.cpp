#include "itemlookup.h"
#include "ui_itemlookup.h"

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
