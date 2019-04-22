#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QKeyEvent>
#include <cstdio>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;

    if (candidatoWindow != nullptr) delete candidatoWindow;
    if (questaoWindow != nullptr) delete questaoWindow;
}

void MainWindow::editCandidato() {
    candidatoWindow = new EditarCandidato();
    candidatoWindow->show();
}

void MainWindow::editQuestao() {
    questaoWindow = new EditarQuestoes();
    questaoWindow->show();
}

void MainWindow::keyPressEvent(QKeyEvent *ev) {
    if (ev->key() == Qt::Key_Escape) {
        this->close();
    }
}
