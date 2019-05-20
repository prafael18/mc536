/********************************************************************************
** Form generated from reading UI file 'editarcompeticoes.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITARCOMPETICOES_H
#define UI_EDITARCOMPETICOES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
    QLabel *label_4;
    QLabel *label_19;
    QLineEdit *etFases;
    QTableWidget *topicosTable;
    QPushButton *pushButton;
    QLabel *label_7;
    QLineEdit *etId;
    QLineEdit *etProvas;
    QFrame *line_4;
    QFrame *line;
    QFrame *line_3;
    QLineEdit *etNovoCandidato;
    QLineEdit *etAdicionar;
    QLineEdit *etAddMonta;
    QPushButton *btAdicionar;
    QLabel *label_14;
    QFrame *line_5;
    QLabel *label_16;
    QLineEdit *etLocal;
    QLabel *label_18;
    QLineEdit *etBuscar;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *etData;
    QLabel *label_15;
    QFrame *line_6;
    QLineEdit *etNovaFase;
    QTableWidget *provasTable;
    QLineEdit *etAddProva;
    QLineEdit *etTopicos;
    QLineEdit *etQuestoes;
    QPushButton *btBuscar;
    QLabel *label_6;
    QPushButton *btMontaProva;
    QPushButton *btNovoTopico;
    QLabel *label_8;
    QPushButton *btNovoCandidato;
    QTableWidget *fasesTable;
    QLabel *label;
    QFrame *line_7;
    QLineEdit *etNome;
    QLabel *label_17;
    QLabel *label_10;
    QLabel *label_9;
    QTableWidget *questoesTable;
    QLineEdit *etResolve;
    QLineEdit *etCandidatos;
    QLabel *label_13;
    QPushButton *btNovaFase;
    QLineEdit *etAtualizar;
    QLabel *label_2;
    QPushButton *btAtualizar;
    QLineEdit *etNovoTopico;
    QLineEdit *etAddQuestao;
    QPushButton *pushButton_2;
    QLineEdit *etNumFases;
    QTableWidget *candidatosTable;

    void setupUi(QDialog *EditarCompeticoes)
    {
        if (EditarCompeticoes->objectName().isEmpty())
            EditarCompeticoes->setObjectName(QStringLiteral("EditarCompeticoes"));
        EditarCompeticoes->resize(680, 424);
        gridLayout_2 = new QGridLayout(EditarCompeticoes);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_12 = new QLabel(EditarCompeticoes);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 2, 0, 1, 1);

        label_11 = new QLabel(EditarCompeticoes);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_11, 0, 0, 1, 2);

        line_2 = new QFrame(EditarCompeticoes);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 0, 2, 3, 1);

        etCompeticoes = new QLineEdit(EditarCompeticoes);
        etCompeticoes->setObjectName(QStringLiteral("etCompeticoes"));

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
        competicoesTable->setObjectName(QStringLiteral("competicoesTable"));

        gridLayout_2->addWidget(competicoesTable, 1, 0, 1, 2);

        scrollArea = new QScrollArea(EditarCompeticoes);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -806, 278, 1472));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_19 = new QLabel(scrollAreaWidgetContents);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout->addWidget(label_19, 18, 0, 1, 1);

        etFases = new QLineEdit(scrollAreaWidgetContents);
        etFases->setObjectName(QStringLiteral("etFases"));

        gridLayout->addWidget(etFases, 19, 2, 1, 1);

        topicosTable = new QTableWidget(scrollAreaWidgetContents);
        if (topicosTable->columnCount() < 1)
            topicosTable->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        topicosTable->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        topicosTable->setObjectName(QStringLiteral("topicosTable"));
        topicosTable->setMinimumSize(QSize(0, 100));

        gridLayout->addWidget(topicosTable, 11, 0, 1, 3);

        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 39, 0, 1, 2);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        etId = new QLineEdit(scrollAreaWidgetContents);
        etId->setObjectName(QStringLiteral("etId"));

        gridLayout->addWidget(etId, 0, 1, 1, 2);

        etProvas = new QLineEdit(scrollAreaWidgetContents);
        etProvas->setObjectName(QStringLiteral("etProvas"));

        gridLayout->addWidget(etProvas, 24, 2, 1, 1);

        line_4 = new QFrame(scrollAreaWidgetContents);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 9, 0, 1, 3);

        line = new QFrame(scrollAreaWidgetContents);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 28, 0, 1, 3);

        line_3 = new QFrame(scrollAreaWidgetContents);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 14, 0, 1, 3);

        etNovoCandidato = new QLineEdit(scrollAreaWidgetContents);
        etNovoCandidato->setObjectName(QStringLiteral("etNovoCandidato"));

        gridLayout->addWidget(etNovoCandidato, 33, 2, 1, 1);

        etAdicionar = new QLineEdit(scrollAreaWidgetContents);
        etAdicionar->setObjectName(QStringLiteral("etAdicionar"));

        gridLayout->addWidget(etAdicionar, 8, 1, 1, 2);

        etAddMonta = new QLineEdit(scrollAreaWidgetContents);
        etAddMonta->setObjectName(QStringLiteral("etAddMonta"));

        gridLayout->addWidget(etAddMonta, 27, 2, 1, 1);

        btAdicionar = new QPushButton(scrollAreaWidgetContents);
        btAdicionar->setObjectName(QStringLiteral("btAdicionar"));

        gridLayout->addWidget(btAdicionar, 8, 0, 1, 1);

        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_14, 35, 0, 1, 3);

        line_5 = new QFrame(scrollAreaWidgetContents);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_5, 5, 0, 1, 3);

        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout->addWidget(label_16, 37, 0, 1, 1);

        etLocal = new QLineEdit(scrollAreaWidgetContents);
        etLocal->setObjectName(QStringLiteral("etLocal"));

        gridLayout->addWidget(etLocal, 4, 1, 1, 2);

        label_18 = new QLabel(scrollAreaWidgetContents);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout->addWidget(label_18, 27, 0, 1, 1);

        etBuscar = new QLineEdit(scrollAreaWidgetContents);
        etBuscar->setObjectName(QStringLiteral("etBuscar"));

        gridLayout->addWidget(etBuscar, 6, 1, 1, 2);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 30, 0, 1, 3);

        etData = new QLineEdit(scrollAreaWidgetContents);
        etData->setObjectName(QStringLiteral("etData"));

        gridLayout->addWidget(etData, 3, 1, 1, 2);

        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout->addWidget(label_15, 24, 0, 1, 1);

        line_6 = new QFrame(scrollAreaWidgetContents);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_6, 21, 0, 1, 3);

        etNovaFase = new QLineEdit(scrollAreaWidgetContents);
        etNovaFase->setObjectName(QStringLiteral("etNovaFase"));

        gridLayout->addWidget(etNovaFase, 20, 2, 1, 1);

        provasTable = new QTableWidget(scrollAreaWidgetContents);
        if (provasTable->columnCount() < 5)
            provasTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        provasTable->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        provasTable->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        provasTable->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        provasTable->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        provasTable->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        provasTable->setObjectName(QStringLiteral("provasTable"));
        provasTable->setMinimumSize(QSize(0, 140));

        gridLayout->addWidget(provasTable, 23, 0, 1, 3);

        etAddProva = new QLineEdit(scrollAreaWidgetContents);
        etAddProva->setObjectName(QStringLiteral("etAddProva"));

        gridLayout->addWidget(etAddProva, 26, 2, 1, 1);

        etTopicos = new QLineEdit(scrollAreaWidgetContents);
        etTopicos->setObjectName(QStringLiteral("etTopicos"));

        gridLayout->addWidget(etTopicos, 12, 2, 1, 1);

        etQuestoes = new QLineEdit(scrollAreaWidgetContents);
        etQuestoes->setObjectName(QStringLiteral("etQuestoes"));

        gridLayout->addWidget(etQuestoes, 37, 2, 1, 1);

        btBuscar = new QPushButton(scrollAreaWidgetContents);
        btBuscar->setObjectName(QStringLiteral("btBuscar"));

        gridLayout->addWidget(btBuscar, 6, 0, 1, 1);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        btMontaProva = new QPushButton(scrollAreaWidgetContents);
        btMontaProva->setObjectName(QStringLiteral("btMontaProva"));

        gridLayout->addWidget(btMontaProva, 25, 0, 1, 3);

        btNovoTopico = new QPushButton(scrollAreaWidgetContents);
        btNovoTopico->setObjectName(QStringLiteral("btNovoTopico"));

        gridLayout->addWidget(btNovoTopico, 13, 0, 1, 2);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 12, 0, 1, 2);

        btNovoCandidato = new QPushButton(scrollAreaWidgetContents);
        btNovoCandidato->setObjectName(QStringLiteral("btNovoCandidato"));

        gridLayout->addWidget(btNovoCandidato, 33, 0, 1, 2);

        fasesTable = new QTableWidget(scrollAreaWidgetContents);
        if (fasesTable->columnCount() < 2)
            fasesTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        fasesTable->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        fasesTable->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        fasesTable->setObjectName(QStringLiteral("fasesTable"));
        fasesTable->setMinimumSize(QSize(0, 100));

        gridLayout->addWidget(fasesTable, 16, 0, 1, 3);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 10, 0, 1, 3);

        line_7 = new QFrame(scrollAreaWidgetContents);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_7, 34, 0, 1, 3);

        etNome = new QLineEdit(scrollAreaWidgetContents);
        etNome->setObjectName(QStringLiteral("etNome"));

        gridLayout->addWidget(etNome, 2, 1, 1, 2);

        label_17 = new QLabel(scrollAreaWidgetContents);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout->addWidget(label_17, 26, 0, 1, 1);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 32, 0, 1, 2);

        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 19, 0, 1, 1);

        questoesTable = new QTableWidget(scrollAreaWidgetContents);
        if (questoesTable->columnCount() < 4)
            questoesTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        questoesTable->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        questoesTable->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        questoesTable->setHorizontalHeaderItem(2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        questoesTable->setHorizontalHeaderItem(3, __qtablewidgetitem15);
        questoesTable->setObjectName(QStringLiteral("questoesTable"));
        questoesTable->setMinimumSize(QSize(0, 140));

        gridLayout->addWidget(questoesTable, 36, 0, 1, 3);

        etResolve = new QLineEdit(scrollAreaWidgetContents);
        etResolve->setObjectName(QStringLiteral("etResolve"));

        gridLayout->addWidget(etResolve, 39, 2, 1, 1);

        etCandidatos = new QLineEdit(scrollAreaWidgetContents);
        etCandidatos->setObjectName(QStringLiteral("etCandidatos"));

        gridLayout->addWidget(etCandidatos, 32, 2, 1, 1);

        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_13, 22, 0, 1, 3);

        btNovaFase = new QPushButton(scrollAreaWidgetContents);
        btNovaFase->setObjectName(QStringLiteral("btNovaFase"));

        gridLayout->addWidget(btNovaFase, 20, 0, 1, 2);

        etAtualizar = new QLineEdit(scrollAreaWidgetContents);
        etAtualizar->setObjectName(QStringLiteral("etAtualizar"));

        gridLayout->addWidget(etAtualizar, 7, 1, 1, 2);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 15, 0, 1, 3);

        btAtualizar = new QPushButton(scrollAreaWidgetContents);
        btAtualizar->setObjectName(QStringLiteral("btAtualizar"));

        gridLayout->addWidget(btAtualizar, 7, 0, 1, 1);

        etNovoTopico = new QLineEdit(scrollAreaWidgetContents);
        etNovoTopico->setObjectName(QStringLiteral("etNovoTopico"));

        gridLayout->addWidget(etNovoTopico, 13, 2, 1, 1);

        etAddQuestao = new QLineEdit(scrollAreaWidgetContents);
        etAddQuestao->setObjectName(QStringLiteral("etAddQuestao"));

        gridLayout->addWidget(etAddQuestao, 38, 2, 1, 1);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 38, 0, 1, 2);

        etNumFases = new QLineEdit(scrollAreaWidgetContents);
        etNumFases->setObjectName(QStringLiteral("etNumFases"));

        gridLayout->addWidget(etNumFases, 18, 2, 1, 1);

        candidatosTable = new QTableWidget(scrollAreaWidgetContents);
        if (candidatosTable->columnCount() < 3)
            candidatosTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        candidatosTable->setHorizontalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        candidatosTable->setHorizontalHeaderItem(1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        candidatosTable->setHorizontalHeaderItem(2, __qtablewidgetitem18);
        candidatosTable->setObjectName(QStringLiteral("candidatosTable"));
        candidatosTable->setMinimumSize(QSize(0, 130));

        gridLayout->addWidget(candidatosTable, 31, 0, 1, 3);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 3, 3, 1);


        retranslateUi(EditarCompeticoes);
        QObject::connect(btBuscar, SIGNAL(clicked()), EditarCompeticoes, SLOT(buscar()));
        QObject::connect(btAtualizar, SIGNAL(clicked()), EditarCompeticoes, SLOT(atualizar()));
        QObject::connect(btAdicionar, SIGNAL(clicked()), EditarCompeticoes, SLOT(adicionar()));
        QObject::connect(btNovoCandidato, SIGNAL(clicked()), EditarCompeticoes, SLOT(novoCandidato()));
        QObject::connect(btNovaFase, SIGNAL(clicked()), EditarCompeticoes, SLOT(novaFase()));
        QObject::connect(btNovoTopico, SIGNAL(clicked()), EditarCompeticoes, SLOT(novoTopico()));
        QObject::connect(btMontaProva, SIGNAL(clicked()), EditarCompeticoes, SLOT(montaProva()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), EditarCompeticoes, SLOT(novaQuestao()));
        QObject::connect(pushButton, SIGNAL(clicked()), EditarCompeticoes, SLOT(resolve()));

        QMetaObject::connectSlotsByName(EditarCompeticoes);
    } // setupUi

    void retranslateUi(QDialog *EditarCompeticoes)
    {
        EditarCompeticoes->setWindowTitle(QApplication::translate("EditarCompeticoes", "Dialog", Q_NULLPTR));
        label_12->setText(QApplication::translate("EditarCompeticoes", "Query Competi\303\247\303\265es:", Q_NULLPTR));
        label_11->setText(QApplication::translate("EditarCompeticoes", "Competi\303\247\303\265es Ativas", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = competicoesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EditarCompeticoes", "Id", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = competicoesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EditarCompeticoes", "Nome", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = competicoesTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("EditarCompeticoes", "Data", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = competicoesTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("EditarCompeticoes", "Local", Q_NULLPTR));
        label_4->setText(QApplication::translate("EditarCompeticoes", "Id:", Q_NULLPTR));
        label_19->setText(QApplication::translate("EditarCompeticoes", "N\303\272mero de Fases:", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = topicosTable->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("EditarCompeticoes", "Nome", Q_NULLPTR));
        pushButton->setText(QApplication::translate("EditarCompeticoes", "Resolve", Q_NULLPTR));
        label_7->setText(QApplication::translate("EditarCompeticoes", "Local:", Q_NULLPTR));
        btAdicionar->setText(QApplication::translate("EditarCompeticoes", "Adicionar", Q_NULLPTR));
        label_14->setText(QApplication::translate("EditarCompeticoes", "Quest\303\265es", Q_NULLPTR));
        label_16->setText(QApplication::translate("EditarCompeticoes", "Query Questoes:", Q_NULLPTR));
        label_18->setText(QApplication::translate("EditarCompeticoes", "Add em Monta:", Q_NULLPTR));
        label_5->setText(QApplication::translate("EditarCompeticoes", "Nome:", Q_NULLPTR));
        label_3->setText(QApplication::translate("EditarCompeticoes", "Participantes", Q_NULLPTR));
        label_15->setText(QApplication::translate("EditarCompeticoes", "Query Provas:", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = provasTable->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("EditarCompeticoes", "Id", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = provasTable->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("EditarCompeticoes", "Versao", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = provasTable->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("EditarCompeticoes", "Id_Fase", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = provasTable->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("EditarCompeticoes", "Cpf", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = provasTable->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("EditarCompeticoes", "Data", Q_NULLPTR));
        btBuscar->setText(QApplication::translate("EditarCompeticoes", "Buscar", Q_NULLPTR));
        label_6->setText(QApplication::translate("EditarCompeticoes", "Data:", Q_NULLPTR));
        btMontaProva->setText(QApplication::translate("EditarCompeticoes", "Montar Prova", Q_NULLPTR));
        btNovoTopico->setText(QApplication::translate("EditarCompeticoes", "Novo Topico", Q_NULLPTR));
        label_8->setText(QApplication::translate("EditarCompeticoes", "Query topicos:", Q_NULLPTR));
        btNovoCandidato->setText(QApplication::translate("EditarCompeticoes", "Novo Candidato", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = fasesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("EditarCompeticoes", "Id", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = fasesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("EditarCompeticoes", "Numero Aprovados", Q_NULLPTR));
        label->setText(QApplication::translate("EditarCompeticoes", "Topicos", Q_NULLPTR));
        label_17->setText(QApplication::translate("EditarCompeticoes", "Add em Prova:", Q_NULLPTR));
        label_10->setText(QApplication::translate("EditarCompeticoes", "Query Candidatos:", Q_NULLPTR));
        label_9->setText(QApplication::translate("EditarCompeticoes", "Query fases:", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = questoesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("EditarCompeticoes", "IdQuestao", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = questoesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("EditarCompeticoes", "IdProva", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = questoesTable->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QApplication::translate("EditarCompeticoes", "VersaoProva", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = questoesTable->horizontalHeaderItem(3);
        ___qtablewidgetitem15->setText(QApplication::translate("EditarCompeticoes", "IdFase", Q_NULLPTR));
        label_13->setText(QApplication::translate("EditarCompeticoes", "Provas", Q_NULLPTR));
        btNovaFase->setText(QApplication::translate("EditarCompeticoes", "Nova Fase", Q_NULLPTR));
        label_2->setText(QApplication::translate("EditarCompeticoes", "Fases", Q_NULLPTR));
        btAtualizar->setText(QApplication::translate("EditarCompeticoes", "Atualizar", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("EditarCompeticoes", "Add Quest\303\243o", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = candidatosTable->horizontalHeaderItem(0);
        ___qtablewidgetitem16->setText(QApplication::translate("EditarCompeticoes", "CPF", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = candidatosTable->horizontalHeaderItem(1);
        ___qtablewidgetitem17->setText(QApplication::translate("EditarCompeticoes", "Nome", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = candidatosTable->horizontalHeaderItem(2);
        ___qtablewidgetitem18->setText(QApplication::translate("EditarCompeticoes", "Ranking", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditarCompeticoes: public Ui_EditarCompeticoes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITARCOMPETICOES_H
