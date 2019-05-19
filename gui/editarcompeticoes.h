#ifndef EDITARCOMPETICOES_H
#define EDITARCOMPETICOES_H

#include <QDialog>
#include <memory>

#include "mysql_driver.h"
#include "mysql_connection.h"
#include "cppconn/exception.h"
#include "cppconn/resultset.h"
#include "cppconn/statement.h"

namespace Ui {
class EditarCompeticoes;
}

class EditarCompeticoes : public QDialog
{
    Q_OBJECT

public:
    explicit EditarCompeticoes(QWidget *parent = nullptr);
    ~EditarCompeticoes();

public slots:
    void buscar();
    void novaFase();
    void adicionar();
    void atualizar();
    void novoTopico();
    void novoCandidato();

private:
    Ui::EditarCompeticoes *ui;

    sql::Statement *stmt = nullptr;
    sql::Connection *con = nullptr;
    sql::mysql::MySQL_Driver *driver = nullptr;

    void updateCompeticoes();
};

#endif // EDITARCOMPETICOES_H
