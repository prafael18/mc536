#ifndef EDITARTOPICO_H
#define EDITARTOPICO_H

#include <QDialog>

#include "mysql_driver.h"
#include "mysql_connection.h"
#include "cppconn/exception.h"
#include "cppconn/resultset.h"
#include "cppconn/statement.h"

namespace Ui {
class EditarTopico;
}

class EditarTopico : public QDialog
{
    Q_OBJECT

public:
    explicit EditarTopico(QWidget *parent = nullptr, sql::Statement *_stmt = nullptr);
    ~EditarTopico();

public slots:
    void buscar();
    void atualizar();
    void adicionar();
    void remover();

private:
    Ui::EditarTopico *ui;

    sql::Statement *stmt = nullptr;
    sql::Connection *con = nullptr;
    sql::mysql::MySQL_Driver *driver = nullptr;

    void updateTopicosTable();
};

#endif // EDITARTOPICO_H
