#include <iostream>
#include "dbConnection.h"

dbConnection::dbConnection(){
    getConnInfo();
    db = QSqlDatabase::addDatabase("QMYSQL", "QMYSQL");
    db.setHostName(hostname);
    db.setUserName(username);
    db.setDatabaseName(dbName);
    db.setPassword(password);
    db.open();
    if(db.isOpen()){
        qDebug() <<"Database opened!";
    }else{
        qDebug() << db.lastError();
    }
}

dbConnection::~dbConnection(){
    this->db = QSqlDatabase();
    QSqlDatabase::removeDatabase(this->dbName);
}

bool dbConnection::dbConnectionOpen(){
    getConnInfo();
    db = QSqlDatabase::addDatabase("QMYSQL", "QMYSQL");
    db.setHostName(hostname);
    db.setUserName(username);
    db.setDatabaseName(dbName);
    db.setPassword(password);
    db.open();
    if(db.isOpen()){
        qDebug() <<"Database opened!";
        return true;
    }else{
        qDebug() << db.lastError();
        return false;
    }
}

void dbConnection::getConnInfo(){
    QFile inputfile("..//Order66Inventory//info.txt");
    inputfile.open(QIODevice::ReadOnly);
    QTextStream textStream(&inputfile);
    if(inputfile.isOpen()){
        textStream >> hostname >> username >> dbName >> password;
        inputfile.close();
    }else{
        qDebug() << "File not found";
    }
}
