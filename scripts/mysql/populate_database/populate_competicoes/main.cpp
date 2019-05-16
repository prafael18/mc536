
#include <set>
#include <ctime>
#include <cstdio>
#include <string>
#include <vector>
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

		stmt->execute("DELETE FROM possui;");
		stmt->execute("DELETE FROM monta;");
		stmt->execute("DELETE FROM contempla;");
		stmt->execute("DELETE FROM prova;");
		stmt->execute("DELETE FROM fase;");
		stmt->execute("DELETE FROM resolve;");
		stmt->execute("DELETE FROM participa;");
		stmt->execute("DELETE FROM competicao_academica;");

		int idFase = 1;
		int idProva = 0;
		int participantes;
		int idCompeticao = 0;

		std::vector<long long> curadores;
		std::vector<long long> candidatos;
		std::map<long long, int> participantesCpfs;
		std::vector<long long> participantesCpfsVec;

		sql::ResultSet  *res = stmt->executeQuery("select cpf from candidato;");
		while (res->next()) {
			candidatos.push_back(res->getInt64(1));
		}
		delete res;

		res = stmt->executeQuery("select cpf from curador;");
		while (res->next()) {
			curadores.push_back(res->getInt64(1));
		}
		delete res;

		for (int ano = 2010; ano < 2019; ++ano) {
			for (int mes = 1; mes <= 12; ++mes) {
				/* o dia da competicao sera entre 10 e 26 */
				int dia = int(10 + (27 - 10) * float(rand() / (RAND_MAX + 1.0)));

				printf("data: %d-%d-%d\n", ano, mes, dia);

				if ((mes + 2) % 3 == 0) {
					++idCompeticao;
					participantesCpfs.clear();
					participantesCpfsVec.clear();

					participantes = 40 + 160 * float(rand() / (RAND_MAX + 1.0));

					std::string nome = "Unicamp Programming Contest";
					std::string local = "Av. Albert Einstein, 1251 Cidade Universitária Zeferino Vaz, Barão Geraldo CEP 13083-852 - Campinas - SP - Brasil";

					// adiciona nova competicao
					stmt->execute(
						"INSERT INTO competicao_academica(id, nome, data, local) "
						"VALUES(" + std::to_string(idCompeticao) + ", '" + nome +
							"', '" + std::to_string(ano) + "-" + std::to_string(mes) + "-" +
							std::to_string(dia) + "', '" + local +
						"');"
					);

					// SELECIONA OS CANDidATOS QUE PARTICIPARAO DA COMPETICAO
					for (int i = 0; i < participantes; ++i) {
						int cpfRand;

						do
					 		cpfRand = int(candidatos.size() * float(rand() / (RAND_MAX + 1.0)));
						while(participantesCpfs.find(candidatos[cpfRand]) != participantesCpfs.end());

						participantesCpfs.insert(std::make_pair(candidatos[cpfRand], 0));
						participantesCpfsVec.push_back(candidatos[cpfRand]);
					}
				}

				/* escolhe a quantidade de aprovados na proxima fase */
				participantes = int(participantes * (0.55 + 0.3 * float(rand() / (RAND_MAX + 1.0))));

				stmt->execute(
					"INSERT INTO fase(id, num_aprov, id_competicao) "
					"VALUES(" + std::to_string(idFase) +
						", " + std::to_string(participantes) +
						", " + std::to_string(idCompeticao) +
					");"
				);

				for (int prova = 1; prova < 3; ++prova) {
					stmt->execute(
						"INSERT INTO prova(id, versao, id_fase) "
						"VALUES(" + std::to_string(idProva) +
							", " + std::to_string(prova) +
							", " + std::to_string(idFase) +
						");"
					);

					long long cpfCurador = curadores[int(curadores.size() * float(rand() / (RAND_MAX + 1.0)))];

					// ADICIONA DADOS NA TABELA MONTA
					stmt->execute(
						"INSERT INTO monta(id, cpf, data) "
						"VALUES(" + std::to_string(idProva) +
							", " + std::to_string(cpfCurador) +
							", '" + std::to_string(ano) + "-" +
							std::to_string(mes) + "-" + std::to_string(dia) + "'"
						");"
					);

					// ADICIONA QUESTOES NA TABELA POSSUI
					std::set<long long> questoes;
					std::vector<long long> questoesId;

					// SELECIONA AS QUESTOES QUE ESTARAO EM CADA PROVA
					res = stmt->executeQuery(
						"select * from (select DISTINCT id, data from propoe) AS SE where SE.data < "
						"'" + std::to_string(ano) + "-" + std::to_string(mes) + "-" + std::to_string(dia) + "';"
					);

					while(res->next()) {
						// printf("Read questao: %lld\n", (long long) res->getInt64(1));
						questoesId.push_back(res->getInt64(1));
					}
					delete res;

					for (int q = 0; q < 10; ++q) {
						long long qId = 0;

						do
							qId = questoesId[int(questoesId.size() * float(rand() / (RAND_MAX + 1.0)))];
						while(questoes.find(qId) != questoes.end());

						questoes.insert(qId);

						stmt->execute("INSERT INTO possui(id_prova, id_questao) "
						"VALUES(" + std::to_string(idProva) + ", " + std::to_string(qId) +
						");");


						// PREENCHE TABELA CONTEMPLA
						res = stmt->executeQuery("select nome_topico from questao where id = " + std::to_string(qId) + ";");
						while(res->next()) {
							std::string topico = res->getString("nome_topico");

							// std::cout << "Topico: " << topico << std::endl;

							stmt->execute("INSERT IGNORE INTO contempla(id, nome)"
								"VALUES(" + std::to_string(idProva) + ", '" + topico +"');"
							);
						}


						// PARA CADA CANDIDATO, COLOCA AS QUESTOES QUE CADA UM RESOLVEU
						for (int p = (prova == 1 ? 0 : participantes / 2); p < (prova == 1 ? participantes / 2 : participantes); ++p) {
							long long cpfP = participantesCpfsVec[p];

							if (float(rand() / (RAND_MAX + 1.0)) < 0.25) {
								participantesCpfs[cpfP]++;
								stmt->execute("INSERT IGNORE INTO resolve(id, cpf, data, codigo) "
										"VALUES(" + std::to_string(qId) + ", " + std::to_string(cpfP) +
											", '" + std::to_string(ano) + "-" + std::to_string(mes) + "-" +
											std::to_string(dia) + "'" + ", '/home/dados/...txt'"
										")"
									";"
								);
							}
						}
					}

					++idProva;
				}

				if (mes % 3 == 0) {
					std::vector<std::pair<long long, int>> aux;

					for (auto it : participantesCpfs) {
						aux.push_back(std::make_pair(it.first, it.second));
					}

					std::sort(aux.begin(), aux.end(), [] (const std::pair<long long, int>& p1, const std::pair<long long, int>& p2) -> bool {
					   return p1.second < p2.second;
					});

					for (int i = 0; i < aux.size(); ++i) {
						stmt->execute("INSERT IGNORE INTO participa(id, cpf, ranking) "
						"VALUES(" + std::to_string(idCompeticao) + ", "
								  + std::to_string(aux[i].first) + ", " + std::to_string(i + 1) +
						");");
					}
				}

				++idFase;
			}
		}

		// competicao_academica (id, Nome, data, local) Ok
		// fase(id, num_aprov, id_competicao) Ok
		// prova(id, versao, id_fase) Ok
		// participa(id, cpf, ranking)
		// resolve(id, cpf, data, codigo) ok
		// monta(id, cpf, data) Ok
		// possui(id_prova, id_questao) Ok
		// contempla(id, Nome) Ok

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
