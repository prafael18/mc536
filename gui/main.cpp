#include "mainwindow.h"
#include <QApplication>
#include <QStyleFactory>

#include "mysql_driver.h"
#include "mysql_connection.h"
#include "cppconn/exception.h"
#include "cppconn/resultset.h"
#include "cppconn/statement.h"

int main(int argc, char *argv[])
{
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

    printf("Ola mundo!\n");

    try {
        sql::mysql::MySQL_Driver *driver = sql::mysql::get_mysql_driver_instance();
        sql::Connection *con = driver->connect("tcp://127.0.0.1:3306", "root", "password");

        sql::Statement *stmt = con->createStatement();
        stmt->execute("CREATE DATABASE IF NOT EXISTS teste");
        stmt->execute("USE teste");
        stmt->execute("CREATE TABLE IF NOT EXISTS test(id INT, label CHAR(1))");
//        stmt->execute("INSERT INTO test(id, label) VALUES (1, 'a')");
//        stmt->execute("INSERT INTO test(id, label) VALUES (2, 'b')");
//        stmt->execute("INSERT INTO test(id, label) VALUES (1, 'c')");
//        stmt->execute("INSERT INTO test(id, label) VALUES (3, 'd')");

        sql::ResultSet  *res = stmt->executeQuery("SELECT id, label FROM test ORDER BY id ASC");
        while (res->next()) {
          // You can use either numeric offsets...
          std::cout << "id = " << res->getInt(1); // getInt(1) returns the first column
          // ... or column names for accessing results.
          // The latter is recommended.
          std::cout << ", label = '" << res->getString("label") << "'" << std::endl;
        }

        delete res;
        delete stmt;
        delete con;
    } catch (sql::SQLException &e) {
        std::cout << "# ERR: SQLException in " << __FILE__;
        std::cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
        std::cout << "# ERR: " << e.what();
        std::cout << " (MySQL error code: " << e.getErrorCode();
        std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
    }

    return 0;
//    return a.exec();
}
