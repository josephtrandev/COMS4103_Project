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
        bool dbConnectionOpen();
        void dbConnectionClose();
        QSqlDatabase db;

    private:
       void getConnInfo();
       QString hostname;
       QString username;
       QString dbName;
       QString password;

};

dbConnection::dbConnection(){}

bool dbConnection::dbConnectionOpen(){
    getConnInfo();
    db = QSqlDatabase::addDatabase("QMYSQL", "QMYSQL");
    db.setHostName(hostname);
    db.setUserName(username);
    db.setDatabaseName(dbName);
    db.setPassword(password);
    db.open();
    if(db.open()){
        std::cout<<"Database opened!";
        return true;
    }else{
        qDebug() << db.lastError();
        return false;
    }
}

void dbConnection::dbConnectionClose(){
    QString connection;
    connection=db.connectionName();
    db.close();
    db=QSqlDatabase();
    db.removeDatabase(connection);
    //db.removeDatabase(QSqlDatabase::defaultConnection);
    qDebug()<<("Disconnected.....");
}

void dbConnection::getConnInfo(){
    QFile inputfile("..\\Order66Inventory\\info.txt");
    QTextStream textStream(&inputfile);
    if(inputfile.open(QIODevice::ReadOnly)){
        textStream >> hostname >> username >> dbName >> password;
        inputfile.close();
    }else{
        std::cout << "File not found";
    }
}

#endif // DBCONNECTION_H
