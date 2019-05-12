
#include <set>
#include <ctime>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <fstream>

#include "mysql_driver.h"
#include "mysql_connection.h"
#include "cppconn/exception.h"
#include "cppconn/resultset.h"
#include "cppconn/statement.h"

int main() {
	srand((unsigned)time(0));

	try {
		sql::mysql::MySQL_Driver *driver;
		sql::Connection *con;

		driver = sql::mysql::get_mysql_driver_instance();
		con = driver->connect("tcp://127.0.0.1:3306", "root", "password");

		sql::Statement *stmt = con->createStatement();

		/* Escolhe a base de dados a ser utilizada */
		stmt->execute("USE uni_competicoes;");


		delete con;
		delete stmt;
	} catch (sql::SQLException &e) {
		std::cout << "# ERR: SQLException in " << __FILE__;
		std::cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
		std::cout << "# ERR: " << e.what();
		std::cout << " (MySQL error code: " << e.getErrorCode();
		std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
	}

	return 0;
}
