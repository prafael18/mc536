/********************************************************************************
** Form generated from reading UI file 'editarproponente.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITARPROPONENTE_H
#define UI_EDITARPROPONENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
    QLabel *ProponentesAtivos;
    QFrame *line;
    QLabel *label_4;
    QLineEdit *etCpf;
    QTableWidget *proponenteTable;
    QLabel *label_7;
    QLineEdit *etNome;
    QLabel *label_5;
    QLineEdit *etUniversidade;
    QLabel *label_8;
    QLineEdit *etFormacao;
    QFrame *line_3;
    QPushButton *pushButton_4;
    QLineEdit *etBuscar;
    QPushButton *pushButton_2;
    QLabel *label_13;
    QLineEdit *etAdicionarPessoa;
    QLabel *label_14;
    QLineEdit *etAdicionarProponente;
    QPushButton *pushButton;
    QLabel *label_9;
    QLineEdit *etUpdatePessoa;
    QLabel *label_10;
    QLineEdit *etUpdateProponente;
    QPushButton *pushButton_3;
    QLabel *label_11;
    QLineEdit *etRemovePropoe;
    QLabel *label_12;
    QLineEdit *etRemoveProponente;
    QFrame *line_2;
    QLabel *label_6;
    QTableWidget *questoesTable;
    QLabel *label_2;
    QLineEdit *etProponente;
    QLabel *label_3;
    QLineEdit *etQuestoes;

    void setupUi(QDialog *EditarProponente)
    {
        if (EditarProponente->objectName().isEmpty())
            EditarProponente->setObjectName(QString::fromUtf8("EditarProponente"));
        EditarProponente->resize(732, 634);
        gridLayout = new QGridLayout(EditarProponente);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ProponentesAtivos = new QLabel(EditarProponente);
        ProponentesAtivos->setObjectName(QString::fromUtf8("ProponentesAtivos"));
        ProponentesAtivos->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ProponentesAtivos, 0, 0, 1, 2);

        line = new QFrame(EditarProponente);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 2, 19, 1);

        label_4 = new QLabel(EditarProponente);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        etCpf = new QLineEdit(EditarProponente);
        etCpf->setObjectName(QString::fromUtf8("etCpf"));

        gridLayout->addWidget(etCpf, 0, 4, 1, 1);

        proponenteTable = new QTableWidget(EditarProponente);
        if (proponenteTable->columnCount() < 4)
            proponenteTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        proponenteTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        proponenteTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        proponenteTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        proponenteTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        proponenteTable->setObjectName(QString::fromUtf8("proponenteTable"));

        gridLayout->addWidget(proponenteTable, 1, 0, 17, 2);

        label_7 = new QLabel(EditarProponente);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 1, 3, 1, 1);

        etNome = new QLineEdit(EditarProponente);
        etNome->setObjectName(QString::fromUtf8("etNome"));

        gridLayout->addWidget(etNome, 1, 4, 1, 1);

        label_5 = new QLabel(EditarProponente);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 3, 1, 1);

        etUniversidade = new QLineEdit(EditarProponente);
        etUniversidade->setObjectName(QString::fromUtf8("etUniversidade"));

        gridLayout->addWidget(etUniversidade, 2, 4, 1, 1);

        label_8 = new QLabel(EditarProponente);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 3, 3, 1, 1);

        etFormacao = new QLineEdit(EditarProponente);
        etFormacao->setObjectName(QString::fromUtf8("etFormacao"));

        gridLayout->addWidget(etFormacao, 3, 4, 1, 1);

        line_3 = new QFrame(EditarProponente);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 4, 3, 1, 2);

        pushButton_4 = new QPushButton(EditarProponente);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 5, 3, 1, 1);

        etBuscar = new QLineEdit(EditarProponente);
        etBuscar->setObjectName(QString::fromUtf8("etBuscar"));

        gridLayout->addWidget(etBuscar, 5, 4, 1, 1);

        pushButton_2 = new QPushButton(EditarProponente);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 6, 3, 1, 2);

        label_13 = new QLabel(EditarProponente);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 7, 3, 1, 1);

        etAdicionarPessoa = new QLineEdit(EditarProponente);
        etAdicionarPessoa->setObjectName(QString::fromUtf8("etAdicionarPessoa"));

        gridLayout->addWidget(etAdicionarPessoa, 7, 4, 1, 1);

        label_14 = new QLabel(EditarProponente);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 8, 3, 1, 1);

        etAdicionarProponente = new QLineEdit(EditarProponente);
        etAdicionarProponente->setObjectName(QString::fromUtf8("etAdicionarProponente"));

        gridLayout->addWidget(etAdicionarProponente, 8, 4, 1, 1);

        pushButton = new QPushButton(EditarProponente);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 9, 3, 1, 2);

        label_9 = new QLabel(EditarProponente);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 10, 3, 1, 1);

        etUpdatePessoa = new QLineEdit(EditarProponente);
        etUpdatePessoa->setObjectName(QString::fromUtf8("etUpdatePessoa"));

        gridLayout->addWidget(etUpdatePessoa, 10, 4, 1, 1);

        label_10 = new QLabel(EditarProponente);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 11, 3, 1, 1);

        etUpdateProponente = new QLineEdit(EditarProponente);
        etUpdateProponente->setObjectName(QString::fromUtf8("etUpdateProponente"));

        gridLayout->addWidget(etUpdateProponente, 11, 4, 1, 1);

        pushButton_3 = new QPushButton(EditarProponente);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 12, 3, 1, 2);

        label_11 = new QLabel(EditarProponente);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 13, 3, 1, 1);

        etRemovePropoe = new QLineEdit(EditarProponente);
        etRemovePropoe->setObjectName(QString::fromUtf8("etRemovePropoe"));

        gridLayout->addWidget(etRemovePropoe, 13, 4, 1, 1);

        label_12 = new QLabel(EditarProponente);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 14, 3, 1, 1);

        etRemoveProponente = new QLineEdit(EditarProponente);
        etRemoveProponente->setObjectName(QString::fromUtf8("etRemoveProponente"));

        gridLayout->addWidget(etRemoveProponente, 14, 4, 1, 1);

        line_2 = new QFrame(EditarProponente);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 15, 3, 1, 2);

        label_6 = new QLabel(EditarProponente);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 16, 3, 1, 2);

        questoesTable = new QTableWidget(EditarProponente);
        if (questoesTable->columnCount() < 2)
            questoesTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        questoesTable->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        questoesTable->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        questoesTable->setObjectName(QString::fromUtf8("questoesTable"));

        gridLayout->addWidget(questoesTable, 17, 3, 1, 2);

        label_2 = new QLabel(EditarProponente);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 18, 0, 1, 1);

        etProponente = new QLineEdit(EditarProponente);
        etProponente->setObjectName(QString::fromUtf8("etProponente"));

        gridLayout->addWidget(etProponente, 18, 1, 1, 1);

        label_3 = new QLabel(EditarProponente);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 18, 3, 1, 1);

        etQuestoes = new QLineEdit(EditarProponente);
        etQuestoes->setObjectName(QString::fromUtf8("etQuestoes"));

        gridLayout->addWidget(etQuestoes, 18, 4, 1, 1);


        retranslateUi(EditarProponente);
        QObject::connect(pushButton_4, SIGNAL(clicked()), EditarProponente, SLOT(buscar()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), EditarProponente, SLOT(adicionar()));
        QObject::connect(pushButton, SIGNAL(clicked()), EditarProponente, SLOT(atualizar()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), EditarProponente, SLOT(remover()));

        QMetaObject::connectSlotsByName(EditarProponente);
    } // setupUi

    void retranslateUi(QDialog *EditarProponente)
    {
        EditarProponente->setWindowTitle(QApplication::translate("EditarProponente", "Dialog", nullptr));
        ProponentesAtivos->setText(QApplication::translate("EditarProponente", "Proponentes", nullptr));
        label_4->setText(QApplication::translate("EditarProponente", "Cpf:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = proponenteTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EditarProponente", "Cpf", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = proponenteTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EditarProponente", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = proponenteTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("EditarProponente", "Universidade", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = proponenteTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("EditarProponente", "Forma\303\247\303\243o Acad\303\252mica", nullptr));
        label_7->setText(QApplication::translate("EditarProponente", "Nome:", nullptr));
        label_5->setText(QApplication::translate("EditarProponente", "Universidade:", nullptr));
        label_8->setText(QApplication::translate("EditarProponente", "Forma\303\247\303\243o:", nullptr));
        pushButton_4->setText(QApplication::translate("EditarProponente", "Buscar", nullptr));
        pushButton_2->setText(QApplication::translate("EditarProponente", "Adicionar", nullptr));
        label_13->setText(QApplication::translate("EditarProponente", "Query Pessoa:", nullptr));
        label_14->setText(QApplication::translate("EditarProponente", "Query Proponente:", nullptr));
        pushButton->setText(QApplication::translate("EditarProponente", "Atualizar", nullptr));
        label_9->setText(QApplication::translate("EditarProponente", "Query Pessoa:", nullptr));
        label_10->setText(QApplication::translate("EditarProponente", "Query Proponente:", nullptr));
        pushButton_3->setText(QApplication::translate("EditarProponente", "Remover", nullptr));
        label_11->setText(QApplication::translate("EditarProponente", "Query Propoe:", nullptr));
        label_12->setText(QApplication::translate("EditarProponente", "Query Proponente:", nullptr));
        label_6->setText(QApplication::translate("EditarProponente", "Quest\303\265es Propostas", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = questoesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("EditarProponente", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = questoesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("EditarProponente", "Data", nullptr));
        label_2->setText(QApplication::translate("EditarProponente", "Query Proponentes:", nullptr));
        label_3->setText(QApplication::translate("EditarProponente", "Query Quest\303\265es:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditarProponente: public Ui_EditarProponente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITARPROPONENTE_H
