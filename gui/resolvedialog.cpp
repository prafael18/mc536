#include "resolvedialog.h"
#include "ui_resolvedialog.h"

ResolveDialog::ResolveDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ResolveDialog)
{
    ui->setupUi(this);
}

ResolveDialog::~ResolveDialog()
{
    delete ui;
}

QString ResolveDialog::getIdQuestao()
{
    return ui->etId->text();
}

QString ResolveDialog::getCpf()
{
    return ui->etCpf->text();
}

QString ResolveDialog::getCodigo()
{
    return ui->etCodigo->text();
}
