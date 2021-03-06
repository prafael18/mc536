#include "editarcandidato.h"
#include "ui_editarcandidato.h"

#include <QMessageBox>

EditarCandidato::EditarCandidato(QWidget *parent, sql::Statement *_stmt) :
    QDialog(parent),
    ui(new Ui::EditarCandidato)
{
    ui->setupUi(this);

    this->setWindowTitle("Editar dados Candidato");

    showMaximized();

    stmt = _stmt;

    QHeaderView* header = ui->questaoTable->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    header->setStretchLastSection(true);

    header = ui->candidatosTable->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    header->setStretchLastSection(true);

    header = ui->competicaoTable->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    header->setStretchLastSection(true);

    updateTableCandidatos();
}


EditarCandidato::~EditarCandidato()
{
    delete ui;
}

void EditarCandidato::updateTableCandidatos()
{
    try {
        std::string query = "SELECT P.cpf, P.nome, P.universidade, C.ranking_geral FROM candidato as C INNER JOIN pessoa as P ON C.cpf = P.cpf;";
        std::unique_ptr<sql::ResultSet> res(stmt->executeQuery(query));

        ui->etSelectTable->setText(QString::fromStdString(query));

        ui->candidatosTable->setRowCount(0);

        numCandidatos = 0;

        while (res->next()) {
            ui->candidatosTable->insertRow(numCandidatos);

            ui->candidatosTable->setItem(numCandidatos, 0, new QTableWidgetItem(QString::fromStdString(res->getString("cpf"))));
            ui->candidatosTable->setItem(numCandidatos, 1, new QTableWidgetItem(QString::fromStdString(res->getString("nome"))));
            ui->candidatosTable->setItem(numCandidatos, 3, new QTableWidgetItem(QString::fromStdString(res->getString("universidade"))));
            ui->candidatosTable->setItem(numCandidatos, 2, new QTableWidgetItem(QString::fromStdString(res->getString("ranking_geral"))));

            ++numCandidatos;
        }
    } catch (sql::SQLException &e) {
        std::cout << "# ERR: SQLException in " << __FILE__;
        std::cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
        std::cout << "# ERR: " << e.what();
        std::cout << " (MySQL error code: " << e.getErrorCode();
        std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
    }
}

void EditarCandidato::mostraQuestoes()
{
    try {
        std::string query = \
                "SELECT id, nome "
                "FROM (SELECT id FROM resolve WHERE cpf = " + ui->etCpf->text().toStdString() + ") as r "
                      "NATURAL JOIN (SELECT id, nome from questao) as q;";

        ui->etQuestao->setText(QString::fromStdString(query));

        std::unique_ptr<sql::ResultSet>  res(stmt->executeQuery(query));

        ui->questaoTable->setRowCount(0);

        int numQuestoes = 0;
        while(res->next()) {
            ui->questaoTable->insertRow(numQuestoes);

            ui->questaoTable->setItem(numQuestoes, 0, new QTableWidgetItem(QString::fromStdString(res->getString("id"))));
            ui->questaoTable->setItem(numQuestoes, 1, new QTableWidgetItem(QString::fromStdString(res->getString("nome"))));

            ++numQuestoes;
        }

        ui->etTotalQuestoes->setText(QString::number(numQuestoes));

        fflush(stdout);
    } catch (sql::SQLException &e) {
        QMessageBox msgBox;
        msgBox.setText(
            "SQL ERROR: " + QString::fromStdString(e.what()) +
            "\n\n(MySQL error code: " + QString::number(e.getErrorCode()) +
            ", SQLState: " + QString::fromStdString(e.getSQLState()) + ")"
        );
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();

        std::cout << "# ERR: SQLException in " << __FILE__;
        std::cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
        std::cout << "# ERR: " << e.what();
        std::cout << " (MySQL error code: " << e.getErrorCode();
        std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
    }
}


void EditarCandidato::mostraCompeticao()
{
    try {
        std::string query = "SELECT nome, ranking "
                "FROM (SELECT id, ranking FROM participa WHERE cpf = " + ui->etCpf->text().toStdString() + ") as p NATURAL JOIN competicao_academica;";

        ui->etCompeticao->setText(QString::fromStdString(query));

        std::unique_ptr<sql::ResultSet>  res(stmt->executeQuery(query));

        ui->competicaoTable->setRowCount(0);

        int numCompeticoes = 0;
        while(res->next()) {
            ui->competicaoTable->insertRow(numCompeticoes);

            ui->competicaoTable->setItem(numCompeticoes, 0, new QTableWidgetItem(QString::fromStdString(res->getString("nome"))));
            ui->competicaoTable->setItem(numCompeticoes, 1, new QTableWidgetItem(QString::fromStdString(res->getString("ranking"))));

            ++numCompeticoes;
        }
        ui->etNumComp->setText(QString::number(numCompeticoes));

        fflush(stdout);
    } catch (sql::SQLException &e) {
        QMessageBox msgBox;
        msgBox.setText(
            "SQL ERROR: " + QString::fromStdString(e.what()) +
            "\n\n(MySQL error code: " + QString::number(e.getErrorCode()) +
            ", SQLState: " + QString::fromStdString(e.getSQLState()) + ")"
        );
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();

        std::cout << "# ERR: SQLException in " << __FILE__;
        std::cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
        std::cout << "# ERR: " << e.what();
        std::cout << " (MySQL error code: " << e.getErrorCode();
        std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
    }
}

void EditarCandidato::updateCandidato()
{
    queryAtualizar = "UPDATE pessoa SET nome = '" + ui->etNome->text().toStdString() + "', "
            "universidade = '" + ui->etUniversidade->text().toStdString() +
            "' WHERE cpf = " + ui->etCpf->text().toStdString() + ";";

    ui->etUpdate->setText(QString::fromStdString(queryAtualizar));

    try {
        stmt->execute(queryAtualizar);
    } catch (sql::SQLException &e) {
        QMessageBox msgBox;
        msgBox.setText(
            "SQL ERROR: " + QString::fromStdString(e.what()) +
            "\n\n(MySQL error code: " + QString::number(e.getErrorCode()) +
            ", SQLState: " + QString::fromStdString(e.getSQLState()) + ")"
        );
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();

        std::cout << "# ERR: SQLException in " << __FILE__;
        std::cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
        std::cout << "# ERR: " << e.what();
        std::cout << " (MySQL error code: " << e.getErrorCode();
        std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
    }

    updateTableCandidatos();
}

void EditarCandidato::buscaCandidato()
{
    try {
        std::string query = "SELECT P.cpf, P.nome, P.universidade, C.ranking_geral "
                            "FROM candidato AS C, pessoa AS P WHERE C.cpf = " +
                            ui->etCpf->text().toStdString() +
                            " AND P.cpf = " + ui->etCpf->text().toStdString() + ";";

        std::unique_ptr<sql::ResultSet>  res(stmt->executeQuery(query));

        ui->etBusca->setText(QString::fromStdString(query));

        ui->etNome->setText("");
        ui->etUniversidade->setText("");
        ui->etRanking->setText("");

        numCandidatos = 0;
        while (res->next()) {
            ui->etCpf->setText(QString::number(res->getInt64(1)));
            ui->etNome->setText(QString::fromStdString(res->getString("nome")));
            ui->etUniversidade->setText(QString::fromStdString(res->getString("universidade")));
            ui->etRanking->setText(QString::number(res->getInt64(4)));

            ++numCandidatos;
        }
    } catch (sql::SQLException &e) {
        QMessageBox msgBox;
        msgBox.setText(
            "SQL ERROR: " + QString::fromStdString(e.what()) +
            "\n\n(MySQL error code: " + QString::number(e.getErrorCode()) +
            ", SQLState: " + QString::fromStdString(e.getSQLState()) + ")"
        );
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();

        std::cout << "# ERR: SQLException in " << __FILE__;
        std::cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
        std::cout << "# ERR: " << e.what();
        std::cout << " (MySQL error code: " << e.getErrorCode();
        std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
    }

    mostraQuestoes();
    mostraCompeticao();
}

void EditarCandidato::removerCandidato()
{
    try {
        queryRemover = "DELETE FROM resolve WHERE cpf = " + ui->etCpf->text().toStdString() + ";";
        ui->etRemoveParticipa->setText(QString::fromStdString(queryRemover));
        stmt->execute(queryRemover);

        queryRemover = "DELETE FROM participa WHERE cpf = " + ui->etCpf->text().toStdString() + ";";
        ui->etRemoveResolve->setText(QString::fromStdString(queryRemover));
        stmt->execute(queryRemover);

        queryRemover = "DELETE FROM candidato WHERE cpf = " + ui->etCpf->text().toStdString() + ";";
        ui->etRemoveCandidato->setText(QString::fromStdString(queryRemover));
        stmt->execute(queryRemover);

    } catch (sql::SQLException &e) {
        QMessageBox msgBox;
        msgBox.setText(
            "SQL ERROR: " + QString::fromStdString(e.what()) +
            "\n\n(MySQL error code: " + QString::number(e.getErrorCode()) +
            ", SQLState: " + QString::fromStdString(e.getSQLState()) + ")"
        );
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();

        std::cout << "# ERR: SQLException in " << __FILE__;
        std::cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
        std::cout << "# ERR: " << e.what();
        std::cout << " (MySQL error code: " << e.getErrorCode();
        std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
    }

    updateTableCandidatos();
}

void EditarCandidato::adicionarCandidato()
{

    try {
        queryAtualizar = "INSERT IGNORE INTO pessoa(cpf, nome, universidade) VALUES(" + ui->etCpf->text().toStdString() + ", '" + ui->etNome->text().toStdString() + "', '" + ui->etUniversidade->text().toStdString() + "');";
        ui->etAdicionaPessoa->setText(QString::fromStdString(queryAtualizar));
        stmt->execute(queryAtualizar);

        queryAtualizar = "INSERT INTO candidato(cpf, ranking_geral) VALUES(" + ui->etCpf->text().toStdString() + ", " + std::to_string(numCandidatos + 1) + ");";
        ui->etAdicionaCandidato->setText(QString::fromStdString(queryAtualizar));
        stmt->execute(queryAtualizar);

    } catch (sql::SQLException &e) {
        QMessageBox msgBox;
        msgBox.setText(
            "SQL ERROR: " + QString::fromStdString(e.what()) +
            "\n\n(MySQL error code: " + QString::number(e.getErrorCode()) +
            ", SQLState: " + QString::fromStdString(e.getSQLState()) + ")"
        );
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();

        std::cout << "# ERR: SQLException in " << __FILE__;
        std::cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
        std::cout << "# ERR: " << e.what();
        std::cout << " (MySQL error code: " << e.getErrorCode();
        std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
    }

    updateTableCandidatos();
}
