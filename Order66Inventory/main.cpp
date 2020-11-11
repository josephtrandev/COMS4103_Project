#include "mainwindow.h"
#include "dbConnection.h"

#include <QApplication>
#include <QSql>
#include <QSqlDriver>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    dbConnection conn;
    conn.dbConnectionOpen();
    QSqlDatabase db = conn.db;

    db.close();
    conn.dbConnectionClose();
    return a.exec();
}
