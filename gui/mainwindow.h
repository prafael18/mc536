#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "editarcandidato.h"
#include "editarquestoes.h"

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

private:
    EditarCandidato *candidatoWindow = nullptr;
    EditarQuestoes *questaoWindow = nullptr;

    Ui::MainWindow *ui;
    void keyPressEvent(QKeyEvent *ev) override;
};

#endif // MAINWINDOW_H
