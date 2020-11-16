#include <iostream>
#include "dbConnection.h"

dbConnection::dbConnection(){}

dbConnection::~dbConnection(){
    QString connection;
    connection=db.connectionName();
    db.close();
    db=QSqlDatabase();
    db.removeDatabase(connection);
    //db.removeDatabase(QSqlDatabase::defaultConnection);
    qDebug()<<("Disconnected.....");
}

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

void dbConnection::getConnInfo(){
    QFile inputfile("C:\\Users\\Vatsal\\Desktop\\info.txt");
    inputfile.open(QIODevice::ReadOnly);
    QTextStream textStream(&inputfile);
    if(inputfile.isOpen()){
        textStream >> hostname >> username >> dbName >> password;
        inputfile.close();
    }else{
        qDebug() << "File not found";
    }
}
