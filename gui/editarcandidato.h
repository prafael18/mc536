#ifndef EDITARCANDIDATO_H
#define EDITARCANDIDATO_H

#include <QDialog>
#include <memory>

#include "mysql_driver.h"
#include "mysql_connection.h"
#include "cppconn/exception.h"
#include "cppconn/resultset.h"
#include "cppconn/statement.h"

namespace Ui {
class EditarCandidato;
}

class EditarCandidato : public QDialog
{
    Q_OBJECT

public:
    explicit EditarCandidato(QWidget *parent = nullptr, sql::Statement *_stmt = nullptr);
    ~EditarCandidato();

public slots:
    void mostraQuestoes();
    void buscaCandidato();
    void updateCandidato();
    void mostraCompeticao();
    void removerCandidato();
    void adicionarCandidato();

private:
    sql::Statement *stmt = nullptr;
    Ui::EditarCandidato *ui = nullptr;

    void updateTableCandidatos();

    int numQuestoes = 0;
    int numCandidatos = 0;
    int numCompeticoes = 0;
    std::string queryAdicionar;
    std::string queryRemover;
    std::string queryAtualizar;

};

#endif // EDITARCANDIDATO_H
