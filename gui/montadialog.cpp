#include "montadialog.h"
#include "ui_montadialog.h"

MontaDialog::MontaDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MontaDialog)
{
    ui->setupUi(this);
}

MontaDialog::~MontaDialog()
{
    delete ui;
}

QString MontaDialog::getId()
{
    return ui->etId->text();
}

QString MontaDialog::getVersao()
{
    return ui->etVersao->text();
}

QString MontaDialog::getFase()
{
    return ui->etIdFase->text();
}

QString MontaDialog::getCpf()
{
    return ui->etCpf->text();
}
