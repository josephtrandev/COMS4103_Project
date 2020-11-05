#ifndef DATABASECONNECTION__H
#define DATABASECONNECTION__H

#include <iostream>
#include <stdlib.h>
#include <mysql/include/jdbc/mysql_connection.h>
#include <mysql/include/jdbc/cppconn/driver.h>
#include <mysql/include/jdbc/cppconn/exception.h>
#include "dbCredential.h"

class databaseConnection{
    public:
        sql::Connection* dbConnection();
    
    private:
        dbCredential credential;
};

sql::Connection* databaseConnection::dbConnection(){
    sql::Connection *conn;
    sql::Driver *driver;
    try {
        driver = get_driver_instance(); 
        conn = driver->connect(credential.fetchUrl(), credential.fetchuserName(), credential.fetchPassword());
        conn->setSchema("order66db");
        std::cout << "Connected!" << std::endl;
        return conn;
    }catch(sql::SQLException e){
        std::cout << "SQL error: " << e.what() << std::endl;
        return 0;
    }
}
#endif