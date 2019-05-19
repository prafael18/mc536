/********************************************************************************
** Form generated from reading UI file 'editarcompeticoes.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITARCOMPETICOES_H
#define UI_EDITARCOMPETICOES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditarCompeticoes
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_12;
    QLabel *label_11;
    QFrame *line_2;
    QLineEdit *etCompeticoes;
    QTableWidget *competicoesTable;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLineEdit *etNovoCandidato;
    QPushButton *btAdicionar;
    QFrame *line_4;
    QLabel *label_5;
    QTableWidget *candidatosTable;
    QLineEdit *etData;
    QLineEdit *etId;
    QPushButton *pushButton;
    QLabel *label_4;
    QLineEdit *etFases;
    QTableWidget *questoesTable;
    QLabel *label_7;
    QLineEdit *etProvas;
    QTableWidget *provasTable;
    QLabel *label_6;
    QTableWidget *topicosTable;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *etTopicos;
    QLabel *label_14;
    QLineEdit *etNovoTopico;
    QLabel *label_13;
    QPushButton *btMontaProva;
    QLabel *label_9;
    QLineEdit *etCandidatos;
    QLineEdit *etLocal;
    QLabel *label;
    QPushButton *btNovoCandidato;
    QPushButton *btNovoTopico;
    QPushButton *btBuscar;
    QLineEdit *etAtualizar;
    QLineEdit *etMontaFase;
    QLabel *label_15;
    QLineEdit *etAdicionar;
    QFrame *line_6;
    QFrame *line_3;
    QLabel *label_8;
    QFrame *line_7;
    QPushButton *btAtualizar;
    QPushButton *btNovaFase;
    QFrame *line_5;
    QLineEdit *etBuscar;
    QLineEdit *etNome;
    QLabel *label_2;
    QLabel *label_10;
    QLineEdit *etNovaFase;
    QFrame *line;
    QTableWidget *fasesTable;
    QLineEdit *etQuestoes;
    QLabel *label_16;

    void setupUi(QDialog *EditarCompeticoes)
    {
        if (EditarCompeticoes->objectName().isEmpty())
            EditarCompeticoes->setObjectName(QString::fromUtf8("EditarCompeticoes"));
        EditarCompeticoes->resize(680, 424);
        gridLayout_2 = new QGridLayout(EditarCompeticoes);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_12 = new QLabel(EditarCompeticoes);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 2, 0, 1, 1);

        label_11 = new QLabel(EditarCompeticoes);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_11, 0, 0, 1, 2);

        line_2 = new QFrame(EditarCompeticoes);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 0, 2, 3, 1);

        etCompeticoes = new QLineEdit(EditarCompeticoes);
        etCompeticoes->setObjectName(QString::fromUtf8("etCompeticoes"));

        gridLayout_2->addWidget(etCompeticoes, 2, 1, 1, 1);

        competicoesTable = new QTableWidget(EditarCompeticoes);
        if (competicoesTable->columnCount() < 4)
            competicoesTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        competicoesTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        competicoesTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        competicoesTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        competicoesTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        competicoesTable->setObjectName(QString::fromUtf8("competicoesTable"));

        gridLayout_2->addWidget(competicoesTable, 1, 0, 1, 2);

        scrollArea = new QScrollArea(EditarCompeticoes);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -874, 278, 1348));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        etNovoCandidato = new QLineEdit(scrollAreaWidgetContents);
        etNovoCandidato->setObjectName(QString::fromUtf8("etNovoCandidato"));

        gridLayout->addWidget(etNovoCandidato, 28, 2, 1, 1);

        btAdicionar = new QPushButton(scrollAreaWidgetContents);
        btAdicionar->setObjectName(QString::fromUtf8("btAdicionar"));

        gridLayout->addWidget(btAdicionar, 8, 0, 1, 1);

        line_4 = new QFrame(scrollAreaWidgetContents);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 9, 0, 1, 3);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        candidatosTable = new QTableWidget(scrollAreaWidgetContents);
        if (candidatosTable->columnCount() < 2)
            candidatosTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        candidatosTable->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        candidatosTable->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        candidatosTable->setObjectName(QString::fromUtf8("candidatosTable"));
        candidatosTable->setMinimumSize(QSize(0, 130));

        gridLayout->addWidget(candidatosTable, 26, 0, 1, 3);

        etData = new QLineEdit(scrollAreaWidgetContents);
        etData->setObjectName(QString::fromUtf8("etData"));

        gridLayout->addWidget(etData, 3, 1, 1, 2);

        etId = new QLineEdit(scrollAreaWidgetContents);
        etId->setObjectName(QString::fromUtf8("etId"));

        gridLayout->addWidget(etId, 0, 1, 1, 2);

        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 33, 0, 1, 2);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        etFases = new QLineEdit(scrollAreaWidgetContents);
        etFases->setObjectName(QString::fromUtf8("etFases"));

        gridLayout->addWidget(etFases, 17, 2, 1, 1);

        questoesTable = new QTableWidget(scrollAreaWidgetContents);
        if (questoesTable->columnCount() < 4)
            questoesTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        questoesTable->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        questoesTable->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        questoesTable->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        questoesTable->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        questoesTable->setObjectName(QString::fromUtf8("questoesTable"));
        questoesTable->setMinimumSize(QSize(0, 140));

        gridLayout->addWidget(questoesTable, 31, 0, 1, 3);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        etProvas = new QLineEdit(scrollAreaWidgetContents);
        etProvas->setObjectName(QString::fromUtf8("etProvas"));

        gridLayout->addWidget(etProvas, 22, 2, 1, 1);

        provasTable = new QTableWidget(scrollAreaWidgetContents);
        if (provasTable->columnCount() < 5)
            provasTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        provasTable->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        provasTable->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        provasTable->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        provasTable->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        provasTable->setHorizontalHeaderItem(4, __qtablewidgetitem14);
        provasTable->setObjectName(QString::fromUtf8("provasTable"));
        provasTable->setMinimumSize(QSize(0, 140));

        gridLayout->addWidget(provasTable, 21, 0, 1, 3);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        topicosTable = new QTableWidget(scrollAreaWidgetContents);
        if (topicosTable->columnCount() < 1)
            topicosTable->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        topicosTable->setHorizontalHeaderItem(0, __qtablewidgetitem15);
        topicosTable->setObjectName(QString::fromUtf8("topicosTable"));
        topicosTable->setMinimumSize(QSize(0, 100));

        gridLayout->addWidget(topicosTable, 11, 0, 1, 3);

        lineEdit = new QLineEdit(scrollAreaWidgetContents);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 33, 2, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 25, 0, 1, 3);

        etTopicos = new QLineEdit(scrollAreaWidgetContents);
        etTopicos->setObjectName(QString::fromUtf8("etTopicos"));

        gridLayout->addWidget(etTopicos, 12, 2, 1, 1);

        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_14, 30, 0, 1, 3);

        etNovoTopico = new QLineEdit(scrollAreaWidgetContents);
        etNovoTopico->setObjectName(QString::fromUtf8("etNovoTopico"));

        gridLayout->addWidget(etNovoTopico, 13, 2, 1, 1);

        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_13, 20, 0, 1, 3);

        btMontaProva = new QPushButton(scrollAreaWidgetContents);
        btMontaProva->setObjectName(QString::fromUtf8("btMontaProva"));

        gridLayout->addWidget(btMontaProva, 23, 0, 1, 2);

        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 17, 0, 1, 1);

        etCandidatos = new QLineEdit(scrollAreaWidgetContents);
        etCandidatos->setObjectName(QString::fromUtf8("etCandidatos"));

        gridLayout->addWidget(etCandidatos, 27, 2, 1, 1);

        etLocal = new QLineEdit(scrollAreaWidgetContents);
        etLocal->setObjectName(QString::fromUtf8("etLocal"));

        gridLayout->addWidget(etLocal, 4, 1, 1, 2);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 10, 0, 1, 3);

        btNovoCandidato = new QPushButton(scrollAreaWidgetContents);
        btNovoCandidato->setObjectName(QString::fromUtf8("btNovoCandidato"));

        gridLayout->addWidget(btNovoCandidato, 28, 0, 1, 2);

        btNovoTopico = new QPushButton(scrollAreaWidgetContents);
        btNovoTopico->setObjectName(QString::fromUtf8("btNovoTopico"));

        gridLayout->addWidget(btNovoTopico, 13, 0, 1, 2);

        btBuscar = new QPushButton(scrollAreaWidgetContents);
        btBuscar->setObjectName(QString::fromUtf8("btBuscar"));

        gridLayout->addWidget(btBuscar, 6, 0, 1, 1);

        etAtualizar = new QLineEdit(scrollAreaWidgetContents);
        etAtualizar->setObjectName(QString::fromUtf8("etAtualizar"));

        gridLayout->addWidget(etAtualizar, 7, 1, 1, 2);

        etMontaFase = new QLineEdit(scrollAreaWidgetContents);
        etMontaFase->setObjectName(QString::fromUtf8("etMontaFase"));

        gridLayout->addWidget(etMontaFase, 23, 2, 1, 1);

        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 22, 0, 1, 1);

        etAdicionar = new QLineEdit(scrollAreaWidgetContents);
        etAdicionar->setObjectName(QString::fromUtf8("etAdicionar"));

        gridLayout->addWidget(etAdicionar, 8, 1, 1, 2);

        line_6 = new QFrame(scrollAreaWidgetContents);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_6, 19, 0, 1, 3);

        line_3 = new QFrame(scrollAreaWidgetContents);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 14, 0, 1, 3);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 12, 0, 1, 2);

        line_7 = new QFrame(scrollAreaWidgetContents);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_7, 29, 0, 1, 3);

        btAtualizar = new QPushButton(scrollAreaWidgetContents);
        btAtualizar->setObjectName(QString::fromUtf8("btAtualizar"));

        gridLayout->addWidget(btAtualizar, 7, 0, 1, 1);

        btNovaFase = new QPushButton(scrollAreaWidgetContents);
        btNovaFase->setObjectName(QString::fromUtf8("btNovaFase"));

        gridLayout->addWidget(btNovaFase, 18, 0, 1, 2);

        line_5 = new QFrame(scrollAreaWidgetContents);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_5, 5, 0, 1, 3);

        etBuscar = new QLineEdit(scrollAreaWidgetContents);
        etBuscar->setObjectName(QString::fromUtf8("etBuscar"));

        gridLayout->addWidget(etBuscar, 6, 1, 1, 2);

        etNome = new QLineEdit(scrollAreaWidgetContents);
        etNome->setObjectName(QString::fromUtf8("etNome"));

        gridLayout->addWidget(etNome, 2, 1, 1, 2);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 15, 0, 1, 3);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 27, 0, 1, 2);

        etNovaFase = new QLineEdit(scrollAreaWidgetContents);
        etNovaFase->setObjectName(QString::fromUtf8("etNovaFase"));

        gridLayout->addWidget(etNovaFase, 18, 2, 1, 1);

        line = new QFrame(scrollAreaWidgetContents);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 24, 0, 1, 3);

        fasesTable = new QTableWidget(scrollAreaWidgetContents);
        if (fasesTable->columnCount() < 2)
            fasesTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        fasesTable->setHorizontalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        fasesTable->setHorizontalHeaderItem(1, __qtablewidgetitem17);
        fasesTable->setObjectName(QString::fromUtf8("fasesTable"));
        fasesTable->setMinimumSize(QSize(0, 100));

        gridLayout->addWidget(fasesTable, 16, 0, 1, 3);

        etQuestoes = new QLineEdit(scrollAreaWidgetContents);
        etQuestoes->setObjectName(QString::fromUtf8("etQuestoes"));

        gridLayout->addWidget(etQuestoes, 32, 2, 1, 1);

        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout->addWidget(label_16, 32, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 3, 3, 1);


        retranslateUi(EditarCompeticoes);
        QObject::connect(btBuscar, SIGNAL(clicked()), EditarCompeticoes, SLOT(buscar()));
        QObject::connect(btAtualizar, SIGNAL(clicked()), EditarCompeticoes, SLOT(atualizar()));
        QObject::connect(btAdicionar, SIGNAL(clicked()), EditarCompeticoes, SLOT(adicionar()));
        QObject::connect(btNovoCandidato, SIGNAL(clicked()), EditarCompeticoes, SLOT(novoCandidato()));
        QObject::connect(btNovaFase, SIGNAL(clicked()), EditarCompeticoes, SLOT(novaFase()));
        QObject::connect(btNovoTopico, SIGNAL(clicked()), EditarCompeticoes, SLOT(novoTopico()));

        QMetaObject::connectSlotsByName(EditarCompeticoes);
    } // setupUi

    void retranslateUi(QDialog *EditarCompeticoes)
    {
        EditarCompeticoes->setWindowTitle(QApplication::translate("EditarCompeticoes", "Dialog", nullptr));
        label_12->setText(QApplication::translate("EditarCompeticoes", "Query Competi\303\247\303\265es:", nullptr));
        label_11->setText(QApplication::translate("EditarCompeticoes", "Competi\303\247\303\265es Ativas", nullptr));
        QTableWidgetItem *___qtablewidgetitem = competicoesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EditarCompeticoes", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = competicoesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EditarCompeticoes", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = competicoesTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("EditarCompeticoes", "Data", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = competicoesTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("EditarCompeticoes", "Local", nullptr));
        btAdicionar->setText(QApplication::translate("EditarCompeticoes", "Adicionar", nullptr));
        label_5->setText(QApplication::translate("EditarCompeticoes", "Nome:", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = candidatosTable->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("EditarCompeticoes", "Cpf", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = candidatosTable->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("EditarCompeticoes", "Ranking", nullptr));
        pushButton->setText(QApplication::translate("EditarCompeticoes", "Resolve", nullptr));
        label_4->setText(QApplication::translate("EditarCompeticoes", "Id:", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = questoesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("EditarCompeticoes", "IdQuestao", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = questoesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("EditarCompeticoes", "IdProva", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = questoesTable->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("EditarCompeticoes", "VersaoProva", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = questoesTable->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("EditarCompeticoes", "IdFase", nullptr));
        label_7->setText(QApplication::translate("EditarCompeticoes", "Local:", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = provasTable->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("EditarCompeticoes", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = provasTable->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("EditarCompeticoes", "Versao", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = provasTable->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("EditarCompeticoes", "Id_Fase", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = provasTable->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("EditarCompeticoes", "Cpf", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = provasTable->horizontalHeaderItem(4);
        ___qtablewidgetitem14->setText(QApplication::translate("EditarCompeticoes", "Data", nullptr));
        label_6->setText(QApplication::translate("EditarCompeticoes", "Data:", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = topicosTable->horizontalHeaderItem(0);
        ___qtablewidgetitem15->setText(QApplication::translate("EditarCompeticoes", "Nome", nullptr));
        label_3->setText(QApplication::translate("EditarCompeticoes", "Participantes", nullptr));
        label_14->setText(QApplication::translate("EditarCompeticoes", "Quest\303\265es", nullptr));
        label_13->setText(QApplication::translate("EditarCompeticoes", "Provas", nullptr));
        btMontaProva->setText(QApplication::translate("EditarCompeticoes", "Montar Prova", nullptr));
        label_9->setText(QApplication::translate("EditarCompeticoes", "Query fases:", nullptr));
        label->setText(QApplication::translate("EditarCompeticoes", "Topicos", nullptr));
        btNovoCandidato->setText(QApplication::translate("EditarCompeticoes", "Novo Candidato", nullptr));
        btNovoTopico->setText(QApplication::translate("EditarCompeticoes", "Novo Topico", nullptr));
        btBuscar->setText(QApplication::translate("EditarCompeticoes", "Buscar", nullptr));
        label_15->setText(QApplication::translate("EditarCompeticoes", "Query Provas:", nullptr));
        label_8->setText(QApplication::translate("EditarCompeticoes", "Query topicos:", nullptr));
        btAtualizar->setText(QApplication::translate("EditarCompeticoes", "Atualizar", nullptr));
        btNovaFase->setText(QApplication::translate("EditarCompeticoes", "Nova Fase", nullptr));
        label_2->setText(QApplication::translate("EditarCompeticoes", "Fases", nullptr));
        label_10->setText(QApplication::translate("EditarCompeticoes", "Query Candidatos:", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = fasesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem16->setText(QApplication::translate("EditarCompeticoes", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = fasesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem17->setText(QApplication::translate("EditarCompeticoes", "Numero Aprovados", nullptr));
        label_16->setText(QApplication::translate("EditarCompeticoes", "Query Questoes:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditarCompeticoes: public Ui_EditarCompeticoes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITARCOMPETICOES_H
