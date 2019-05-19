#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "editarcandidato.h"
#include "editarcompeticoes.h"
#include "editarcurador.h"
#include "editarproponente.h"
#include "editarquestoes.h"
#include "editartopico.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void editCandidato();
    void editQuestao();
    void editCompeticao();
    void editCurador();
    void editProponente();
    void editTopico();
    void connect();

private:
    std::unique_ptr<EditarQuestoes> questaoWindow;
    std::unique_ptr<EditarCandidato> candidatoWindow;
    std::unique_ptr<EditarCompeticoes> competicaoWindow;
    std::unique_ptr<EditarCurador> curadorWindow;
    std::unique_ptr<EditarProponente> proponenteWindow;
    std::unique_ptr<EditarTopico> topicoWindow;

    Ui::MainWindow *ui;
    void keyPressEvent(QKeyEvent *ev) override;

    bool status = false;
    std::unique_ptr<sql::Statement> stmt;
    std::unique_ptr<sql::Connection> con;
    sql::mysql::MySQL_Driver *driver = nullptr;
};

#endif // MAINWINDOW_H
