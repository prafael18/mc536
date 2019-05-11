
#include <cstdio>

#include "include/jdbc/mysql_driver.h"
#include "include/jdbc/mysql_connection.h"
#include "include/jdbc/cppconn/exception.h"
#include "include/jdbc/cppconn/resultset.h"
#include "include/jdbc/cppconn/statement.h"


int main() {
	sql::mysql::MySQL_Driver *driver;
	sql::Connection *con;

	driver = sql::mysql::get_mysql_driver_instance();
	con = driver->connect("tcp://127.0.0.1:3306", "root", "password");

	return 0;
}
