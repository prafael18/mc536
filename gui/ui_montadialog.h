/********************************************************************************
** Form generated from reading UI file 'montadialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONTADIALOG_H
#define UI_MONTADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_MontaDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *etId;
    QLabel *label_2;
    QLineEdit *etVersao;
    QLabel *label_3;
    QLineEdit *etIdFase;
    QLabel *label_4;
    QLineEdit *etCpf;
    QLabel *label_5;
    QLineEdit *etData;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MontaDialog)
    {
        if (MontaDialog->objectName().isEmpty())
            MontaDialog->setObjectName(QString::fromUtf8("MontaDialog"));
        MontaDialog->resize(320, 240);
        gridLayout = new QGridLayout(MontaDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(MontaDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        etId = new QLineEdit(MontaDialog);
        etId->setObjectName(QString::fromUtf8("etId"));

        gridLayout->addWidget(etId, 0, 1, 1, 1);

        label_2 = new QLabel(MontaDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        etVersao = new QLineEdit(MontaDialog);
        etVersao->setObjectName(QString::fromUtf8("etVersao"));

        gridLayout->addWidget(etVersao, 1, 1, 1, 1);

        label_3 = new QLabel(MontaDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        etIdFase = new QLineEdit(MontaDialog);
        etIdFase->setObjectName(QString::fromUtf8("etIdFase"));

        gridLayout->addWidget(etIdFase, 2, 1, 1, 1);

        label_4 = new QLabel(MontaDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        etCpf = new QLineEdit(MontaDialog);
        etCpf->setObjectName(QString::fromUtf8("etCpf"));

        gridLayout->addWidget(etCpf, 3, 1, 1, 1);

        label_5 = new QLabel(MontaDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        etData = new QLineEdit(MontaDialog);
        etData->setObjectName(QString::fromUtf8("etData"));

        gridLayout->addWidget(etData, 4, 1, 1, 1);

        buttonBox = new QDialogButtonBox(MontaDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 2);


        retranslateUi(MontaDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MontaDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MontaDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MontaDialog);
    } // setupUi

    void retranslateUi(QDialog *MontaDialog)
    {
        MontaDialog->setWindowTitle(QApplication::translate("MontaDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("MontaDialog", "Id:", nullptr));
        label_2->setText(QApplication::translate("MontaDialog", "Vers\303\243o:", nullptr));
        label_3->setText(QApplication::translate("MontaDialog", "IdFase:", nullptr));
        label_4->setText(QApplication::translate("MontaDialog", "Cpf:", nullptr));
        label_5->setText(QApplication::translate("MontaDialog", "Data:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MontaDialog: public Ui_MontaDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONTADIALOG_H
