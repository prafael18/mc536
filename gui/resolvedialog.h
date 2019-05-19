#ifndef RESOLVEDIALOG_H
#define RESOLVEDIALOG_H

#include <QDialog>

namespace Ui {
class ResolveDialog;
}

class ResolveDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ResolveDialog(QWidget *parent = nullptr);
    ~ResolveDialog();

    QString getIdQuestao();
    QString getCpf();
    QString getData();
    QString getCodigo();

private:
    Ui::ResolveDialog *ui;
};

#endif // RESOLVEDIALOG_H
