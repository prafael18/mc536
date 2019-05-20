/********************************************************************************
** Form generated from reading UI file 'resolvedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESOLVEDIALOG_H
#define UI_RESOLVEDIALOG_H

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

class Ui_ResolveDialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *etCodigo;
    QLabel *label_4;
    QLineEdit *etId;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *etCpf;

    void setupUi(QDialog *ResolveDialog)
    {
        if (ResolveDialog->objectName().isEmpty())
            ResolveDialog->setObjectName(QStringLiteral("ResolveDialog"));
        ResolveDialog->resize(234, 257);
        gridLayout = new QGridLayout(ResolveDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        etCodigo = new QLineEdit(ResolveDialog);
        etCodigo->setObjectName(QStringLiteral("etCodigo"));

        gridLayout->addWidget(etCodigo, 2, 1, 1, 1);

        label_4 = new QLabel(ResolveDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        etId = new QLineEdit(ResolveDialog);
        etId->setObjectName(QStringLiteral("etId"));

        gridLayout->addWidget(etId, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(ResolveDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);

        label = new QLabel(ResolveDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(ResolveDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        etCpf = new QLineEdit(ResolveDialog);
        etCpf->setObjectName(QStringLiteral("etCpf"));

        gridLayout->addWidget(etCpf, 1, 1, 1, 1);


        retranslateUi(ResolveDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ResolveDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ResolveDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ResolveDialog);
    } // setupUi

    void retranslateUi(QDialog *ResolveDialog)
    {
        ResolveDialog->setWindowTitle(QApplication::translate("ResolveDialog", "Dialog", Q_NULLPTR));
        label_4->setText(QApplication::translate("ResolveDialog", "Path Codigo:", Q_NULLPTR));
        label->setText(QApplication::translate("ResolveDialog", "ID:", Q_NULLPTR));
        label_2->setText(QApplication::translate("ResolveDialog", "CPF:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ResolveDialog: public Ui_ResolveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOLVEDIALOG_H
