#ifndef RECENTORDERS_H
#define RECENTORDERS_H

#include <QWidget>

namespace Ui {
class recentOrders;
}

class recentOrders : public QWidget
{
    Q_OBJECT

public:
    explicit recentOrders(QWidget *parent = nullptr);
    ~recentOrders();

private:
    Ui::recentOrders *ui;
};

#endif // RECENTORDERS_H
