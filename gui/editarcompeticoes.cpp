#include "editarcompeticoes.h"
#include "montadialog.h"
#include "resolvedialog.h"
#include "ui_editarcompeticoes.h"

#include <QCheckBox>
#include <QDir>
#include <QInputDialog>
#include <QMessageBox>

EditarCompeticoes::EditarCompeticoes(QWidget *parent, sql::Statement *_stmt) :
    QDialog(parent),
    ui(new Ui::EditarCompeticoes)
{
    ui->setupUi(this);

    showMaximized();

    QHeaderView* header = ui->competicoesTable->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    header->setStretchLastSection(true);

    header = ui->topicosTable->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    header->setStretchLastSection(true);

    header = ui->fasesTable->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    header->setStretchLastSection(true);

    header = ui->candidatosTable->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    header->setStretchLastSection(true);

    header = ui->provasTable->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    header->setStretchLastSection(true);

    header = ui->questoesTable->horizontalHeader();
    header->setSectionResizeMode(QHeaderView::Stretch);
    header->setStretchLastSection(true);

    stmt = _stmt;

    updateCompeticoes();
}

EditarCompeticoes::~EditarCompeticoes()
{
    delete ui;
}

void EditarCompeticoes::buscar()
{
    try {
        std::string query = "SELECT * FROM competicao_academica WHERE id = " + ui->etId->text().toStdString() + ";";
        std::unique_ptr<sql::ResultSet> res(stmt->executeQuery(query));

        ui->etBuscar->setText(QString::fromStdString(query));

        ui->etNome->setText("");
        ui->etData->setText("");
        ui->etLocal->setText("");

        while (res->next()) {
            ui->etNome->setText(QString::fromStdString(res->getString("nome")));
            ui->etData->setText(QString::fromStdString(res->getString("data")));
            ui->etLocal->setText(QString::fromStdString(res->getString("local")));
        }

        query = "SELECT DISTINCT nome FROM contempla WHERE id = " + ui->etId->text().toStdString() + ";";

        res.reset(stmt->executeQuery(query));
        ui->etTopicos->setText(QString::fromStdString(query));

        ui->topicosTable->setRowCount(0);

        int numTopicos = 0;
        while (res->next()) {
            ui->topicosTable->insertRow(numTopicos);

            ui->topicosTable->setItem(numTopicos, 0, new QTableWidgetItem(QString::fromStdString(res->getString("nome"))));

            ++numTopicos;
        }

        query = "SELECT cpf, nome, ranking FROM participa NATURAL JOIN (SELECT cpf, nome FROM pessoa NATURAL JOIN candidato) as p WHERE id = " + ui->etId->text().toStdString() + ";";

        ui->etCandidatos->setText(QString::fromStdString(query));
        res.reset(stmt->executeQuery(query));
        ui->etCandidatos->setText(QString::fromStdString(query));

        ui->candidatosTable->setRowCount(0);

        numTopicos = 0;
        while (res->next()) {
            ui->candidatosTable->insertRow(numTopicos);

            ui->candidatosTable->setItem(numTopicos, 0, new QTableWidgetItem(QString::fromStdString(res->getString("cpf"))));
            ui->candidatosTable->setItem(numTopicos, 1, new QTableWidgetItem(QString::fromStdString(res->getString("nome"))));
            ui->candidatosTable->setItem(numTopicos, 2, new QTableWidgetItem(QString::fromStdString(res->getString("ranking"))));

            ++numTopicos;
        }


        query = "SELECT * FROM fase WHERE id_competicao = " + ui->etId->text().toStdString() + ";";

        res.reset(stmt->executeQuery(query));
        ui->etFases->setText(QString::fromStdString(query));
        ui->fasesTable->setRowCount(0);

        numTopicos = 0;
        while (res->next()) {
            ui->fasesTable->insertRow(numTopicos);

            ui->fasesTable->setItem(numTopicos, 0, new QTableWidgetItem(QString::fromStdString(res->getString("id"))));
            ui->fasesTable->setItem(numTopicos, 1, new QTableWidgetItem(QString::fromStdString(res->getString("num_aprov"))));

            ++numTopicos;
        }

        ui->etNumFases->setText(QString::number(numTopicos));

        //TODO: Add total number of topics
        
        query = "SELECT P.id, P.versao, P.id_fase, M.cpf, M.data "
                "FROM prova AS P INNER JOIN fase as F ON F.id = P.id_fase "
                "AND F.id_competicao = " + ui->etId->text().toStdString() +
                " INNER JOIN monta AS M ON P.id = M.id;";

        res.reset(stmt->executeQuery(query));
        ui->etProvas->setText(QString::fromStdString(query));
        ui->provasTable->setRowCount(0);

        numTopicos = 0;
        while (res->next()) {
            ui->provasTable->insertRow(numTopicos);

            ui->provasTable->setItem(numTopicos, 0, new QTableWidgetItem(QString::fromStdString(res->getString("id"))));
            ui->provasTable->setItem(numTopicos, 1, new QTableWidgetItem(QString::fromStdString(res->getString("versao"))));
            ui->provasTable->setItem(numTopicos, 2, new QTableWidgetItem(QString::fromStdString(res->getString("id_fase"))));
            ui->provasTable->setItem(numTopicos, 3, new QTableWidgetItem(QString::fromStdString(res->getString("cpf"))));
            ui->provasTable->setItem(numTopicos, 4, new QTableWidgetItem(QString::fromStdString(res->getString("data"))));

            ++numTopicos;
        }


        query = "SELECT DISTINCT O.id_questao, P.id, P.versao, "
                "P.id_fase FROM prova AS P INNER JOIN fase as F ON "
                "F.id = P.id_fase AND F.id_competicao = " + ui->etId->text().toStdString() +
                " INNER JOIN monta AS M ON P.id = M.id INNER JOIN possui AS O ON O.id_prova = P.id;";

        res.reset(stmt->executeQuery(query));
        ui->etQuestoes->setText(QString::fromStdString(query));
        ui->questoesTable->setRowCount(0);

        numTopicos = 0;
        while (res->next()) {
            ui->questoesTable->insertRow(numTopicos);

            ui->questoesTable->setItem(numTopicos, 0, new QTableWidgetItem(QString::fromStdString(res->getString("id_questao"))));
            ui->questoesTable->setItem(numTopicos, 1, new QTableWidgetItem(QString::fromStdString(res->getString("id"))));
            ui->questoesTable->setItem(numTopicos, 2, new QTableWidgetItem(QString::fromStdString(res->getString("versao"))));
            ui->questoesTable->setItem(numTopicos, 3, new QTableWidgetItem(QString::fromStdString(res->getString("id_fase"))));

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

void EditarCompeticoes::novaFase()
{

    bool ok;
    QString aprov = QInputDialog::getText(this, tr("QInputDialog::getText()"),
                                             tr("Numero de Aprovados:"), QLineEdit::Normal,
                                             "", &ok);
    if (ok) {
        try {
            std::string query = "INSERT INTO fase(num_aprov, id_competicao) "
                                "VALUES(" + aprov.toStdString() +
                                ", " + ui->etId->text().toStdString() +
                                ");";

            ui->etNovaFase->setText(QString::fromStdString(query));

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
    }

    buscar();
}

void EditarCompeticoes::adicionar()
{
    try {
        std::string query = "INSERT INTO competicao_academica(nome, data, local) "
                             "VALUES(" /*+ ui->etId->text().toStdString() +*/
                             "'" + ui->etNome->text().toStdString() +
                             "', '" + ui->etData->text().toStdString() +
                             "', '" + ui->etLocal->text().toStdString() +
                             "');";

        ui->etAdicionar->setText(QString::fromStdString(query));

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

    updateCompeticoes();
}

void EditarCompeticoes::atualizar()
{
    try {
        std::string query = "UPDATE competicao_academica SET "
                            "nome = '" + ui->etNome->text().toStdString() +
                            "', data = '" + ui->etData->text().toStdString() +
                            "', local = '" + ui->etLocal->text().toStdString() +
                            "' WHERE id = " + ui->etId->text().toStdString() + ";";

        ui->etAtualizar->setText(QString::fromStdString(query));

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

    updateCompeticoes();
}

void EditarCompeticoes::novoTopico()
{
    try {
        QStringList topicos;
        std::unique_ptr<sql::ResultSet> res(stmt->executeQuery("select * from topico;"));

        while(res->next()) {
            topicos.append(QString::fromStdString(res->getString("nome")));
        }

        bool ok;
        QString nome = QInputDialog::getItem(this, "Obtem nome do topico",
                         "Nome Topico: ",
                         topicos, 0, true,
                         &ok);

        std::string query = "INSERT INTO contempla(id, nome) "
                            "VALUES(" + ui->etId->text().toStdString() +
                            ", '" + nome.toStdString() +
                            "')";

        if (ok && !nome.isEmpty()){
            ui->etNovoTopico->setText(QString::fromStdString(query));

            stmt->execute(query);
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

    buscar();
}

void EditarCompeticoes::montaProva()
{
    std::unique_ptr<MontaDialog> dialog(new MontaDialog());

    if (dialog->exec()) {
        try {
            std::string query = "INSERT INTO prova(versao, id_fase) "
                                "VALUES("
                                "" + dialog->getVersao().toStdString() +
                                ", " + dialog->getFase().toStdString() +
                                ");";

            ui->etAddProva->setText(QString::fromStdString(query));
            stmt->execute(query);

            query = "select LAST_INSERT_ID();";
            std::unique_ptr<sql::ResultSet> res(stmt->executeQuery(query));

            while(res->next()) {
                query = "INSERT INTO monta(id, cpf) "
                                    "VALUES(" + res->getString("LAST_INSERT_ID()") +
                                    ", " + dialog->getCpf().toStdString() + ");";

                ui->etAddMonta->setText(QString::fromStdString(query));
                stmt->execute(query);
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

    buscar();
}

void EditarCompeticoes::novaQuestao()
{
    bool ok;
    QString idQuestao = QInputDialog::getText(this, tr("Adiciona Questao"),
                                             tr("Id Questao:"), QLineEdit::Normal,
                                             "", &ok);
    if (ok && !idQuestao.isEmpty()){
        bool ok;
        QString idProva = QInputDialog::getText(this, tr("Adiciona Questao"),
                                                 tr("Id Prova:"), QLineEdit::Normal,
                                                 "", &ok);
        if (ok && !idProva.isEmpty()) {
            try {
                std::string query = "INSERT INTO possui(id_prova, id_questao) "
                                    "VALUES(" + idProva.toStdString() +
                                    ", " + idQuestao.toStdString() +")";

                ui->etAddQuestao->setText(QString::fromStdString(query));

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
        }
    }

    buscar();
}

void EditarCompeticoes::novoCandidato()
{
    bool ok;
    QString cpf = QInputDialog::getText(this, tr("QInputDialog::getText()"),
                                             tr("Cpf do Candidato:"), QLineEdit::Normal,
                                             "", &ok);
    if (ok && !cpf.isEmpty()){
        bool ok;
        QString ranking = QInputDialog::getText(this, tr("QInputDialog::getText()"),
                                                 tr("Ranking do Candidato:"), QLineEdit::Normal,
                                                 "", &ok);
        if (ok) {
            try {
                std::string query = "INSERT INTO participa(id, cpf, ranking) "
                                    "VALUES(" + ui->etId->text().toStdString() +
                                    ", " + cpf.toStdString() +
                                    ", " + QString::number(ranking.toInt()).toStdString() +
                                    ")";

                ui->etNovoCandidato->setText(QString::fromStdString(query));

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
        }
    }

    buscar();
}

void EditarCompeticoes::resolve()
{
    std::unique_ptr<ResolveDialog> dialog(new ResolveDialog());

    if(dialog->exec()) {
        try {
            std::string query = "INSERT INTO resolve(id, cpf, codigo) "
                                "VALUES(" + dialog->getIdQuestao().toStdString() +
                                ", " + dialog->getCpf().toStdString() +
                                ", '" + dialog->getCodigo().toStdString() +
                                "')";

            ui->etResolve->setText(QString::fromStdString(query));

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
    }
}

void EditarCompeticoes::updateCompeticoes() {
    try {
        std::string query = "SELECT id, nome, data, local FROM competicao_academica;";
        std::unique_ptr<sql::ResultSet> res(stmt->executeQuery(query));

        ui->etCompeticoes->setText(QString::fromStdString(query));

        ui->competicoesTable->setRowCount(0);

        int numCompeticoes = 0;
        while (res->next()) {
            ui->competicoesTable->insertRow(numCompeticoes);

            ui->competicoesTable->setItem(numCompeticoes, 0, new QTableWidgetItem(QString::fromStdString(res->getString("id"))));
            ui->competicoesTable->setItem(numCompeticoes, 1, new QTableWidgetItem(QString::fromStdString(res->getString("nome"))));
            ui->competicoesTable->setItem(numCompeticoes, 2, new QTableWidgetItem(QString::fromStdString(res->getString("data"))));
            ui->competicoesTable->setItem(numCompeticoes, 3, new QTableWidgetItem(QString::fromStdString(res->getString("local"))));

            ++numCompeticoes;
        }
    } catch (sql::SQLException &e) {
        std::cout << "# ERR: SQLException in " << __FILE__;
        std::cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
        std::cout << "# ERR: " << e.what();
        std::cout << " (MySQL error code: " << e.getErrorCode();
        std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
    }
}
