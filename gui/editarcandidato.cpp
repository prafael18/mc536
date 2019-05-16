#include "editarcandidato.h"
#include "ui_editarcandidato.h"

#include <QMessageBox>

EditarCandidato::EditarCandidato(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditarCandidato)
{
    ui->setupUi(this);

    this->setWindowTitle("Editar dados Candidato");

    showMaximized();

    try {
        driver = sql::mysql::get_mysql_driver_instance();
        con = driver->connect("tcp://localhost:3306", "root", "password");

        stmt = con->createStatement();
        stmt->execute("USE uni_competicoes");
    } catch (sql::SQLException &e) {
        QMessageBox msgBox;
        msgBox.setText(
            "SQL ERROR: " + QString::fromStdString(e.what()) +
            "\n\n(MySQL error code: " + QString::number(e.getErrorCode()) +
            ", SQLState: " + QString::fromStdString(e.getSQLState()) + ")"
        );
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Ok);
        int ret = msgBox.exec();

        std::cout << "# ERR: SQLException in " << __FILE__;
        std::cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
        std::cout << "# ERR: " << e.what();
        std::cout << " (MySQL error code: " << e.getErrorCode();
        std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
    }

    updateTableCandidatos();
}




EditarCandidato::~EditarCandidato()
{
    delete ui;

    if (con) delete con;
    if (stmt) delete stmt;
}

void EditarCandidato::updateTableCandidatos()
{
    try {
        std::string query = "SELECT P.cpf, P.nome, P.universidade, C.ranking_geral FROM candidato as C INNER JOIN pessoa as P ON C.cpf = P.cpf;";
        sql::ResultSet  *res = stmt->executeQuery(query);

        ui->etSelectTable->setText(QString::fromStdString(query));

        numCandidatos = 0;
        while (res->next()) {
            ui->candidatosTable->removeRow(numCandidatos);
            ui->candidatosTable->insertRow(numCandidatos);

            ui->candidatosTable->setItem(numCandidatos, 0, new QTableWidgetItem(QString::number(res->getInt64(1))));
            ui->candidatosTable->setItem(numCandidatos, 1, new QTableWidgetItem(QString::fromStdString(res->getString("nome"))));
            ui->candidatosTable->setItem(numCandidatos, 3, new QTableWidgetItem(QString::fromStdString(res->getString("universidade"))));
            ui->candidatosTable->setItem(numCandidatos, 2, new QTableWidgetItem(QString::number(res->getInt64(4))));

            ++numCandidatos;
        }

        delete res;
    } catch (sql::SQLException &e) {
        std::cout << "# ERR: SQLException in " << __FILE__;
        std::cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
        std::cout << "# ERR: " << e.what();
        std::cout << " (MySQL error code: " << e.getErrorCode();
        std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
    }
}

void EditarCandidato::updateCandidato()
{
    queryAtualizar = "UPDATE pessoa SET nome = '" + ui->etNome->text().toStdString() + "' WHERE cpf = " + ui->etCpf->text().toStdString() + ";";

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

        sql::ResultSet  *res = stmt->executeQuery(query);

        ui->etBusca->setText(QString::fromStdString(query));

        fflush(stdout);

        numCandidatos = 0;
        while (res->next()) {
            ui->etCpf->setText(QString::number(res->getInt64(1)));
            ui->etNome->setText(QString::fromStdString(res->getString("nome")));
            ui->etUniversidade->setText(QString::fromStdString(res->getString("universidade")));
            ui->etRanking->setText(QString::number(res->getInt64(4)));

            ++numCandidatos;
        }

        delete res;
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
