#ifndef EDITARPROPONENTE_H
#define EDITARPROPONENTE_H

#include <QDialog>

#include "mysql_driver.h"
#include "mysql_connection.h"
#include "cppconn/exception.h"
#include "cppconn/resultset.h"
#include "cppconn/statement.h"

namespace Ui {
class EditarProponente;
}

class EditarProponente : public QDialog
{
    Q_OBJECT

public:
    explicit EditarProponente(QWidget *parent = nullptr, sql::Statement *_stmt = nullptr);
    ~EditarProponente();

public slots:
    void buscar();
    void adicionar();
    void atualizar();
    void remover();

private:
    Ui::EditarProponente *ui;

    sql::Statement *stmt = nullptr;

    void updateProponenteTable();
};

#endif // EDITARPROPONENTE_H
