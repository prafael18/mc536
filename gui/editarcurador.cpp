#include "editarcurador.h"
#include "ui_editarcurador.h"

#include <QMessageBox>

EditarCurador::EditarCurador(QWidget *parent, sql::Statement *_stmt) :
    QDialog(parent),
    ui(new Ui::EditarCurador)
{
    ui->setupUi(this);

    showMaximized();

    QHeaderView* header = ui->curadoresTable->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    header->setStretchLastSection(true);

    header = ui->provasTable->horizontalHeader();
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

    updateCuradoresTable();
}

EditarCurador::~EditarCurador()
{
    delete ui;
}

void EditarCurador::buscar()
{
    try {
        std::string query = "SELECT P.cpf, P.nome, P.universidade, "
                            "C.confiabilidade FROM curador AS C INNER JOIN pessoa "
                            "AS P ON C.cpf = P.cpf AND P.cpf = " + ui->etCpf->text().toStdString() +
                            ";";

        std::unique_ptr<sql::ResultSet> res(stmt->executeQuery(query));

        ui->etNome->setText("");
        ui->etUniversidade->setText("");
        ui->etConfiabilidade->setText("");

        ui->etBuscar->setText(QString::fromStdString(query));

        while (res->next()) {
            ui->etNome->setText(QString::fromStdString(res->getString("nome")));
            ui->etUniversidade->setText(QString::fromStdString(res->getString("universidade")));
            ui->etConfiabilidade->setText(QString::fromStdString(res->getString("confiabilidade")));
        }

        query = "SELECT * FROM monta WHERE cpf = " + ui->etCpf->text().toStdString() + ";";
        res.reset(stmt->executeQuery(query));

        ui->etProvas->setText(QString::fromStdString(query));

        ui->provasTable->setRowCount(0);

        int numProvas = 0;

        while (res->next()) {
            ui->provasTable->insertRow(numProvas);

            ui->provasTable->setItem(numProvas, 0, new QTableWidgetItem(QString::fromStdString(res->getString("id"))));
            ui->provasTable->setItem(numProvas, 1, new QTableWidgetItem(QString::fromStdString(res->getString("data"))));

            ++numProvas;
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

void EditarCurador::adicionar()
{
    try {
        std::string query = "INSERT IGNORE INTO pessoa(cpf, nome, universidade) VALUES("
                + ui->etCpf->text().toStdString() + ", '" + ui->etNome->text().toStdString() + "', '"
                + ui->etUniversidade->text().toStdString() + "');";

        ui->etAdicionarPessoa->setText(QString::fromStdString(query));
        stmt->execute(query);

        query = "INSERT INTO curador(cpf, confiabilidade) VALUES(" + ui->etCpf->text().toStdString() +
                ", " + QString::number(ui->etConfiabilidade->text().toFloat()).toStdString() + ");";

        ui->etAdicionarCurador->setText(QString::fromStdString(query));
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

    updateCuradoresTable();
}

void EditarCurador::atualizar()
{
    try {
        std::string query = "UPDATE pessoa SET "
                            "nome = '" + ui->etNome->text().toStdString() +
                            "', universidade = '" + ui->etUniversidade->text().toStdString() +
                            "' WHERE cpf = " + ui->etCpf->text().toStdString() + ";";

        ui->etUpdatePessoa->setText(QString::fromStdString(query));
        stmt->execute(query);

        query = "UPDATE curador SET "
                "confiabilidade = " + ui->etConfiabilidade->text().toStdString() +
                " WHERE cpf = " + ui->etCpf->text().toStdString() + ";";

        ui->etUpdateCurador->setText(QString::fromStdString(query));
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

    updateCuradoresTable();
}

void EditarCurador::remover()
{
    try {
        std::string query = "DELETE FROM monta WHERE cpf = " + ui->etCpf->text().toStdString() + ";";
        ui->etRemoveMonta->setText(QString::fromStdString(query));
        stmt->execute(query);

        query = "DELETE FROM curador WHERE cpf = " + ui->etCpf->text().toStdString() + ";";
        ui->etRemoveCurador->setText(QString::fromStdString(query));
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

    updateCuradoresTable();
}

void EditarCurador::updateCuradoresTable()
{
    try {
        std::string query = "SELECT P.cpf, P.nome, P.universidade, C.confiabilidade FROM curador AS C INNER JOIN pessoa AS P ON C.cpf = P.cpf;";
        std::unique_ptr<sql::ResultSet> res(stmt->executeQuery(query));

        ui->etCurador->setText(QString::fromStdString(query));

        ui->curadoresTable->setRowCount(0);

        int numCuradores = 0;

        while (res->next()) {
            ui->curadoresTable->insertRow(numCuradores);

            ui->curadoresTable->setItem(numCuradores, 0, new QTableWidgetItem(QString::fromStdString(res->getString("cpf"))));
            ui->curadoresTable->setItem(numCuradores, 1, new QTableWidgetItem(QString::fromStdString(res->getString("nome"))));
            ui->curadoresTable->setItem(numCuradores, 2, new QTableWidgetItem(QString::fromStdString(res->getString("universidade"))));
            ui->curadoresTable->setItem(numCuradores, 3, new QTableWidgetItem(QString::fromStdString(res->getString("confiabilidade"))));

            ++numCuradores;
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


