
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
		stmt->execute("DELETE FROM curador;");
		stmt->execute("DELETE FROM proponente;");
		stmt->execute("DELETE FROM candidato;");
		stmt->execute("DELETE FROM pessoa;");

		std::string strCpf, strNome, strRank, strUni;
		std::ifstream cpfs("../../../../data/pessoas/cpfs.txt");
		std::ifstream nomes("../../../../data/pessoas/nomes.txt");
		std::ifstream ranking("../../../../data/pessoas/ranking.txt");
		std::ifstream universidade("../../../../data/pessoas/universidade.txt");

		while(std::getline(cpfs, strCpf)) {
			std::getline(nomes, strNome);
			std::getline(ranking, strRank);
			std::getline(universidade, strUni);

			long long cpf = (long long) std::atol(strCpf.c_str());
			float randVal = float(rand() / (RAND_MAX + 1.0));

			stmt->execute(
				"INSERT INTO pessoa(cpf, nome, universidade)"
					"VALUES(" + std::to_string(cpf) + ", '" + strNome + "', '" + strUni + "')"
			);

			/* 70% de chance de ser apenas candidato e 20% de chance de ser apenas proponente e 10% de chance de ser os dois */
			if (randVal < 0.7 || randVal >= 0.9) {
				stmt->execute(
					"INSERT INTO candidato(cpf, ranking_geral)"
						"VALUES(" + std::to_string(cpf) + ", " + std::to_string(std::atoi(strRank.c_str())) + ")"
				);
			}

			if(randVal >= 0.7) {
				std::string strFormacao;
				randVal = float(rand() / (RAND_MAX + 1.0));

				if (randVal < 0.10) { /* 10% de chance de ter apenas basico */
					strFormacao = "basica";
				} else if (randVal < 0.40) { /* 40% de chance de ter apenas tecnico */
					strFormacao = "tecnica";
				} else { /* 60% de chance de ter superior */
					strFormacao = "superior";
				}

				stmt->execute(
					"INSERT INTO proponente(cpf, formacao_academica)"
						"VALUES(" + std::to_string(cpf) + ", '" + strFormacao + "')"
				);
			}

			if(randVal >= 0.95) {
				randVal = float(rand() / (RAND_MAX + 1.0));

				stmt->execute(
					"INSERT INTO curador(cpf, confiabilidade)"
						"VALUES(" + std::to_string(cpf) + ", " + std::to_string(randVal) + ")"
				);
			}
		}

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
