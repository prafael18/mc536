/********************************************************************************
** Form generated from reading UI file 'editarcandidato.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITARCANDIDATO_H
#define UI_EDITARCANDIDATO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_EditarCandidato
{
public:
    QGridLayout *gridLayout;
    QLabel *label_12;
    QLineEdit *etRemoveCandidato;
    QLabel *label_9;
    QLineEdit *etAdicionaCandidato;
    QLineEdit *etAdicionaPessoa;
    QTableWidget *candidatosTable;
    QLineEdit *etNome;
    QLineEdit *etBusca;
    QLineEdit *etRemoveResolve;
    QLineEdit *etRemoveParticipa;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *etUniversidade;
    QLabel *label_10;
    QLabel *label_3;
    QLabel *label_11;
    QLineEdit *etUpdate;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_2;
    QFrame *line;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_8;
    QLabel *label_5;
    QLineEdit *etCpf;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLineEdit *etSelectTable;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_4;
    QLabel *label_13;
    QLineEdit *etRanking;

    void setupUi(QDialog *EditarCandidato)
    {
        if (EditarCandidato->objectName().isEmpty())
            EditarCandidato->setObjectName(QString::fromUtf8("EditarCandidato"));
        EditarCandidato->resize(1004, 568);
        gridLayout = new QGridLayout(EditarCandidato);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_12 = new QLabel(EditarCandidato);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 7, 2, 1, 1);

        etRemoveCandidato = new QLineEdit(EditarCandidato);
        etRemoveCandidato->setObjectName(QString::fromUtf8("etRemoveCandidato"));

        gridLayout->addWidget(etRemoveCandidato, 21, 3, 1, 1);

        label_9 = new QLabel(EditarCandidato);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 16, 2, 1, 1);

        etAdicionaCandidato = new QLineEdit(EditarCandidato);
        etAdicionaCandidato->setObjectName(QString::fromUtf8("etAdicionaCandidato"));

        gridLayout->addWidget(etAdicionaCandidato, 16, 3, 1, 1);

        etAdicionaPessoa = new QLineEdit(EditarCandidato);
        etAdicionaPessoa->setObjectName(QString::fromUtf8("etAdicionaPessoa"));

        gridLayout->addWidget(etAdicionaPessoa, 14, 3, 2, 1);

        candidatosTable = new QTableWidget(EditarCandidato);
        if (candidatosTable->columnCount() < 4)
            candidatosTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        candidatosTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        candidatosTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        candidatosTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        candidatosTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        candidatosTable->setObjectName(QString::fromUtf8("candidatosTable"));
        candidatosTable->setMinimumSize(QSize(401, 192));

        gridLayout->addWidget(candidatosTable, 1, 0, 20, 1);

        etNome = new QLineEdit(EditarCandidato);
        etNome->setObjectName(QString::fromUtf8("etNome"));

        gridLayout->addWidget(etNome, 2, 3, 1, 1);

        etBusca = new QLineEdit(EditarCandidato);
        etBusca->setObjectName(QString::fromUtf8("etBusca"));

        gridLayout->addWidget(etBusca, 7, 3, 1, 1);

        etRemoveResolve = new QLineEdit(EditarCandidato);
        etRemoveResolve->setObjectName(QString::fromUtf8("etRemoveResolve"));

        gridLayout->addWidget(etRemoveResolve, 20, 3, 1, 1);

        etRemoveParticipa = new QLineEdit(EditarCandidato);
        etRemoveParticipa->setObjectName(QString::fromUtf8("etRemoveParticipa"));

        gridLayout->addWidget(etRemoveParticipa, 19, 3, 1, 1);

        label_4 = new QLabel(EditarCandidato);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 20));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 12, 2, 1, 1);

        etUniversidade = new QLineEdit(EditarCandidato);
        etUniversidade->setObjectName(QString::fromUtf8("etUniversidade"));

        gridLayout->addWidget(etUniversidade, 3, 3, 1, 1);

        label_10 = new QLabel(EditarCandidato);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 20, 2, 1, 1);

        label_3 = new QLabel(EditarCandidato);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 2, 1, 1);

        label_11 = new QLabel(EditarCandidato);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 21, 2, 1, 1);

        etUpdate = new QLineEdit(EditarCandidato);
        etUpdate->setObjectName(QString::fromUtf8("etUpdate"));

        gridLayout->addWidget(etUpdate, 11, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 17, 2, 1, 1);

        pushButton_2 = new QPushButton(EditarCandidato);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 10, 2, 1, 2);

        line = new QFrame(EditarCandidato);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 1, 21, 1);

        pushButton_3 = new QPushButton(EditarCandidato);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 18, 2, 1, 2);

        label_2 = new QLabel(EditarCandidato);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 2, 1, 1);

        label = new QLabel(EditarCandidato);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 2, 1, 1);

        label_8 = new QLabel(EditarCandidato);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 19, 2, 1, 1);

        label_5 = new QLabel(EditarCandidato);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 11, 2, 1, 1);

        etCpf = new QLineEdit(EditarCandidato);
        etCpf->setObjectName(QString::fromUtf8("etCpf"));

        gridLayout->addWidget(etCpf, 1, 3, 1, 1);

        label_6 = new QLabel(EditarCandidato);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 15, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(EditarCandidato);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        etSelectTable = new QLineEdit(EditarCandidato);
        etSelectTable->setObjectName(QString::fromUtf8("etSelectTable"));

        horizontalLayout->addWidget(etSelectTable);


        gridLayout->addLayout(horizontalLayout, 21, 0, 1, 1);

        pushButton = new QPushButton(EditarCandidato);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 13, 2, 1, 2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 9, 2, 1, 1);

        pushButton_4 = new QPushButton(EditarCandidato);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 6, 2, 1, 2);

        label_13 = new QLabel(EditarCandidato);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 4, 2, 1, 1);

        etRanking = new QLineEdit(EditarCandidato);
        etRanking->setObjectName(QString::fromUtf8("etRanking"));

        gridLayout->addWidget(etRanking, 4, 3, 1, 1);


        retranslateUi(EditarCandidato);
        QObject::connect(pushButton_2, SIGNAL(clicked()), EditarCandidato, SLOT(updateCandidato()));
        QObject::connect(pushButton, SIGNAL(clicked()), EditarCandidato, SLOT(adicionarCandidato()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), EditarCandidato, SLOT(removerCandidato()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), EditarCandidato, SLOT(buscaCandidato()));

        QMetaObject::connectSlotsByName(EditarCandidato);
    } // setupUi

    void retranslateUi(QDialog *EditarCandidato)
    {
        EditarCandidato->setWindowTitle(QApplication::translate("EditarCandidato", "Dialog", nullptr));
        label_12->setText(QApplication::translate("EditarCandidato", "Query Busca Candidato:", nullptr));
        label_9->setText(QApplication::translate("EditarCandidato", "Query Adiciona em 'candidato':", nullptr));
        QTableWidgetItem *___qtablewidgetitem = candidatosTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EditarCandidato", "CPF", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = candidatosTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EditarCandidato", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = candidatosTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("EditarCandidato", "ranking_geral", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = candidatosTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("EditarCandidato", "Universidade", nullptr));
        label_4->setText(QApplication::translate("EditarCandidato", "Tela: Atualizar ou Adicionar Candidato", nullptr));
        label_10->setText(QApplication::translate("EditarCandidato", "Query Remove candidato de 'resolve':", nullptr));
        label_3->setText(QApplication::translate("EditarCandidato", "Universidade:", nullptr));
        label_11->setText(QApplication::translate("EditarCandidato", "Query Remove candidato:", nullptr));
        pushButton_2->setText(QApplication::translate("EditarCandidato", "Atualizar Candidato", nullptr));
        pushButton_3->setText(QApplication::translate("EditarCandidato", "Remover Candidato", nullptr));
        label_2->setText(QApplication::translate("EditarCandidato", "Nome:", nullptr));
        label->setText(QApplication::translate("EditarCandidato", "CPF:", nullptr));
        label_8->setText(QApplication::translate("EditarCandidato", "Query Remove candidato de 'participa':", nullptr));
        label_5->setText(QApplication::translate("EditarCandidato", "Query Atualiza Pessoa:", nullptr));
        label_6->setText(QApplication::translate("EditarCandidato", "Query Adiciona em 'pessoa':", nullptr));
        label_7->setText(QApplication::translate("EditarCandidato", "Query Selecionar: ", nullptr));
        pushButton->setText(QApplication::translate("EditarCandidato", "Adicionar Candidato", nullptr));
        pushButton_4->setText(QApplication::translate("EditarCandidato", "Buscar Candidato", nullptr));
        label_13->setText(QApplication::translate("EditarCandidato", "Ranking Geral:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditarCandidato: public Ui_EditarCandidato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITARCANDIDATO_H
