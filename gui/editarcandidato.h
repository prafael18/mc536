#ifndef EDITARCANDIDATO_H
#define EDITARCANDIDATO_H

#include <QDialog>

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
    explicit EditarCandidato(QWidget *parent = nullptr);
    ~EditarCandidato();

public slots:
    void updateCandidato();
    void buscaCandidato();
    void removerCandidato();
    void adicionarCandidato();

private:
    sql::Statement *stmt = nullptr;
    sql::Connection *con = nullptr;
    Ui::EditarCandidato *ui = nullptr;
    sql::mysql::MySQL_Driver *driver = nullptr;

    void updateTableCandidatos();

    int numCandidatos = 0;
    std::string queryAdicionar;
    std::string queryRemover;
    std::string queryAtualizar;
};

#endif // EDITARCANDIDATO_H
