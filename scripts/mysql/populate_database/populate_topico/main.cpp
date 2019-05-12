
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

		stmt->execute("DELETE FROM propoe;");
		stmt->execute("DELETE FROM questao;");
		stmt->execute("DELETE FROM topico;");

		stmt->execute(
			"INSERT INTO topico(nome, especificidade) VALUES('BEGINNER', 1)"
		);

		stmt->execute(
			"INSERT INTO topico(nome, especificidade) VALUES('AD-HOC', 3)"
		);

		stmt->execute(
			"INSERT INTO topico(nome, especificidade) VALUES('STRINGS', 5)"
		);

		stmt->execute(
			"INSERT INTO topico(nome, especificidade) VALUES('DATA STRUCTURES AND LIBRARIES', 4)"
		);

		stmt->execute(
			"INSERT INTO topico(nome, especificidade) VALUES('MATHEMATICS', 7)"
		);

		stmt->execute(
			"INSERT INTO topico(nome, especificidade) VALUES('PARADIGMS', 6)"
		);

		stmt->execute(
			"INSERT INTO topico(nome, especificidade) VALUES('GRAPH', 8)"
		);

		stmt->execute(
			"INSERT INTO topico(nome, especificidade) VALUES('COMPUTATIONAL GEOMETRY', 9)"
		);

		stmt->execute(
			"INSERT INTO topico(nome, especificidade) VALUES('SQL', 8)"
		);

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
