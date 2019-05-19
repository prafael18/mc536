#ifndef EDITARCURADOR_H
#define EDITARCURADOR_H

#include <QDialog>

#include "mysql_driver.h"
#include "mysql_connection.h"
#include "cppconn/exception.h"
#include "cppconn/resultset.h"
#include "cppconn/statement.h"

namespace Ui {
class EditarCurador;
}

class EditarCurador : public QDialog
{
    Q_OBJECT

public:
    explicit EditarCurador(QWidget *parent = nullptr, sql::Statement *_stmt = nullptr);
    ~EditarCurador();

public slots:
    void buscar();
    void adicionar();
    void atualizar();
    void remover();

private:
    Ui::EditarCurador *ui;

    sql::Statement *stmt = nullptr;

    void updateCuradoresTable();
};

#endif // EDITARCURADOR_H
