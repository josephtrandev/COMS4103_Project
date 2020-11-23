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


    void on_comboBox_currentIndexChanged(int index);

    void on_rtnToSaleTrend_clicked();

    void on_goToAdvSrch_clicked();

    void on_secProductId_currentIndexChanged(const QString &arg1);

private:
    Ui::saleTrends *ui;
    dbConnection conn;
    void qryPopTable(QString qryName);
};

#endif // SALETRENDS_H
