#ifndef SALETRENDS_H
#define SALETRENDS_H

#include <QWidget>
#include "dbConnection.h"

namespace Ui {
class saleTrends;
}

class saleTrends : public QWidget
{
    Q_OBJECT

public:
    explicit saleTrends(QWidget *parent = nullptr);
    ~saleTrends();
    void popSaleTable();

private slots:


private:
    Ui::saleTrends *ui;
    dbConnection conn;
};

#endif // SALETRENDS_H
