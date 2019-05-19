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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditarCandidato
{
public:
    QFrame *line;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLineEdit *etSelectTable;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLabel *label_8;
    QLineEdit *etRemoveResolve;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QFrame *line_5;
    QLabel *label_17;
    QLineEdit *etRanking;
    QFrame *line_6;
    QLabel *label_2;
    QLabel *label_16;
    QLabel *label_5;
    QLabel *label_12;
    QTableWidget *questaoTable;
    QLabel *label_11;
    QLineEdit *etNome;
    QPushButton *pushButton;
    QLineEdit *etUpdate;
    QFrame *line_3;
    QLabel *label_13;
    QLineEdit *etCompeticao;
    QLabel *label_18;
    QLabel *label_14;
    QLineEdit *etRemoveParticipa;
    QLabel *label_15;
    QLineEdit *etUniversidade;
    QFrame *line_2;
    QLabel *label_9;
    QPushButton *pushButton_3;
    QTableWidget *competicaoTable;
    QLineEdit *etAdicionaPessoa;
    QLineEdit *etQuestao;
    QLineEdit *etCpf;
    QLineEdit *etRemoveCandidato;
    QLineEdit *etBusca;
    QFrame *line_7;
    QFrame *line_4;
    QLineEdit *etAdicionaCandidato;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_6;
    QFrame *line_8;
    QFrame *line_9;
    QTableWidget *candidatosTable;

    void setupUi(QDialog *EditarCandidato)
    {
        if (EditarCandidato->objectName().isEmpty())
            EditarCandidato->setObjectName(QString::fromUtf8("EditarCandidato"));
        EditarCandidato->resize(1004, 738);
        line = new QFrame(EditarCandidato);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(505, 696, 16, 16));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        gridLayout_2 = new QGridLayout(EditarCandidato);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(EditarCandidato);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 20));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(EditarCandidato);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        etSelectTable = new QLineEdit(EditarCandidato);
        etSelectTable->setObjectName(QString::fromUtf8("etSelectTable"));

        horizontalLayout->addWidget(etSelectTable);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        scrollArea = new QScrollArea(EditarCandidato);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -227, 474, 952));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 28, 0, 1, 1);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 27, 0, 1, 1);

        etRemoveResolve = new QLineEdit(scrollAreaWidgetContents);
        etRemoveResolve->setObjectName(QString::fromUtf8("etRemoveResolve"));

        gridLayout->addWidget(etRemoveResolve, 28, 1, 1, 1);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 19, 1, 1, 1);

        pushButton_4 = new QPushButton(scrollAreaWidgetContents);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 16, 1, 1, 1);

        line_5 = new QFrame(scrollAreaWidgetContents);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_5, 18, 0, 1, 2);

        label_17 = new QLabel(scrollAreaWidgetContents);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_17, 12, 0, 1, 2);

        etRanking = new QLineEdit(scrollAreaWidgetContents);
        etRanking->setObjectName(QString::fromUtf8("etRanking"));

        gridLayout->addWidget(etRanking, 5, 1, 1, 1);

        line_6 = new QFrame(scrollAreaWidgetContents);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_6, 21, 0, 1, 2);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_16, 7, 0, 1, 2);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 20, 0, 1, 1);

        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 17, 0, 1, 1);

        questaoTable = new QTableWidget(scrollAreaWidgetContents);
        if (questaoTable->columnCount() < 3)
            questaoTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        questaoTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        questaoTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        questaoTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        questaoTable->setObjectName(QString::fromUtf8("questaoTable"));
        questaoTable->setMinimumSize(QSize(0, 130));

        gridLayout->addWidget(questaoTable, 9, 0, 1, 2);

        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 29, 0, 1, 1);

        etNome = new QLineEdit(scrollAreaWidgetContents);
        etNome->setObjectName(QString::fromUtf8("etNome"));

        gridLayout->addWidget(etNome, 3, 1, 1, 1);

        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 22, 1, 1, 1);

        etUpdate = new QLineEdit(scrollAreaWidgetContents);
        etUpdate->setObjectName(QString::fromUtf8("etUpdate"));

        gridLayout->addWidget(etUpdate, 20, 1, 1, 1);

        line_3 = new QFrame(scrollAreaWidgetContents);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 6, 0, 1, 2);

        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 5, 0, 1, 1);

        etCompeticao = new QLineEdit(scrollAreaWidgetContents);
        etCompeticao->setObjectName(QString::fromUtf8("etCompeticao"));

        gridLayout->addWidget(etCompeticao, 14, 1, 1, 1);

        label_18 = new QLabel(scrollAreaWidgetContents);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_18, 0, 0, 1, 2);

        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 10, 0, 1, 1);

        etRemoveParticipa = new QLineEdit(scrollAreaWidgetContents);
        etRemoveParticipa->setObjectName(QString::fromUtf8("etRemoveParticipa"));

        gridLayout->addWidget(etRemoveParticipa, 27, 1, 1, 1);

        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 14, 0, 1, 1);

        etUniversidade = new QLineEdit(scrollAreaWidgetContents);
        etUniversidade->setObjectName(QString::fromUtf8("etUniversidade"));

        gridLayout->addWidget(etUniversidade, 4, 1, 1, 1);

        line_2 = new QFrame(scrollAreaWidgetContents);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 11, 0, 1, 2);

        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 24, 0, 1, 1);

        pushButton_3 = new QPushButton(scrollAreaWidgetContents);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 26, 1, 1, 1);

        competicaoTable = new QTableWidget(scrollAreaWidgetContents);
        if (competicaoTable->columnCount() < 2)
            competicaoTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        competicaoTable->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        competicaoTable->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        competicaoTable->setObjectName(QString::fromUtf8("competicaoTable"));
        competicaoTable->setMinimumSize(QSize(0, 130));

        gridLayout->addWidget(competicaoTable, 13, 0, 1, 2);

        etAdicionaPessoa = new QLineEdit(scrollAreaWidgetContents);
        etAdicionaPessoa->setObjectName(QString::fromUtf8("etAdicionaPessoa"));

        gridLayout->addWidget(etAdicionaPessoa, 23, 1, 1, 1);

        etQuestao = new QLineEdit(scrollAreaWidgetContents);
        etQuestao->setObjectName(QString::fromUtf8("etQuestao"));

        gridLayout->addWidget(etQuestao, 10, 1, 1, 1);

        etCpf = new QLineEdit(scrollAreaWidgetContents);
        etCpf->setObjectName(QString::fromUtf8("etCpf"));

        gridLayout->addWidget(etCpf, 2, 1, 1, 1);

        etRemoveCandidato = new QLineEdit(scrollAreaWidgetContents);
        etRemoveCandidato->setObjectName(QString::fromUtf8("etRemoveCandidato"));

        gridLayout->addWidget(etRemoveCandidato, 29, 1, 1, 1);

        etBusca = new QLineEdit(scrollAreaWidgetContents);
        etBusca->setObjectName(QString::fromUtf8("etBusca"));

        gridLayout->addWidget(etBusca, 17, 1, 1, 1);

        line_7 = new QFrame(scrollAreaWidgetContents);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_7, 25, 0, 1, 2);

        line_4 = new QFrame(scrollAreaWidgetContents);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 15, 0, 1, 2);

        etAdicionaCandidato = new QLineEdit(scrollAreaWidgetContents);
        etAdicionaCandidato->setObjectName(QString::fromUtf8("etAdicionaCandidato"));

        gridLayout->addWidget(etAdicionaCandidato, 24, 1, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 23, 0, 1, 1);

        line_8 = new QFrame(scrollAreaWidgetContents);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_8, 1, 0, 1, 2);

        line_9 = new QFrame(scrollAreaWidgetContents);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_9, 8, 0, 1, 2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 1, 1, 1, 1);

        candidatosTable = new QTableWidget(EditarCandidato);
        if (candidatosTable->columnCount() < 4)
            candidatosTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        candidatosTable->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        candidatosTable->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        candidatosTable->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        candidatosTable->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        candidatosTable->setObjectName(QString::fromUtf8("candidatosTable"));
        candidatosTable->setMinimumSize(QSize(401, 192));

        gridLayout_2->addWidget(candidatosTable, 1, 0, 1, 1);


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
        label_4->setText(QApplication::translate("EditarCandidato", "Candidatos Ativos", nullptr));
        label_7->setText(QApplication::translate("EditarCandidato", "Query Selecionar: ", nullptr));
        label_10->setText(QApplication::translate("EditarCandidato", "Query Remove candidato de 'resolve':", nullptr));
        label_8->setText(QApplication::translate("EditarCandidato", "Query Remove candidato de 'participa':", nullptr));
        pushButton_2->setText(QApplication::translate("EditarCandidato", "Atualizar Candidato", nullptr));
        pushButton_4->setText(QApplication::translate("EditarCandidato", "Buscar Candidato", nullptr));
        label_17->setText(QApplication::translate("EditarCandidato", "Competi\303\247\303\265es Participadas:", nullptr));
        label_2->setText(QApplication::translate("EditarCandidato", "Nome:", nullptr));
        label_16->setText(QApplication::translate("EditarCandidato", "Quest\303\265es Resolvidas", nullptr));
        label_5->setText(QApplication::translate("EditarCandidato", "Query Atualiza Pessoa:", nullptr));
        label_12->setText(QApplication::translate("EditarCandidato", "Query Busca Candidato:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = questaoTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EditarCandidato", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = questaoTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EditarCandidato", "Data", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = questaoTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("EditarCandidato", "Codigo", nullptr));
        label_11->setText(QApplication::translate("EditarCandidato", "Query Remove candidato:", nullptr));
        pushButton->setText(QApplication::translate("EditarCandidato", "Adicionar Candidato", nullptr));
        label_13->setText(QApplication::translate("EditarCandidato", "Ranking Geral:", nullptr));
        label_18->setText(QApplication::translate("EditarCandidato", "Informa\303\247\303\265es Gerais", nullptr));
        label_14->setText(QApplication::translate("EditarCandidato", "Query Quest\303\265es Resolvidas:", nullptr));
        label_15->setText(QApplication::translate("EditarCandidato", "Query Competi\303\247\303\265es Participada:", nullptr));
        label_9->setText(QApplication::translate("EditarCandidato", "Query Adiciona em 'candidato':", nullptr));
        pushButton_3->setText(QApplication::translate("EditarCandidato", "Remover Candidato", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = competicaoTable->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("EditarCandidato", "id", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = competicaoTable->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("EditarCandidato", "ranking", nullptr));
        label_3->setText(QApplication::translate("EditarCandidato", "Universidade:", nullptr));
        label->setText(QApplication::translate("EditarCandidato", "CPF:", nullptr));
        label_6->setText(QApplication::translate("EditarCandidato", "Query Adiciona em 'pessoa':", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = candidatosTable->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("EditarCandidato", "CPF", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = candidatosTable->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("EditarCandidato", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = candidatosTable->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("EditarCandidato", "ranking_geral", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = candidatosTable->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("EditarCandidato", "Universidade", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditarCandidato: public Ui_EditarCandidato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITARCANDIDATO_H
