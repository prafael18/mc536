#ifndef MONTADIALOG_H
#define MONTADIALOG_H

#include <QDialog>

namespace Ui {
class MontaDialog;
}

class MontaDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MontaDialog(QWidget *parent = nullptr);
    ~MontaDialog();

    QString getId();
    QString getVersao();
    QString getFase();
    QString getCpf();
    QString getData();

private:
    Ui::MontaDialog *ui;
};

#endif // MONTADIALOG_H
