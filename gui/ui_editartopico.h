/********************************************************************************
** Form generated from reading UI file 'editartopico.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITARTOPICO_H
#define UI_EDITARTOPICO_H

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

class Ui_EditarTopico
{
public:
    QGridLayout *gridLayout;
    QLineEdit *etRemoveQuestao;
    QLabel *label_7;
    QLabel *label_13;
    QFrame *line;
    QLabel *label_11;
    QLineEdit *etQuestoes;
    QFrame *line_2;
    QLabel *label;
    QLabel *label_9;
    QLabel *label_6;
    QPushButton *pushButton_3;
    QTableWidget *topicoTable;
    QLabel *ProponentesAtivos;
    QLineEdit *etAdicionarTopico;
    QLineEdit *etUpdateTopico;
    QFrame *line_3;
    QLineEdit *etTopicos;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *etBuscar;
    QPushButton *pushButton_2;
    QLineEdit *etRemoveContempla;
    QLineEdit *etEspecificidade;
    QLabel *label_2;
    QTableWidget *questoesTable;
    QPushButton *pushButton_4;
    QLineEdit *etNome;
    QLabel *label_12;
    QLineEdit *etRemoveTopico;

    void setupUi(QDialog *EditarTopico)
    {
        if (EditarTopico->objectName().isEmpty())
            EditarTopico->setObjectName(QString::fromUtf8("EditarTopico"));
        EditarTopico->resize(769, 561);
        gridLayout = new QGridLayout(EditarTopico);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        etRemoveQuestao = new QLineEdit(EditarTopico);
        etRemoveQuestao->setObjectName(QString::fromUtf8("etRemoveQuestao"));
        etRemoveQuestao->setEnabled(false);

        gridLayout->addWidget(etRemoveQuestao, 9, 4, 1, 1);

        label_7 = new QLabel(EditarTopico);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 1, 3, 1, 1);

        label_13 = new QLabel(EditarTopico);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 5, 3, 1, 1);

        line = new QFrame(EditarTopico);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 2, 17, 1);

        label_11 = new QLabel(EditarTopico);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 9, 3, 1, 1);

        etQuestoes = new QLineEdit(EditarTopico);
        etQuestoes->setObjectName(QString::fromUtf8("etQuestoes"));

        gridLayout->addWidget(etQuestoes, 16, 4, 1, 1);

        line_2 = new QFrame(EditarTopico);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 13, 3, 1, 2);

        label = new QLabel(EditarTopico);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 11, 3, 1, 1);

        label_9 = new QLabel(EditarTopico);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 7, 3, 1, 1);

        label_6 = new QLabel(EditarTopico);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 14, 3, 1, 2);

        pushButton_3 = new QPushButton(EditarTopico);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(false);

        gridLayout->addWidget(pushButton_3, 8, 3, 1, 2);

        topicoTable = new QTableWidget(EditarTopico);
        if (topicoTable->columnCount() < 2)
            topicoTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        topicoTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        topicoTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        topicoTable->setObjectName(QString::fromUtf8("topicoTable"));

        gridLayout->addWidget(topicoTable, 1, 0, 15, 2);

        ProponentesAtivos = new QLabel(EditarTopico);
        ProponentesAtivos->setObjectName(QString::fromUtf8("ProponentesAtivos"));
        ProponentesAtivos->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ProponentesAtivos, 0, 0, 1, 2);

        etAdicionarTopico = new QLineEdit(EditarTopico);
        etAdicionarTopico->setObjectName(QString::fromUtf8("etAdicionarTopico"));

        gridLayout->addWidget(etAdicionarTopico, 5, 4, 1, 1);

        etUpdateTopico = new QLineEdit(EditarTopico);
        etUpdateTopico->setObjectName(QString::fromUtf8("etUpdateTopico"));

        gridLayout->addWidget(etUpdateTopico, 7, 4, 1, 1);

        line_3 = new QFrame(EditarTopico);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 2, 3, 1, 2);

        etTopicos = new QLineEdit(EditarTopico);
        etTopicos->setObjectName(QString::fromUtf8("etTopicos"));

        gridLayout->addWidget(etTopicos, 16, 1, 1, 1);

        pushButton = new QPushButton(EditarTopico);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 6, 3, 1, 2);

        label_3 = new QLabel(EditarTopico);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 16, 3, 1, 1);

        label_4 = new QLabel(EditarTopico);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        etBuscar = new QLineEdit(EditarTopico);
        etBuscar->setObjectName(QString::fromUtf8("etBuscar"));

        gridLayout->addWidget(etBuscar, 3, 4, 1, 1);

        pushButton_2 = new QPushButton(EditarTopico);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 4, 3, 1, 2);

        etRemoveContempla = new QLineEdit(EditarTopico);
        etRemoveContempla->setObjectName(QString::fromUtf8("etRemoveContempla"));
        etRemoveContempla->setEnabled(false);

        gridLayout->addWidget(etRemoveContempla, 10, 4, 1, 1);

        etEspecificidade = new QLineEdit(EditarTopico);
        etEspecificidade->setObjectName(QString::fromUtf8("etEspecificidade"));

        gridLayout->addWidget(etEspecificidade, 1, 4, 1, 1);

        label_2 = new QLabel(EditarTopico);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 16, 0, 1, 1);

        questoesTable = new QTableWidget(EditarTopico);
        if (questoesTable->columnCount() < 3)
            questoesTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        questoesTable->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        questoesTable->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        questoesTable->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        questoesTable->setObjectName(QString::fromUtf8("questoesTable"));

        gridLayout->addWidget(questoesTable, 15, 3, 1, 2);

        pushButton_4 = new QPushButton(EditarTopico);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 3, 3, 1, 1);

        etNome = new QLineEdit(EditarTopico);
        etNome->setObjectName(QString::fromUtf8("etNome"));

        gridLayout->addWidget(etNome, 0, 4, 1, 1);

        label_12 = new QLabel(EditarTopico);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 10, 3, 1, 1);

        etRemoveTopico = new QLineEdit(EditarTopico);
        etRemoveTopico->setObjectName(QString::fromUtf8("etRemoveTopico"));
        etRemoveTopico->setEnabled(false);

        gridLayout->addWidget(etRemoveTopico, 11, 4, 1, 1);


        retranslateUi(EditarTopico);
        QObject::connect(pushButton_2, SIGNAL(clicked()), EditarTopico, SLOT(adicionar()));
        QObject::connect(pushButton, SIGNAL(clicked()), EditarTopico, SLOT(atualizar()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), EditarTopico, SLOT(remover()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), EditarTopico, SLOT(buscar()));

        QMetaObject::connectSlotsByName(EditarTopico);
    } // setupUi

    void retranslateUi(QDialog *EditarTopico)
    {
        EditarTopico->setWindowTitle(QApplication::translate("EditarTopico", "Dialog", nullptr));
        label_7->setText(QApplication::translate("EditarTopico", "Especificidade:", nullptr));
        label_13->setText(QApplication::translate("EditarTopico", "Query Topico:", nullptr));
        label_11->setText(QApplication::translate("EditarTopico", "Query Questao:", nullptr));
        label->setText(QApplication::translate("EditarTopico", "Query Topico:", nullptr));
        label_9->setText(QApplication::translate("EditarTopico", "Query Topico:", nullptr));
        label_6->setText(QApplication::translate("EditarTopico", "Quest\303\265es Propostas", nullptr));
        pushButton_3->setText(QApplication::translate("EditarTopico", "Remover", nullptr));
        QTableWidgetItem *___qtablewidgetitem = topicoTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EditarTopico", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = topicoTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EditarTopico", "Especificidade", nullptr));
        ProponentesAtivos->setText(QApplication::translate("EditarTopico", "Topicos", nullptr));
        pushButton->setText(QApplication::translate("EditarTopico", "Atualizar", nullptr));
        label_3->setText(QApplication::translate("EditarTopico", "Query Quest\303\265es:", nullptr));
        label_4->setText(QApplication::translate("EditarTopico", "Nome:", nullptr));
        pushButton_2->setText(QApplication::translate("EditarTopico", "Adicionar", nullptr));
        label_2->setText(QApplication::translate("EditarTopico", "Query Topicos:", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = questoesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("EditarTopico", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = questoesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("EditarTopico", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = questoesTable->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("EditarTopico", "Nivel", nullptr));
        pushButton_4->setText(QApplication::translate("EditarTopico", "Buscar", nullptr));
        label_12->setText(QApplication::translate("EditarTopico", "Query Contempla:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditarTopico: public Ui_EditarTopico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITARTOPICO_H
