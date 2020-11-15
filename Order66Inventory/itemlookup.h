#ifndef ITEMLOOKUP_H
#define ITEMLOOKUP_H

#include <QWidget>

namespace Ui {
class ItemLookUp;
}

class ItemLookUp : public QWidget
{
    Q_OBJECT

public:
    explicit ItemLookUp(QWidget *parent = nullptr);
    ~ItemLookUp();

private:
    Ui::ItemLookUp *ui;
};

#endif // ITEMLOOKUP_H
