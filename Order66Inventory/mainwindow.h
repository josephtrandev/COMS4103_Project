#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <itemlookup.h>
#include <saletrends.h>
#include <recentorders.h>
#include "dbConnection.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_invenBtn_clicked();

    void on_itemBtn_clicked();

    void on_recentBtn_clicked();

    void on_trendBtn_clicked();

private:
    Ui::MainWindow *ui;
    ItemLookUp _iLookUp;
    saleTrends _sTrend;
    recentOrders _rOrders;
    dbConnection conn;
};
#endif // MAINWINDOW_H
