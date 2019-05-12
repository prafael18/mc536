
#include <cstdio>

#include "mysql_driver.h"
#include "mysql_connection.h"
#include "cppconn/exception.h"
#include "cppconn/resultset.h"
#include "cppconn/statement.h"

int main() {
	int cont = 0;
	try {
		sql::mysql::MySQL_Driver *driver;
		sql::Connection *con;

		driver = sql::mysql::get_mysql_driver_instance();
		con = driver->connect("tcp://127.0.0.1:3306", "root", "password");

		sql::Statement *stmt = con->createStatement();

		/* Limpa todos os dados da base de dados, caso a mesma jah exista */
		stmt->execute("DROP DATABASE IF EXISTS uni_competicoes;");

		/* Cria a tabela */
		stmt->execute("CREATE DATABASE IF NOT EXISTS uni_competicoes;");

		/* Escolhe a base de dados a ser utilizada */
		stmt->execute("USE uni_competicoes;");

		/* Cria todas as tabelas que existirao na base de dados */
		stmt->execute(
		"	CREATE TABLE competicao_academica("
		"		id INTEGER NOT NULL UNIQUE,"
		"		nome VARCHAR(100),"
		"		data DATE,"
		"		local VARCHAR(1000),"
		"		PRIMARY KEY(ID)"
		"	);"
		);

		++cont;

		stmt->execute(
		"	CREATE TABLE fase("
		"		id INTEGER NOT NULL UNIQUE,"
		"		num_aprov INTEGER,"
		"		id_competicao INTEGER ,"
		"		PRIMARY KEY(id),"
		"		FOREIGN KEY(id_competicao) REFERENCES competicao_academica(id)"
		"	);"
		);

		++cont;

		stmt->execute(
		"	CREATE TABLE prova("
		"		id INTEGER NOT NULL UNIQUE,"
		"		versao INTEGER,"
		"		id_fase INTEGER NOT NULL,"
		"		PRIMARY KEY(id),"
		"		FOREIGN KEY(id_fase) REFERENCES fase(id)"
		"	);"
		);

		++cont;

		stmt->execute(
		"	CREATE TABLE topico("
		"		nome VARCHAR(100) NOT NULL UNIQUE,"
		"		especificidade INTEGER,"
		"		PRIMARY KEY(nome)"
		"	);"
		);

		++cont;

		stmt->execute(
		"	CREATE TABLE questao("
		"		id INTEGER NOT NULL UNIQUE,"
		"		nome VARCHAR(100),"
		"		nivel INTEGER,"
		"		enunciado VARCHAR(10000),"
		"		entrada VARCHAR(10000),"
		"		saida VARCHAR(10000),"
		"		limite_de_tempo FLOAT,"
		"		nome_topico VARCHAR(100) NOT NULL,"
		"		PRIMARY KEY(id),"
		"		FOREIGN KEY(nome_topico) REFERENCES topico(nome)"
		"	);"
		);

		++cont;

		stmt->execute(
		"	CREATE TABLE pessoa("
		"		cpf INTEGER NOT NULL UNIQUE,"
		"		nome VARCHAR(100),"
		"		PRIMARY KEY(cpf)"
		"	);"
		);

		++cont;

		stmt->execute(
		"	CREATE TABLE proponente("
		"		cpf INTEGER NOT NULL UNIQUE,"
		"		formacao_academica VARCHAR(100),"
		"		PRIMARY KEY(cpf),"
		"		FOREIGN KEY(cpf) REFERENCES pessoa(cpf)"
		"	);"
		);

		++cont;

		stmt->execute(
		"	CREATE TABLE candidato("
		"		cpf INTEGER NOT NULL UNIQUE,"
		"		ranking_geral INTEGER,"
		"		PRIMARY KEY(cpf),"
		"		FOREIGN KEY(cpf) REFERENCES pessoa(cpf)"
		"	);"
		);

		++cont;

		stmt->execute(
		"	CREATE TABLE curador("
		"		cpf INTEGER NOT NULL UNIQUE,"
		"		confiabilidade FLOAT,"
		"		PRIMARY KEY(cpf),"
		"		FOREIGN KEY(cpf) REFERENCES pessoa(cpf)"
		"	);"
		);

		++cont;

		stmt->execute(
		"	CREATE TABLE participa("
		"		id INTEGER NOT NULL,"
		"		cpf INTEGER NOT NULL,"
		"		ranking INTEGER,"
		"		PRIMARY KEY(id, cpf),"
		"		FOREIGN KEY(id) REFERENCES competicao_academica(id),"
		"		FOREIGN KEY(cpf) REFERENCES candidato(cpf)"
		"	);"
		);

		++cont;

		stmt->execute(
		"	CREATE TABLE propoe("
		"		id INTEGER NOT NULL,"
		"		cpf INTEGER NOT NULL,"
		"		data DATE,"
		"		PRIMARY KEY(id, cpf),"
		"		FOREIGN KEY(id)"
		"		REFERENCES questao(id),"
		"		FOREIGN KEY(cpf) REFERENCES proponente(cpf)"
		"	);"
		);

		++cont;

		stmt->execute(
		"	CREATE TABLE resolve("
		"		id INTEGER NOT NULL,"
		"		cpf INTEGER NOT NULL,"
		"		data DATE,"
		"		codigo VARCHAR(1000),"
		"		PRIMARY KEY(id, cpf),"
		"		FOREIGN KEY(id)"
		"		REFERENCES questao(id),"
		"		FOREIGN KEY(cpf) REFERENCES candidato(cpf)"
		"	);"
		);

		++cont;

		stmt->execute(
		"	CREATE TABLE monta("
		"		id INTEGER NOT NULL,"
		"		cpf INTEGER NOT NULL,"
		"		data DATE,"
		"		PRIMARY KEY(id, cpf),"
		"		FOREIGN KEY(id) REFERENCES prova(id),"
		"		FOREIGN KEY(cpf) REFERENCES curador(cpf)"
		"	);"
		);

		++cont;

		stmt->execute(
		"	CREATE TABLE possui("
		"		id_prova INTEGER NOT NULL,"
		"		id_questao INTEGER NOT NULL,"
		"		PRIMARY KEY(id_prova, id_questao),"
		"		FOREIGN KEY(id_prova) REFERENCES prova(id),"
		"		FOREIGN KEY(id_questao) REFERENCES questao(id)"
		"	);"
		);

		++cont;

		stmt->execute(
		"	CREATE TABLE contempla("
		"		id INTEGER NOT NULL,"
		"		nome VARCHAR(100) NOT NULL,"
		"		PRIMARY KEY(id, nome),"
		"		FOREIGN KEY(id) REFERENCES prova(id),"
		"		FOREIGN KEY(nome) REFERENCES topico(nome)"
		"	);"
		);

		++cont;

		delete con;
		delete stmt;
	} catch (sql::SQLException &e) {
		std::cout << "# ERR: SQLException in " << __FILE__;
		std::cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
		std::cout << "# ERR: " << e.what();
		std::cout << " (MySQL error code: " << e.getErrorCode();
		std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
		std::cout << "CONT: " << cont << std::endl;
	}

	return 0;
}
