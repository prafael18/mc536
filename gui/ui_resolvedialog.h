/********************************************************************************
** Form generated from reading UI file 'resolvedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESOLVEDIALOG_H
#define UI_RESOLVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_ResolveDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *etId;
    QLabel *label_2;
    QLineEdit *etCpf;
    QLabel *label_3;
    QLineEdit *etData;
    QLabel *label_4;
    QLineEdit *etCodigo;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ResolveDialog)
    {
        if (ResolveDialog->objectName().isEmpty())
            ResolveDialog->setObjectName(QString::fromUtf8("ResolveDialog"));
        ResolveDialog->resize(234, 257);
        gridLayout = new QGridLayout(ResolveDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ResolveDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        etId = new QLineEdit(ResolveDialog);
        etId->setObjectName(QString::fromUtf8("etId"));

        gridLayout->addWidget(etId, 0, 1, 1, 1);

        label_2 = new QLabel(ResolveDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        etCpf = new QLineEdit(ResolveDialog);
        etCpf->setObjectName(QString::fromUtf8("etCpf"));

        gridLayout->addWidget(etCpf, 1, 1, 1, 1);

        label_3 = new QLabel(ResolveDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        etData = new QLineEdit(ResolveDialog);
        etData->setObjectName(QString::fromUtf8("etData"));

        gridLayout->addWidget(etData, 2, 1, 1, 1);

        label_4 = new QLabel(ResolveDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        etCodigo = new QLineEdit(ResolveDialog);
        etCodigo->setObjectName(QString::fromUtf8("etCodigo"));

        gridLayout->addWidget(etCodigo, 3, 1, 1, 1);

        buttonBox = new QDialogButtonBox(ResolveDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 2);


        retranslateUi(ResolveDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ResolveDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ResolveDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ResolveDialog);
    } // setupUi

    void retranslateUi(QDialog *ResolveDialog)
    {
        ResolveDialog->setWindowTitle(QApplication::translate("ResolveDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("ResolveDialog", "Id:", nullptr));
        label_2->setText(QApplication::translate("ResolveDialog", "Cpf:", nullptr));
        label_3->setText(QApplication::translate("ResolveDialog", "Data:", nullptr));
        label_4->setText(QApplication::translate("ResolveDialog", "Path Codigo:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResolveDialog: public Ui_ResolveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOLVEDIALOG_H
