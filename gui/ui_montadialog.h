/********************************************************************************
** Form generated from reading UI file 'montadialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONTADIALOG_H
#define UI_MONTADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_MontaDialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *etVersao;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *etId;
    QLineEdit *etIdFase;
    QDialogButtonBox *buttonBox;
    QLineEdit *etCpf;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *MontaDialog)
    {
        if (MontaDialog->objectName().isEmpty())
            MontaDialog->setObjectName(QStringLiteral("MontaDialog"));
        MontaDialog->resize(320, 240);
        gridLayout = new QGridLayout(MontaDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        etVersao = new QLineEdit(MontaDialog);
        etVersao->setObjectName(QStringLiteral("etVersao"));

        gridLayout->addWidget(etVersao, 1, 1, 1, 1);

        label_3 = new QLabel(MontaDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(MontaDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        etId = new QLineEdit(MontaDialog);
        etId->setObjectName(QStringLiteral("etId"));

        gridLayout->addWidget(etId, 0, 1, 1, 1);

        etIdFase = new QLineEdit(MontaDialog);
        etIdFase->setObjectName(QStringLiteral("etIdFase"));

        gridLayout->addWidget(etIdFase, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(MontaDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 2);

        etCpf = new QLineEdit(MontaDialog);
        etCpf->setObjectName(QStringLiteral("etCpf"));

        gridLayout->addWidget(etCpf, 3, 1, 1, 1);

        label = new QLabel(MontaDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(MontaDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        retranslateUi(MontaDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MontaDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MontaDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MontaDialog);
    } // setupUi

    void retranslateUi(QDialog *MontaDialog)
    {
        MontaDialog->setWindowTitle(QApplication::translate("MontaDialog", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("MontaDialog", "ID Fase:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MontaDialog", "CPF:", Q_NULLPTR));
        label->setText(QApplication::translate("MontaDialog", "ID Prova:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MontaDialog", "Vers\303\243o:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MontaDialog: public Ui_MontaDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONTADIALOG_H
