#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QKeyEvent>
#include <QMessageBox>
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
}

void MainWindow::editCandidato() {
    if (status) {
        candidatoWindow.reset(new EditarCandidato(this, stmt.get()));
        candidatoWindow->show();
    }
}

void MainWindow::editQuestao() {
    if (status) {
        questaoWindow.reset(new EditarQuestoes(this, stmt.get()));
        questaoWindow->show();
    }
}

void MainWindow::editCompeticao()
{
    if (status) {
        competicaoWindow.reset(new EditarCompeticoes(this, stmt.get()));
        competicaoWindow->show();
    }
}

void MainWindow::editCurador()
{
    if (status) {
        curadorWindow.reset(new EditarCurador(this, stmt.get()));
        curadorWindow->show();
    }
}

void MainWindow::editProponente()
{
    if (status) {
        proponenteWindow.reset(new EditarProponente(this, stmt.get()));
        proponenteWindow->show();
    }
}

void MainWindow::editTopico()
{
    if (status) {
        topicoWindow.reset(new EditarTopico(this, stmt.get()));
        topicoWindow->show();
    }
}

void MainWindow::connect()
{
    try {
        driver = sql::mysql::get_mysql_driver_instance();
        con.reset(driver->connect(ui->etHostName->text().toStdString(), ui->etUserName->text().toStdString(), ui->etPassword->text().toStdString()));

        stmt.reset(con->createStatement());
        stmt->execute("USE " + ui->etDbName->text().toStdString());

        status = true;
        ui->labelStatus->setText("Status: Ok");
    } catch (sql::SQLException &e) {
        QMessageBox msgBox;
        msgBox.setText(
            "SQL ERROR: " + QString::fromStdString(e.what()) +
            "\n\n(MySQL error code: " + QString::number(e.getErrorCode()) +
            ", SQLState: " + QString::fromStdString(e.getSQLState()) + ")"
        );
        msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();

        std::cout << "# ERR: SQLException in " << __FILE__;
        std::cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
        std::cout << "# ERR: " << e.what();
        std::cout << " (MySQL error code: " << e.getErrorCode();
        std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;

        status = false;
        ui->labelStatus->setText("Status: ERROR");
    }

    ui->btTopico->setEnabled(status);
    ui->btCurador->setEnabled(status);
    ui->btQuestao->setEnabled(status);
    ui->btCandidato->setEnabled(status);
    ui->btCompeticao->setEnabled(status);
    ui->btProponente->setEnabled(status);
}

void MainWindow::keyPressEvent(QKeyEvent *ev) {
    if (ev->key() == Qt::Key_Escape) {
        this->close();
    }
}
