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
#include <mysql/include/jdbc/cppconn/resultset.h>
#include "databaseConnection.h"

using namespace std;

int main(){
    databaseConnection dbConnect;
    sql::Connection *con;
    sql::ResultSet *res;
    sql::Statement *stmt;
    con = dbConnect.dbConnection();
    con->setSchema("order66db");

    stmt = con->createStatement();
    res = stmt->executeQuery("SELECT ProductID FROM Products");
     while (res->next()) {
        cout << "ProductID= " << res->getInt(1) << endl; // getInt(1)/getString() returns the first column
    }

    delete con;
    delete res;
    delete stmt;
    return 0;
}