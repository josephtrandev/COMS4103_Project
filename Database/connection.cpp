//NOTE:
//Must have appropriate drives in your complier settings
//Must download "Connecter/C" From MySql website
//connectionDB.h is hidden for security purpopese.
//Make your own connectionDB.h that with three function that return you DB link, DB username, DB password.
//Must complie this file with -lmysqlcppconn

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
        con = driver->connect(connect.fetchUrl(), connect.fetchuserName(), connect.fetchPassword());
        con->setSchema("hoteldb");
        cout << "Connected!" << endl;
    }catch(exception e){
        cout << "Fail" << endl;
    }

    return 0;
}