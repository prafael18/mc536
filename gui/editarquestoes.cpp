#include "editarquestoes.h"
#include "ui_editarquestoes.h"

EditarQuestoes::EditarQuestoes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditarQuestoes)
{
    ui->setupUi(this);

    this->setWindowTitle("Editar dados Questão");
}

EditarQuestoes::~EditarQuestoes()
{
    delete ui;
}
