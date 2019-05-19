#include "editartopico.h"
#include "ui_editartopico.h"

#include <QMessageBox>

EditarTopico::EditarTopico(QWidget *parent, sql::Statement *_stmt) :
    QDialog(parent),
    ui(new Ui::EditarTopico)
{
    ui->setupUi(this);

    showMaximized();

    QHeaderView* header = ui->topicoTable->horizontalHeader();
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

    updateTopicosTable();
}

EditarTopico::~EditarTopico()
{
    delete ui;
}

void EditarTopico::buscar()
{
    try {
        std::string query = "SELECT * FROM topico WHERE nome = '" + ui->etNome->text().toStdString() + "';";

        std::unique_ptr<sql::ResultSet> res(stmt->executeQuery(query));

        ui->etNome->setText("");
        ui->etEspecificidade->setText("");

        ui->etBuscar->setText(QString::fromStdString(query));

        while (res->next()) {
            ui->etNome->setText(QString::fromStdString(res->getString("nome")));
            ui->etEspecificidade->setText(QString::fromStdString(res->getString("especificidade")));
        }

        query = "SELECT id, nome, nivel FROM questao WHERE nome_topico = '" + ui->etNome->text().toStdString() + "';";
        res.reset(stmt->executeQuery(query));

        ui->etQuestoes->setText(QString::fromStdString(query));
        ui->questoesTable->setRowCount(0);

        int numQuestoes = 0;

        while (res->next()) {
            ui->questoesTable->insertRow(numQuestoes);

            ui->questoesTable->setItem(numQuestoes, 0, new QTableWidgetItem(QString::fromStdString(res->getString("id"))));
            ui->questoesTable->setItem(numQuestoes, 1, new QTableWidgetItem(QString::fromStdString(res->getString("nome"))));
            ui->questoesTable->setItem(numQuestoes, 2, new QTableWidgetItem(QString::fromStdString(res->getString("nivel"))));

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

void EditarTopico::atualizar()
{
    try {
        std::string query = "UPDATE topico SET "
                            "especificidade = " + ui->etEspecificidade->text().toStdString() +
                            " WHERE nome = '" + ui->etNome->text().toStdString() + "';";

        ui->etUpdateTopico->setText(QString::fromStdString(query));
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

    updateTopicosTable();
}

void EditarTopico::adicionar()
{
    try {
        std::string query = "INSERT INTO topico(nome, especificidade) "
                             "VALUES('" + ui->etNome->text().toStdString() +
                             "', " + ui->etEspecificidade->text().toStdString() +
                             ");";

        ui->etAdicionarTopico->setText(QString::fromStdString(query));

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

    updateTopicosTable();
}

void EditarTopico::remover()
{
    try {
        std::string query = "DELETE FROM contempla WHERE nome = '" + ui->etNome->text().toStdString() + "';";
        ui->etRemoveContempla->setText(QString::fromStdString(query));
        stmt->execute(query);

        query = "DELETE FROM questao WHERE nome_topico = '" + ui->etNome->text().toStdString() + "';";
        ui->etRemoveQuestao->setText(QString::fromStdString(query));
        stmt->execute(query);

        query = "DELETE FROM topico WHERE nome = '" + ui->etNome->text().toStdString() + "';";
        ui->etRemoveTopico->setText(QString::fromStdString(query));
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

    updateTopicosTable();
}

void EditarTopico::updateTopicosTable()
{
    try {
        std::string query = "SELECT * FROM topico;";
        std::unique_ptr<sql::ResultSet> res(stmt->executeQuery(query));

        ui->etTopicos->setText(QString::fromStdString(query));

        ui->topicoTable->setRowCount(0);

        int numTopicos = 0;

        while (res->next()) {
            ui->topicoTable->insertRow(numTopicos);

            ui->topicoTable->setItem(numTopicos, 0, new QTableWidgetItem(QString::fromStdString(res->getString("nome"))));
            ui->topicoTable->setItem(numTopicos, 1, new QTableWidgetItem(QString::fromStdString(res->getString("especificidade"))));

            ++numTopicos;
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
