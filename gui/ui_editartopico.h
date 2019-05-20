/********************************************************************************
** Form generated from reading UI file 'editartopico.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITARTOPICO_H
#define UI_EDITARTOPICO_H

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

class Ui_EditarTopico
{
public:
    QGridLayout *gridLayout;
    QFrame *line_3;
    QLabel *ProponentesAtivos;
    QLabel *label_7;
    QPushButton *pushButton_3;
    QLineEdit *etRemoveQuestao;
    QLabel *label_3;
    QLabel *label_13;
    QTableWidget *topicoTable;
    QLineEdit *etRemoveTopico;
    QLabel *label_6;
    QTableWidget *questoesTable;
    QLineEdit *etNome;
    QLabel *label;
    QFrame *line;
    QLineEdit *etQuestoes;
    QLineEdit *etUpdateTopico;
    QLineEdit *etAdicionarTopico;
    QLabel *label_11;
    QLineEdit *etTopicos;
    QFrame *line_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *etEspecificidade;
    QLabel *label_4;
    QLineEdit *etRemoveContempla;
    QLabel *label_2;
    QLabel *label_9;
    QLabel *label_12;
    QLineEdit *etBuscar;
    QPushButton *pushButton_4;
    QLabel *label_5;
    QLineEdit *etTotalQuestoes;

    void setupUi(QDialog *EditarTopico)
    {
        if (EditarTopico->objectName().isEmpty())
            EditarTopico->setObjectName(QStringLiteral("EditarTopico"));
        EditarTopico->resize(769, 561);
        gridLayout = new QGridLayout(EditarTopico);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        line_3 = new QFrame(EditarTopico);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 2, 3, 1, 2);

        ProponentesAtivos = new QLabel(EditarTopico);
        ProponentesAtivos->setObjectName(QStringLiteral("ProponentesAtivos"));
        ProponentesAtivos->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ProponentesAtivos, 0, 0, 1, 2);

        label_7 = new QLabel(EditarTopico);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 1, 3, 1, 1);

        pushButton_3 = new QPushButton(EditarTopico);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(false);

        gridLayout->addWidget(pushButton_3, 8, 3, 1, 2);

        etRemoveQuestao = new QLineEdit(EditarTopico);
        etRemoveQuestao->setObjectName(QStringLiteral("etRemoveQuestao"));
        etRemoveQuestao->setEnabled(false);

        gridLayout->addWidget(etRemoveQuestao, 9, 4, 1, 1);

        label_3 = new QLabel(EditarTopico);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 17, 3, 1, 1);

        label_13 = new QLabel(EditarTopico);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 5, 3, 1, 1);

        topicoTable = new QTableWidget(EditarTopico);
        if (topicoTable->columnCount() < 2)
            topicoTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        topicoTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        topicoTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        topicoTable->setObjectName(QStringLiteral("topicoTable"));

        gridLayout->addWidget(topicoTable, 1, 0, 15, 2);

        etRemoveTopico = new QLineEdit(EditarTopico);
        etRemoveTopico->setObjectName(QStringLiteral("etRemoveTopico"));
        etRemoveTopico->setEnabled(false);

        gridLayout->addWidget(etRemoveTopico, 11, 4, 1, 1);

        label_6 = new QLabel(EditarTopico);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 14, 3, 1, 2);

        questoesTable = new QTableWidget(EditarTopico);
        if (questoesTable->columnCount() < 3)
            questoesTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        questoesTable->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        questoesTable->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        questoesTable->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        questoesTable->setObjectName(QStringLiteral("questoesTable"));

        gridLayout->addWidget(questoesTable, 15, 3, 1, 2);

        etNome = new QLineEdit(EditarTopico);
        etNome->setObjectName(QStringLiteral("etNome"));

        gridLayout->addWidget(etNome, 0, 4, 1, 1);

        label = new QLabel(EditarTopico);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 11, 3, 1, 1);

        line = new QFrame(EditarTopico);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 2, 18, 1);

        etQuestoes = new QLineEdit(EditarTopico);
        etQuestoes->setObjectName(QStringLiteral("etQuestoes"));

        gridLayout->addWidget(etQuestoes, 17, 4, 1, 1);

        etUpdateTopico = new QLineEdit(EditarTopico);
        etUpdateTopico->setObjectName(QStringLiteral("etUpdateTopico"));

        gridLayout->addWidget(etUpdateTopico, 7, 4, 1, 1);

        etAdicionarTopico = new QLineEdit(EditarTopico);
        etAdicionarTopico->setObjectName(QStringLiteral("etAdicionarTopico"));

        gridLayout->addWidget(etAdicionarTopico, 5, 4, 1, 1);

        label_11 = new QLabel(EditarTopico);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 9, 3, 1, 1);

        etTopicos = new QLineEdit(EditarTopico);
        etTopicos->setObjectName(QStringLiteral("etTopicos"));

        gridLayout->addWidget(etTopicos, 17, 1, 1, 1);

        line_2 = new QFrame(EditarTopico);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 13, 3, 1, 2);

        pushButton = new QPushButton(EditarTopico);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 6, 3, 1, 2);

        pushButton_2 = new QPushButton(EditarTopico);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 4, 3, 1, 2);

        etEspecificidade = new QLineEdit(EditarTopico);
        etEspecificidade->setObjectName(QStringLiteral("etEspecificidade"));

        gridLayout->addWidget(etEspecificidade, 1, 4, 1, 1);

        label_4 = new QLabel(EditarTopico);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        etRemoveContempla = new QLineEdit(EditarTopico);
        etRemoveContempla->setObjectName(QStringLiteral("etRemoveContempla"));
        etRemoveContempla->setEnabled(false);

        gridLayout->addWidget(etRemoveContempla, 10, 4, 1, 1);

        label_2 = new QLabel(EditarTopico);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 17, 0, 1, 1);

        label_9 = new QLabel(EditarTopico);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 7, 3, 1, 1);

        label_12 = new QLabel(EditarTopico);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 10, 3, 1, 1);

        etBuscar = new QLineEdit(EditarTopico);
        etBuscar->setObjectName(QStringLiteral("etBuscar"));

        gridLayout->addWidget(etBuscar, 3, 4, 1, 1);

        pushButton_4 = new QPushButton(EditarTopico);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 3, 3, 1, 1);

        label_5 = new QLabel(EditarTopico);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 16, 3, 1, 1);

        etTotalQuestoes = new QLineEdit(EditarTopico);
        etTotalQuestoes->setObjectName(QStringLiteral("etTotalQuestoes"));

        gridLayout->addWidget(etTotalQuestoes, 16, 4, 1, 1);


        retranslateUi(EditarTopico);
        QObject::connect(pushButton_2, SIGNAL(clicked()), EditarTopico, SLOT(adicionar()));
        QObject::connect(pushButton, SIGNAL(clicked()), EditarTopico, SLOT(atualizar()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), EditarTopico, SLOT(remover()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), EditarTopico, SLOT(buscar()));

        QMetaObject::connectSlotsByName(EditarTopico);
    } // setupUi

    void retranslateUi(QDialog *EditarTopico)
    {
        EditarTopico->setWindowTitle(QApplication::translate("EditarTopico", "Dialog", Q_NULLPTR));
        ProponentesAtivos->setText(QApplication::translate("EditarTopico", "Topicos", Q_NULLPTR));
        label_7->setText(QApplication::translate("EditarTopico", "Especificidade:", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("EditarTopico", "Remover", Q_NULLPTR));
        label_3->setText(QApplication::translate("EditarTopico", "Query Quest\303\265es:", Q_NULLPTR));
        label_13->setText(QApplication::translate("EditarTopico", "Query Topico:", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = topicoTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EditarTopico", "Nome", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = topicoTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EditarTopico", "Especificidade", Q_NULLPTR));
        label_6->setText(QApplication::translate("EditarTopico", "Quest\303\265es Propostas", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = questoesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("EditarTopico", "Id", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = questoesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("EditarTopico", "Nome", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = questoesTable->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("EditarTopico", "Nivel", Q_NULLPTR));
        label->setText(QApplication::translate("EditarTopico", "Query Topico:", Q_NULLPTR));
        label_11->setText(QApplication::translate("EditarTopico", "Query Questao:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("EditarTopico", "Atualizar", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("EditarTopico", "Adicionar", Q_NULLPTR));
        label_4->setText(QApplication::translate("EditarTopico", "Nome:", Q_NULLPTR));
        label_2->setText(QApplication::translate("EditarTopico", "Query Topicos:", Q_NULLPTR));
        label_9->setText(QApplication::translate("EditarTopico", "Query Topico:", Q_NULLPTR));
        label_12->setText(QApplication::translate("EditarTopico", "Query Contempla:", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("EditarTopico", "Buscar", Q_NULLPTR));
        label_5->setText(QApplication::translate("EditarTopico", "N\303\272mero de Quest\303\265es:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditarTopico: public Ui_EditarTopico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITARTOPICO_H
