#include "editarproponente.h"
#include "ui_editarproponente.h"

#include <QMessageBox>

EditarProponente::EditarProponente(QWidget *parent, sql::Statement *_stmt) :
    QDialog(parent),
    ui(new Ui::EditarProponente)
{
    ui->setupUi(this);

    showMaximized();

    QHeaderView* header = ui->proponenteTable->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    header->setStretchLastSection(true);

    header = ui->questoesTable->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    header->setStretchLastSection(true);

    try {
        stmt = _stmt;

        std::unique_ptr<sql::ResultSet> res(stmt->executeQuery("select * from topico;"));
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

    updateProponenteTable();
}

EditarProponente::~EditarProponente()
{
    delete ui;
}

void EditarProponente::buscar()
{
    try {
        std::string query = "SELECT P.cpf, P.nome, P.universidade, "
                            "C.formacao_academica FROM proponente AS C INNER JOIN pessoa "
                            "AS P ON C.cpf = P.cpf AND P.cpf = " + ui->etCpf->text().toStdString() +
                            ";";

        std::unique_ptr<sql::ResultSet> res(stmt->executeQuery(query));

        ui->etNome->setText("");
        ui->etUniversidade->setText("");
        ui->etFormacao->setText("");

        ui->etBuscar->setText(QString::fromStdString(query));

        while (res->next()) {
            ui->etNome->setText(QString::fromStdString(res->getString("nome")));
            ui->etUniversidade->setText(QString::fromStdString(res->getString("universidade")));
            ui->etFormacao->setText(QString::fromStdString(res->getString("formacao_academica")));
        }

        query = "SELECT * FROM propoe WHERE cpf = " + ui->etCpf->text().toStdString() + ";";
        res.reset(stmt->executeQuery(query));

        ui->etQuestoes->setText(QString::fromStdString(query));

        ui->questoesTable->setRowCount(0);

        int numQuestoes = 0;

        while (res->next()) {
            ui->questoesTable->insertRow(numQuestoes);

            ui->questoesTable->setItem(numQuestoes, 0, new QTableWidgetItem(QString::fromStdString(res->getString("id"))));
            ui->questoesTable->setItem(numQuestoes, 1, new QTableWidgetItem(QString::fromStdString(res->getString("data"))));

            ++numQuestoes;
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
}

void EditarProponente::adicionar()
{
    try {
        std::string query = "INSERT IGNORE INTO pessoa(cpf, nome, universidade) VALUES("
                + ui->etCpf->text().toStdString() + ", '" + ui->etNome->text().toStdString() + "', '"
                + ui->etUniversidade->text().toStdString() + "');";

        ui->etAdicionarPessoa->setText(QString::fromStdString(query));
        stmt->execute(query);

        query = "INSERT INTO proponente(cpf, formacao_academica) VALUES(" + ui->etCpf->text().toStdString() +
                ", '" + ui->etFormacao->text().toStdString() + "');";

        ui->etAdicionarProponente->setText(QString::fromStdString(query));
        stmt->execute(query);

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

    updateProponenteTable();
}

void EditarProponente::atualizar()
{
    try {
        std::string query = "UPDATE pessoa SET "
                            "nome = '" + ui->etNome->text().toStdString() +
                            "', universidade = '" + ui->etUniversidade->text().toStdString() +
                            "' WHERE cpf = " + ui->etCpf->text().toStdString() + ";";

        ui->etUpdatePessoa->setText(QString::fromStdString(query));
        stmt->execute(query);

        query = "UPDATE proponente SET "
                "formacao_academica = '" + ui->etFormacao->text().toStdString() +
                "' WHERE cpf = " + ui->etCpf->text().toStdString() + ";";

        ui->etUpdateProponente->setText(QString::fromStdString(query));
        stmt->execute(query);
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

    updateProponenteTable();
}

void EditarProponente::remover()
{
    try {
        std::string query = "DELETE FROM propoe WHERE cpf = " + ui->etCpf->text().toStdString() + ";";
        ui->etRemovePropoe->setText(QString::fromStdString(query));
        stmt->execute(query);

        query = "DELETE FROM proponente WHERE cpf = " + ui->etCpf->text().toStdString() + ";";
        ui->etRemoveProponente->setText(QString::fromStdString(query));
        stmt->execute(query);

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

    updateProponenteTable();
}

void EditarProponente::updateProponenteTable()
{
    try {
        std::string query = "SELECT P.cpf, P.nome, P.universidade, C.formacao_academica FROM proponente AS C INNER JOIN pessoa AS P ON C.cpf = P.cpf;";
        std::unique_ptr<sql::ResultSet> res(stmt->executeQuery(query));

        ui->etProponente->setText(QString::fromStdString(query));

        ui->proponenteTable->setRowCount(0);

        int numProponentes = 0;

        while (res->next()) {
            ui->proponenteTable->insertRow(numProponentes);

            ui->proponenteTable->setItem(numProponentes, 0, new QTableWidgetItem(QString::fromStdString(res->getString("cpf"))));
            ui->proponenteTable->setItem(numProponentes, 1, new QTableWidgetItem(QString::fromStdString(res->getString("nome"))));
            ui->proponenteTable->setItem(numProponentes, 2, new QTableWidgetItem(QString::fromStdString(res->getString("universidade"))));
            ui->proponenteTable->setItem(numProponentes, 3, new QTableWidgetItem(QString::fromStdString(res->getString("formacao_academica"))));

            ++numProponentes;
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
}
