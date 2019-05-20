/********************************************************************************
** Form generated from reading UI file 'editarproponente.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITARPROPONENTE_H
#define UI_EDITARPROPONENTE_H

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
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_EditarProponente
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QLabel *label_11;
    QLineEdit *etNome;
    QLabel *label_14;
    QLabel *label_2;
    QFrame *line;
    QLabel *label_13;
    QFrame *line_2;
    QLineEdit *etUpdatePessoa;
    QLabel *label_9;
    QLabel *label_12;
    QTableWidget *questoesTable;
    QLineEdit *etRemovePropoe;
    QLabel *label_7;
    QLineEdit *etBuscar;
    QFrame *line_3;
    QTableWidget *proponenteTable;
    QLineEdit *etCpf;
    QPushButton *pushButton_4;
    QLineEdit *etAdicionarProponente;
    QLineEdit *etUniversidade;
    QLineEdit *etRemoveProponente;
    QLineEdit *etUpdateProponente;
    QLineEdit *etQuestoes;
    QLabel *label_6;
    QLineEdit *etAdicionarPessoa;
    QPushButton *pushButton_2;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *ProponentesAtivos;
    QPushButton *pushButton;
    QLabel *label_4;
    QLineEdit *etFormacao;
    QLabel *label_3;
    QLineEdit *etProponente;
    QLabel *label_10;
    QLabel *label;
    QLineEdit *etNumQuestoes;

    void setupUi(QDialog *EditarProponente)
    {
        if (EditarProponente->objectName().isEmpty())
            EditarProponente->setObjectName(QStringLiteral("EditarProponente"));
        EditarProponente->resize(732, 634);
        gridLayout = new QGridLayout(EditarProponente);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_3 = new QPushButton(EditarProponente);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 12, 3, 1, 2);

        label_11 = new QLabel(EditarProponente);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 13, 3, 1, 1);

        etNome = new QLineEdit(EditarProponente);
        etNome->setObjectName(QStringLiteral("etNome"));

        gridLayout->addWidget(etNome, 1, 4, 1, 1);

        label_14 = new QLabel(EditarProponente);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 8, 3, 1, 1);

        label_2 = new QLabel(EditarProponente);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 19, 0, 1, 1);

        line = new QFrame(EditarProponente);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 2, 20, 1);

        label_13 = new QLabel(EditarProponente);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 7, 3, 1, 1);

        line_2 = new QFrame(EditarProponente);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 15, 3, 1, 2);

        etUpdatePessoa = new QLineEdit(EditarProponente);
        etUpdatePessoa->setObjectName(QStringLiteral("etUpdatePessoa"));

        gridLayout->addWidget(etUpdatePessoa, 10, 4, 1, 1);

        label_9 = new QLabel(EditarProponente);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 10, 3, 1, 1);

        label_12 = new QLabel(EditarProponente);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 14, 3, 1, 1);

        questoesTable = new QTableWidget(EditarProponente);
        if (questoesTable->columnCount() < 2)
            questoesTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        questoesTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        questoesTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        questoesTable->setObjectName(QStringLiteral("questoesTable"));

        gridLayout->addWidget(questoesTable, 17, 3, 1, 2);

        etRemovePropoe = new QLineEdit(EditarProponente);
        etRemovePropoe->setObjectName(QStringLiteral("etRemovePropoe"));

        gridLayout->addWidget(etRemovePropoe, 13, 4, 1, 1);

        label_7 = new QLabel(EditarProponente);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 1, 3, 1, 1);

        etBuscar = new QLineEdit(EditarProponente);
        etBuscar->setObjectName(QStringLiteral("etBuscar"));

        gridLayout->addWidget(etBuscar, 5, 4, 1, 1);

        line_3 = new QFrame(EditarProponente);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 4, 3, 1, 2);

        proponenteTable = new QTableWidget(EditarProponente);
        if (proponenteTable->columnCount() < 4)
            proponenteTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        proponenteTable->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        proponenteTable->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        proponenteTable->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        proponenteTable->setHorizontalHeaderItem(3, __qtablewidgetitem5);
        proponenteTable->setObjectName(QStringLiteral("proponenteTable"));

        gridLayout->addWidget(proponenteTable, 1, 0, 17, 2);

        etCpf = new QLineEdit(EditarProponente);
        etCpf->setObjectName(QStringLiteral("etCpf"));

        gridLayout->addWidget(etCpf, 0, 4, 1, 1);

        pushButton_4 = new QPushButton(EditarProponente);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 5, 3, 1, 1);

        etAdicionarProponente = new QLineEdit(EditarProponente);
        etAdicionarProponente->setObjectName(QStringLiteral("etAdicionarProponente"));

        gridLayout->addWidget(etAdicionarProponente, 8, 4, 1, 1);

        etUniversidade = new QLineEdit(EditarProponente);
        etUniversidade->setObjectName(QStringLiteral("etUniversidade"));

        gridLayout->addWidget(etUniversidade, 2, 4, 1, 1);

        etRemoveProponente = new QLineEdit(EditarProponente);
        etRemoveProponente->setObjectName(QStringLiteral("etRemoveProponente"));

        gridLayout->addWidget(etRemoveProponente, 14, 4, 1, 1);

        etUpdateProponente = new QLineEdit(EditarProponente);
        etUpdateProponente->setObjectName(QStringLiteral("etUpdateProponente"));

        gridLayout->addWidget(etUpdateProponente, 11, 4, 1, 1);

        etQuestoes = new QLineEdit(EditarProponente);
        etQuestoes->setObjectName(QStringLiteral("etQuestoes"));

        gridLayout->addWidget(etQuestoes, 19, 4, 1, 1);

        label_6 = new QLabel(EditarProponente);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 16, 3, 1, 2);

        etAdicionarPessoa = new QLineEdit(EditarProponente);
        etAdicionarPessoa->setObjectName(QStringLiteral("etAdicionarPessoa"));

        gridLayout->addWidget(etAdicionarPessoa, 7, 4, 1, 1);

        pushButton_2 = new QPushButton(EditarProponente);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 6, 3, 1, 2);

        label_8 = new QLabel(EditarProponente);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 3, 3, 1, 1);

        label_5 = new QLabel(EditarProponente);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 3, 1, 1);

        ProponentesAtivos = new QLabel(EditarProponente);
        ProponentesAtivos->setObjectName(QStringLiteral("ProponentesAtivos"));
        ProponentesAtivos->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ProponentesAtivos, 0, 0, 1, 2);

        pushButton = new QPushButton(EditarProponente);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 9, 3, 1, 2);

        label_4 = new QLabel(EditarProponente);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        etFormacao = new QLineEdit(EditarProponente);
        etFormacao->setObjectName(QStringLiteral("etFormacao"));

        gridLayout->addWidget(etFormacao, 3, 4, 1, 1);

        label_3 = new QLabel(EditarProponente);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 19, 3, 1, 1);

        etProponente = new QLineEdit(EditarProponente);
        etProponente->setObjectName(QStringLiteral("etProponente"));

        gridLayout->addWidget(etProponente, 19, 1, 1, 1);

        label_10 = new QLabel(EditarProponente);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 11, 3, 1, 1);

        label = new QLabel(EditarProponente);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 18, 3, 1, 1);

        etNumQuestoes = new QLineEdit(EditarProponente);
        etNumQuestoes->setObjectName(QStringLiteral("etNumQuestoes"));

        gridLayout->addWidget(etNumQuestoes, 18, 4, 1, 1);


        retranslateUi(EditarProponente);
        QObject::connect(pushButton_4, SIGNAL(clicked()), EditarProponente, SLOT(buscar()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), EditarProponente, SLOT(adicionar()));
        QObject::connect(pushButton, SIGNAL(clicked()), EditarProponente, SLOT(atualizar()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), EditarProponente, SLOT(remover()));

        QMetaObject::connectSlotsByName(EditarProponente);
    } // setupUi

    void retranslateUi(QDialog *EditarProponente)
    {
        EditarProponente->setWindowTitle(QApplication::translate("EditarProponente", "Dialog", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("EditarProponente", "Remover", Q_NULLPTR));
        label_11->setText(QApplication::translate("EditarProponente", "Query Propoe:", Q_NULLPTR));
        label_14->setText(QApplication::translate("EditarProponente", "Query Proponente:", Q_NULLPTR));
        label_2->setText(QApplication::translate("EditarProponente", "Query Proponentes:", Q_NULLPTR));
        label_13->setText(QApplication::translate("EditarProponente", "Query Pessoa:", Q_NULLPTR));
        label_9->setText(QApplication::translate("EditarProponente", "Query Pessoa:", Q_NULLPTR));
        label_12->setText(QApplication::translate("EditarProponente", "Query Proponente:", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = questoesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EditarProponente", "ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = questoesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EditarProponente", "Nome", Q_NULLPTR));
        label_7->setText(QApplication::translate("EditarProponente", "Nome:", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = proponenteTable->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("EditarProponente", "Cpf", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = proponenteTable->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("EditarProponente", "Nome", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = proponenteTable->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("EditarProponente", "Universidade", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = proponenteTable->horizontalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("EditarProponente", "Forma\303\247\303\243o Acad\303\252mica", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("EditarProponente", "Buscar", Q_NULLPTR));
        label_6->setText(QApplication::translate("EditarProponente", "Quest\303\265es Propostas", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("EditarProponente", "Adicionar", Q_NULLPTR));
        label_8->setText(QApplication::translate("EditarProponente", "Forma\303\247\303\243o:", Q_NULLPTR));
        label_5->setText(QApplication::translate("EditarProponente", "Universidade:", Q_NULLPTR));
        ProponentesAtivos->setText(QApplication::translate("EditarProponente", "Proponentes", Q_NULLPTR));
        pushButton->setText(QApplication::translate("EditarProponente", "Atualizar", Q_NULLPTR));
        label_4->setText(QApplication::translate("EditarProponente", "Cpf:", Q_NULLPTR));
        label_3->setText(QApplication::translate("EditarProponente", "Query Quest\303\265es:", Q_NULLPTR));
        label_10->setText(QApplication::translate("EditarProponente", "Query Proponente:", Q_NULLPTR));
        label->setText(QApplication::translate("EditarProponente", "N\303\272mero de Quest\303\265es:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditarProponente: public Ui_EditarProponente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITARPROPONENTE_H
