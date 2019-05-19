#ifndef EDITARQUESTOES_H
#define EDITARQUESTOES_H

#include <QDialog>

#include "mysql_driver.h"
#include "mysql_connection.h"
#include "cppconn/exception.h"
#include "cppconn/resultset.h"
#include "cppconn/statement.h"

namespace Ui {
class EditarQuestoes;
}

class EditarQuestoes : public QDialog
{
    Q_OBJECT

public:
    explicit EditarQuestoes(QWidget *parent = nullptr, sql::Statement *_stmt = nullptr);
    ~EditarQuestoes();

public slots:
    void buscar();
    void adicionar();
    void atualizar();
    void remover();

private:
    sql::Statement *stmt = nullptr;
    Ui::EditarQuestoes *ui = nullptr;
    void updateTableCandidatos();
};

#endif // EDITARQUESTOES_H
