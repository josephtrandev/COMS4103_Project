#ifndef DBCONNECTION_H
#define DBCONNECTION_H

#include <iostream>
#include <QSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QFile>
#include <QTextStream>

class dbConnection{
    public:
        dbConnection();
        ~dbConnection();
        bool dbConnectionOpen();
        QSqlDatabase db;

    private:
       void getConnInfo();
       QString hostname;
       QString username;
       QString dbName;
       QString password;

};



#endif // DBCONNECTION_H
