#ifndef RECENTORDERS_H
#define RECENTORDERS_H

#include <QWidget>
#include "dbConnection.h"

namespace Ui {
class recentOrders;
}

class recentOrders : public QWidget
{
    Q_OBJECT

public:
    explicit recentOrders(QWidget *parent = nullptr);
    ~recentOrders();
    void popOrderTable();

private slots:
    void on_orderTable_clicked(const QModelIndex &index);

    void on_pushButton_clicked();

private:
    Ui::recentOrders *ui;
    dbConnection conn;
};

#endif // RECENTORDERS_H
