#include <iostream>
#include <stdlib.h>

#include <mysql/include/jdbc/mysql_connection.h>

#include <mysql/include/jdbc/cppconn/driver.h>
#include <mysql/include/jdbc/cppconn/exception.h>
#include <mysql/include/jdbc/cppconn/resultset.h>
#include <mysql/include/jdbc/cppconn/statement.h>
#include "connectionDB.h"


using namespace std;

int main(){
    connectionDB connect;
    cout << "Hello" << endl;
    try {
        sql::Driver *driver;
        sql::Connection *con;
        sql::Statement *stmt;
        sql::ResultSet *res;
        driver = get_driver_instance(); 
        con = driver->connect("tcp://10.20.11.124:3306", connect.fetchuserName(), connect.fetchPassword());
        con->setSchema("hoteldb");
        cout << "Connected!" << endl;
    }catch(exception e){
        cout << "Fail" << endl;
    }

    return 0;
}