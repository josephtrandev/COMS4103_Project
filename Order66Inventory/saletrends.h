#ifndef SALETRENDS_H
#define SALETRENDS_H

#include <QWidget>

namespace Ui {
class saleTrends;
}

class saleTrends : public QWidget
{
    Q_OBJECT

public:
    explicit saleTrends(QWidget *parent = nullptr);
    ~saleTrends();

private:
    Ui::saleTrends *ui;
};

#endif // SALETRENDS_H
