#ifndef ITEMLOOKUP_H
#define ITEMLOOKUP_H

#include <QWidget>
#include "dbConnection.h"

namespace Ui {
class ItemLookUp;
}

class ItemLookUp : public QWidget
{
    Q_OBJECT

public:
    explicit ItemLookUp(QWidget *parent = nullptr);
    ~ItemLookUp();

private slots:
    void on_lookUpBtn_clicked();

private:
    Ui::ItemLookUp *ui;
    dbConnection conn;
};

#endif // ITEMLOOKUP_H
