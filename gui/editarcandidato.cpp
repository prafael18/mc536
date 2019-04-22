#include "editarcandidato.h"
#include "ui_editarcandidato.h"

EditarCandidato::EditarCandidato(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditarCandidato)
{
    ui->setupUi(this);

    this->setWindowTitle("Editar dados Candidato");
}

EditarCandidato::~EditarCandidato()
{
    delete ui;
}
