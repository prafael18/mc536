#ifndef EDITARCANDIDATO_H
#define EDITARCANDIDATO_H

#include <QDialog>

namespace Ui {
class EditarCandidato;
}

class EditarCandidato : public QDialog
{
    Q_OBJECT

public:
    explicit EditarCandidato(QWidget *parent = nullptr);
    ~EditarCandidato();

private:
    Ui::EditarCandidato *ui;
};

#endif // EDITARCANDIDATO_H
