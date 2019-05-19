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
    explicit EditarCompeticoes(QWidget *parent = nullptr, sql::Statement *_stmt = nullptr);
    ~EditarCompeticoes();

public slots:
    void buscar();
    void novaFase();
    void adicionar();
    void atualizar();
    void novoTopico();
    void montaProva();
    void novaQuestao();
    void novoCandidato();
    void resolve();

private:
    Ui::EditarCompeticoes *ui;

    sql::Statement *stmt = nullptr;

    void updateCompeticoes();
};

#endif // EDITARCOMPETICOES_H
