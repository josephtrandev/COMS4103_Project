#ifndef VIEWINVENTORY_H
#define VIEWINVENTORY_H

#include <QWidget>

namespace Ui {
class viewInventory;
}

class viewInventory : public QWidget
{
    Q_OBJECT

public:
    explicit viewInventory(QWidget *parent = nullptr);
    ~viewInventory();

private:
    Ui::viewInventory *ui;
};

#endif // VIEWINVENTORY_H
