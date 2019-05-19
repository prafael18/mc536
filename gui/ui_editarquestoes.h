/********************************************************************************
** Form generated from reading UI file 'editarquestoes.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITARQUESTOES_H
#define UI_EDITARQUESTOES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_EditarQuestoes
{
public:
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLineEdit *etSelectTable;
    QTableWidget *questoesTable;
    QFrame *line;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QLabel *label_3;
    QLineEdit *etNome;
    QLineEdit *etSaida;
    QLineEdit *etTempo;
    QLineEdit *etUpdate;
    QComboBox *cbTopico;
    QLineEdit *etId;
    QLabel *label_13;
    QLabel *label_12;
    QPushButton *pushButton;
    QLineEdit *etEnunciado;
    QLineEdit *etNivel;
    QPushButton *pushButton_2;
    QLineEdit *etBusca;
    QLabel *label_11;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_9;
    QLineEdit *etEntrada;
    QLineEdit *etAdiciona;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_14;
    QLineEdit *etRemovePossui;
    QLineEdit *etRemovePropoe;
    QLineEdit *etRemoveResolve;
    QLineEdit *etRemoveQuestao;
    QPushButton *pushButton_4;
    QLabel *label_4;

    void setupUi(QDialog *EditarQuestoes)
    {
        if (EditarQuestoes->objectName().isEmpty())
            EditarQuestoes->setObjectName(QString::fromUtf8("EditarQuestoes"));
        EditarQuestoes->resize(690, 590);
        gridLayout = new QGridLayout(EditarQuestoes);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_10 = new QLabel(EditarQuestoes);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 2, 0, 1, 1);

        etSelectTable = new QLineEdit(EditarQuestoes);
        etSelectTable->setObjectName(QString::fromUtf8("etSelectTable"));

        gridLayout->addWidget(etSelectTable, 2, 1, 1, 1);

        questoesTable = new QTableWidget(EditarQuestoes);
        if (questoesTable->columnCount() < 5)
            questoesTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        questoesTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        questoesTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        questoesTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        questoesTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        questoesTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        questoesTable->setObjectName(QString::fromUtf8("questoesTable"));
        questoesTable->setMinimumSize(QSize(311, 0));

        gridLayout->addWidget(questoesTable, 1, 0, 1, 2);

        line = new QFrame(EditarQuestoes);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 2, 2, 1);

        scrollArea = new QScrollArea(EditarQuestoes);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 300, 547));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_8 = new QLabel(scrollAreaWidgetContents_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 6, 0, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        etNome = new QLineEdit(scrollAreaWidgetContents_2);
        etNome->setObjectName(QString::fromUtf8("etNome"));

        gridLayout_2->addWidget(etNome, 1, 1, 1, 1);

        etSaida = new QLineEdit(scrollAreaWidgetContents_2);
        etSaida->setObjectName(QString::fromUtf8("etSaida"));

        gridLayout_2->addWidget(etSaida, 5, 1, 1, 1);

        etTempo = new QLineEdit(scrollAreaWidgetContents_2);
        etTempo->setObjectName(QString::fromUtf8("etTempo"));

        gridLayout_2->addWidget(etTempo, 6, 1, 1, 1);

        etUpdate = new QLineEdit(scrollAreaWidgetContents_2);
        etUpdate->setObjectName(QString::fromUtf8("etUpdate"));

        gridLayout_2->addWidget(etUpdate, 9, 1, 1, 1);

        cbTopico = new QComboBox(scrollAreaWidgetContents_2);
        cbTopico->setObjectName(QString::fromUtf8("cbTopico"));

        gridLayout_2->addWidget(cbTopico, 7, 1, 1, 1);

        etId = new QLineEdit(scrollAreaWidgetContents_2);
        etId->setObjectName(QString::fromUtf8("etId"));

        gridLayout_2->addWidget(etId, 0, 1, 1, 1);

        label_13 = new QLabel(scrollAreaWidgetContents_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 14, 0, 1, 1);

        label_12 = new QLabel(scrollAreaWidgetContents_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 13, 0, 1, 1);

        pushButton = new QPushButton(scrollAreaWidgetContents_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 10, 0, 1, 1);

        etEnunciado = new QLineEdit(scrollAreaWidgetContents_2);
        etEnunciado->setObjectName(QString::fromUtf8("etEnunciado"));

        gridLayout_2->addWidget(etEnunciado, 3, 1, 1, 1);

        etNivel = new QLineEdit(scrollAreaWidgetContents_2);
        etNivel->setObjectName(QString::fromUtf8("etNivel"));

        gridLayout_2->addWidget(etNivel, 2, 1, 1, 1);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 9, 0, 1, 1);

        etBusca = new QLineEdit(scrollAreaWidgetContents_2);
        etBusca->setObjectName(QString::fromUtf8("etBusca"));

        gridLayout_2->addWidget(etBusca, 8, 1, 1, 1);

        label_11 = new QLabel(scrollAreaWidgetContents_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 12, 0, 1, 1);

        label_7 = new QLabel(scrollAreaWidgetContents_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 5, 0, 1, 1);

        label_6 = new QLabel(scrollAreaWidgetContents_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 4, 0, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_5 = new QLabel(scrollAreaWidgetContents_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        label_9 = new QLabel(scrollAreaWidgetContents_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 7, 0, 1, 1);

        etEntrada = new QLineEdit(scrollAreaWidgetContents_2);
        etEntrada->setObjectName(QString::fromUtf8("etEntrada"));

        gridLayout_2->addWidget(etEntrada, 4, 1, 1, 1);

        etAdiciona = new QLineEdit(scrollAreaWidgetContents_2);
        etAdiciona->setObjectName(QString::fromUtf8("etAdiciona"));

        gridLayout_2->addWidget(etAdiciona, 10, 1, 1, 1);

        pushButton_3 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_2->addWidget(pushButton_3, 8, 0, 1, 1);

        label = new QLabel(scrollAreaWidgetContents_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_14 = new QLabel(scrollAreaWidgetContents_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 15, 0, 1, 1);

        etRemovePossui = new QLineEdit(scrollAreaWidgetContents_2);
        etRemovePossui->setObjectName(QString::fromUtf8("etRemovePossui"));

        gridLayout_2->addWidget(etRemovePossui, 12, 1, 1, 1);

        etRemovePropoe = new QLineEdit(scrollAreaWidgetContents_2);
        etRemovePropoe->setObjectName(QString::fromUtf8("etRemovePropoe"));

        gridLayout_2->addWidget(etRemovePropoe, 13, 1, 1, 1);

        etRemoveResolve = new QLineEdit(scrollAreaWidgetContents_2);
        etRemoveResolve->setObjectName(QString::fromUtf8("etRemoveResolve"));

        gridLayout_2->addWidget(etRemoveResolve, 14, 1, 1, 1);

        etRemoveQuestao = new QLineEdit(scrollAreaWidgetContents_2);
        etRemoveQuestao->setObjectName(QString::fromUtf8("etRemoveQuestao"));

        gridLayout_2->addWidget(etRemoveQuestao, 15, 1, 1, 1);

        pushButton_4 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_2->addWidget(pushButton_4, 11, 0, 1, 2);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout->addWidget(scrollArea, 1, 3, 2, 1);

        label_4 = new QLabel(EditarQuestoes);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 20));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 0, 1, 2);


        retranslateUi(EditarQuestoes);
        QObject::connect(pushButton_3, SIGNAL(clicked()), EditarQuestoes, SLOT(buscar()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), EditarQuestoes, SLOT(atualizar()));
        QObject::connect(pushButton, SIGNAL(clicked()), EditarQuestoes, SLOT(adicionar()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), EditarQuestoes, SLOT(remover()));

        QMetaObject::connectSlotsByName(EditarQuestoes);
    } // setupUi

    void retranslateUi(QDialog *EditarQuestoes)
    {
        EditarQuestoes->setWindowTitle(QApplication::translate("EditarQuestoes", "Dialog", nullptr));
        label_10->setText(QApplication::translate("EditarQuestoes", "Query questoes:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = questoesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EditarQuestoes", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = questoesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EditarQuestoes", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = questoesTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("EditarQuestoes", "NomeTopico", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = questoesTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("EditarQuestoes", "Nivel", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = questoesTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("EditarQuestoes", "LimiteTempo (s)", nullptr));
        label_8->setText(QApplication::translate("EditarQuestoes", "Limite de Tempo: ", nullptr));
        label_3->setText(QApplication::translate("EditarQuestoes", "N\303\255vel:", nullptr));
        label_13->setText(QApplication::translate("EditarQuestoes", "Query Remove Resolve: ", nullptr));
        label_12->setText(QApplication::translate("EditarQuestoes", "Query Remove Propoe: ", nullptr));
        pushButton->setText(QApplication::translate("EditarQuestoes", "Adicionar Quest\303\243o", nullptr));
        pushButton_2->setText(QApplication::translate("EditarQuestoes", "Atualizar Quest\303\243o", nullptr));
        label_11->setText(QApplication::translate("EditarQuestoes", "Query Remove Possui: ", nullptr));
        label_7->setText(QApplication::translate("EditarQuestoes", "Saida:", nullptr));
        label_6->setText(QApplication::translate("EditarQuestoes", "Entrada:", nullptr));
        label_2->setText(QApplication::translate("EditarQuestoes", "Nome:", nullptr));
        label_5->setText(QApplication::translate("EditarQuestoes", "Enunciado:", nullptr));
        label_9->setText(QApplication::translate("EditarQuestoes", "Nome_Topico:", nullptr));
        pushButton_3->setText(QApplication::translate("EditarQuestoes", "Buscar Quest\303\243o", nullptr));
        label->setText(QApplication::translate("EditarQuestoes", "ID", nullptr));
        label_14->setText(QApplication::translate("EditarQuestoes", "Query Remove Questao: ", nullptr));
        pushButton_4->setText(QApplication::translate("EditarQuestoes", "Remover Quest\303\243o", nullptr));
        label_4->setText(QApplication::translate("EditarQuestoes", "Quest\303\265es ativas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditarQuestoes: public Ui_EditarQuestoes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITARQUESTOES_H
