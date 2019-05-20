#include "editarquestoes.h"
#include "ui_editarquestoes.h"

#include <QMessageBox>

EditarQuestoes::EditarQuestoes(QWidget *parent, sql::Statement *_stmt) :
    QDialog(parent),
    ui(new Ui::EditarQuestoes)
{
    ui->setupUi(this);

    this->setWindowTitle("Editar dados Questão");

    showMaximized();

    QHeaderView* header = ui->questoesTable->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    header->setStretchLastSection(true);

    try {
        stmt = _stmt;

        std::unique_ptr<sql::ResultSet> res(stmt->executeQuery("select * from topico;"));

        while(res->next()) {
            ui->cbTopico->addItem(QString::fromStdString(res->getString("nome")));
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

    updateTableCandidatos();
}

EditarQuestoes::~EditarQuestoes()
{
    delete ui;
}

void EditarQuestoes::buscar()
{
    try {
        std::string query = "SELECT * FROM questao WHERE id = " + ui->etId->text().toStdString() + ";";
        std::unique_ptr<sql::ResultSet> res(stmt->executeQuery(query));

        ui->etBusca->setText(QString::fromStdString(query));

        ui->etNome->setText("");
        ui->etNivel->setText("");
        ui->etEnunciado->setText("");
        ui->etEntrada->setText("");
        ui->etSaida->setText("");
        ui->etTempo->setText("");


        while (res->next()) {
            ui->etNome->setText(QString::fromStdString(res->getString("nome")));
            ui->etNivel->setText(QString::fromStdString(res->getString("nivel")));
            ui->etEnunciado->setText(QString::fromStdString(res->getString("enunciado")));
            ui->etEntrada->setText(QString::fromStdString(res->getString("entrada")));
            ui->etSaida->setText(QString::fromStdString(res->getString("saida")));
            ui->etTempo->setText(QString::fromStdString(res->getString("limite_de_tempo")));

            ui->cbTopico->setCurrentText(QString::fromStdString(res->getString("nome_topico")));
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

void EditarQuestoes::adicionar()
{
    try {
        std::string query = "INSERT INTO questao(nome, nivel, enunciado, entrada, saida, limite_de_tempo, nome_topico) "
                             "VALUES('" + ui->etNome->text().toStdString() +
                             "', " + ui->etNivel->text().toStdString() +
                             ", '" + ui->etEnunciado->text().toStdString() +
                             "', '" + ui->etEntrada->text().toStdString() +
                             "', '" + ui->etSaida->text().toStdString() +
                             "', " + ui->etTempo->text().toStdString() +
                             ", '" + ui->cbTopico->currentText().toStdString() +
                             "');";

        ui->etAdiciona->setText(QString::fromStdString(query));

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

    updateTableCandidatos();
}

void EditarQuestoes::atualizar()
{
    try {
        std::string query = "UPDATE questao SET "
                            "nome = '" + ui->etNome->text().toStdString() +
                            "', nivel = " + ui->etNivel->text().toStdString() +
                            ", enunciado = '" + ui->etEnunciado->text().toStdString() +
                            "', entrada = '" + ui->etEntrada->text().toStdString() +
                            "', saida = '" + ui->etSaida->text().toStdString() +
                            "', limite_de_tempo = " + ui->etTempo->text().toStdString() +
                            ", nome_topico = '" + ui->cbTopico->currentText().toStdString() +
                            "' WHERE id = " + ui->etId->text().toStdString() + ";";

        ui->etUpdate->setText(QString::fromStdString(query));

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

    updateTableCandidatos();
}

void EditarQuestoes::remover()
{
    try {
        std::string queryRemovePossui = "DELETE from possui WHERE id_questao = " + ui->etId->text().toStdString() + ";";
        std::string queryRemovePropoe = "DELETE from propoe WHERE id = " + ui->etId->text().toStdString() + ";";
        std::string queryRemoveResolve = "DELETE from resolve WHERE id = " + ui->etId->text().toStdString() + ";";
        std::string queryRemoveQuestao = "DELETE from questao WHERE id = " + ui->etId->text().toStdString() + ";";

        ui->etRemovePossui->setText(QString::fromStdString(queryRemovePossui));
        ui->etRemovePropoe->setText(QString::fromStdString(queryRemovePropoe));
        ui->etRemoveResolve->setText(QString::fromStdString(queryRemoveResolve));
        ui->etRemoveQuestao->setText(QString::fromStdString(queryRemoveQuestao));

        stmt->execute(queryRemovePossui);
        stmt->execute(queryRemovePropoe);
        stmt->execute(queryRemoveResolve);
        stmt->execute(queryRemoveQuestao);

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

void EditarQuestoes::updateTableCandidatos()
{
    try {
        std::string query = "SELECT id, nome, nome_topico, nivel, limite_de_tempo FROM questao;";
        std::unique_ptr<sql::ResultSet> res(stmt->executeQuery(query));

        ui->etSelectTable->setText(QString::fromStdString(query));

        ui->questoesTable->setRowCount(0);

        int numQuestoes = 0;

        while (res->next()) {
            ui->questoesTable->insertRow(numQuestoes);

            ui->questoesTable->setItem(numQuestoes, 0, new QTableWidgetItem(QString::fromStdString(res->getString("id"))));
            ui->questoesTable->setItem(numQuestoes, 1, new QTableWidgetItem(QString::fromStdString(res->getString("nome"))));
            ui->questoesTable->setItem(numQuestoes, 2, new QTableWidgetItem(QString::fromStdString(res->getString("nome_topico"))));
            ui->questoesTable->setItem(numQuestoes, 3, new QTableWidgetItem(QString::fromStdString(res->getString("nivel"))));
            ui->questoesTable->setItem(numQuestoes, 4, new QTableWidgetItem(QString::fromStdString(res->getString("limite_de_tempo"))));

            ++numQuestoes;
        }
    } catch (sql::SQLException &e) {
        std::cout << "# ERR: SQLException in " << __FILE__;
        std::cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
        std::cout << "# ERR: " << e.what();
        std::cout << " (MySQL error code: " << e.getErrorCode();
        std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
    }
}
