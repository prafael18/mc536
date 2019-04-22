#ifndef EDITARQUESTOES_H
#define EDITARQUESTOES_H

#include <QDialog>

namespace Ui {
class EditarQuestoes;
}

class EditarQuestoes : public QDialog
{
    Q_OBJECT

public:
    explicit EditarQuestoes(QWidget *parent = nullptr);
    ~EditarQuestoes();

private:
    Ui::EditarQuestoes *ui;
};

#endif // EDITARQUESTOES_H
