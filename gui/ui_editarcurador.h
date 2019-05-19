/********************************************************************************
** Form generated from reading UI file 'editarcurador.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITARCURADOR_H
#define UI_EDITARCURADOR_H

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

class Ui_EditarCurador
{
public:
    QGridLayout *gridLayout;
    QLineEdit *etUpdateCurador;
    QLineEdit *etBuscar;
    QFrame *line_3;
    QLabel *label_5;
    QLabel *label_11;
    QLineEdit *etCurador;
    QLabel *label_2;
    QTableWidget *curadoresTable;
    QLineEdit *etRemoveMonta;
    QLabel *label_12;
    QLineEdit *etAdicionarCurador;
    QLineEdit *etUniversidade;
    QLabel *label_4;
    QLineEdit *etUpdatePessoa;
    QLabel *label_9;
    QLabel *label_8;
    QLineEdit *etNome;
    QPushButton *pushButton;
    QLabel *label_7;
    QTableWidget *provasTable;
    QPushButton *pushButton_4;
    QFrame *line_2;
    QLabel *label_10;
    QFrame *line;
    QLineEdit *etConfiabilidade;
    QLabel *label;
    QLineEdit *etProvas;
    QLineEdit *etCpf;
    QLabel *label_3;
    QLineEdit *etRemoveCurador;
    QLabel *label_6;
    QPushButton *pushButton_3;
    QLineEdit *etAdicionarPessoa;
    QPushButton *pushButton_2;
    QLabel *label_13;
    QLabel *label_14;

    void setupUi(QDialog *EditarCurador)
    {
        if (EditarCurador->objectName().isEmpty())
            EditarCurador->setObjectName(QString::fromUtf8("EditarCurador"));
        EditarCurador->resize(730, 594);
        gridLayout = new QGridLayout(EditarCurador);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        etUpdateCurador = new QLineEdit(EditarCurador);
        etUpdateCurador->setObjectName(QString::fromUtf8("etUpdateCurador"));

        gridLayout->addWidget(etUpdateCurador, 11, 5, 1, 1);

        etBuscar = new QLineEdit(EditarCurador);
        etBuscar->setObjectName(QString::fromUtf8("etBuscar"));

        gridLayout->addWidget(etBuscar, 5, 5, 1, 1);

        line_3 = new QFrame(EditarCurador);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 4, 3, 1, 3);

        label_5 = new QLabel(EditarCurador);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 3, 1, 1);

        label_11 = new QLabel(EditarCurador);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 13, 3, 1, 1);

        etCurador = new QLineEdit(EditarCurador);
        etCurador->setObjectName(QString::fromUtf8("etCurador"));

        gridLayout->addWidget(etCurador, 18, 1, 1, 1);

        label_2 = new QLabel(EditarCurador);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 18, 0, 1, 1);

        curadoresTable = new QTableWidget(EditarCurador);
        if (curadoresTable->columnCount() < 4)
            curadoresTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        curadoresTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        curadoresTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        curadoresTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        curadoresTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        curadoresTable->setObjectName(QString::fromUtf8("curadoresTable"));

        gridLayout->addWidget(curadoresTable, 1, 0, 17, 2);

        etRemoveMonta = new QLineEdit(EditarCurador);
        etRemoveMonta->setObjectName(QString::fromUtf8("etRemoveMonta"));

        gridLayout->addWidget(etRemoveMonta, 13, 5, 1, 1);

        label_12 = new QLabel(EditarCurador);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 14, 3, 1, 1);

        etAdicionarCurador = new QLineEdit(EditarCurador);
        etAdicionarCurador->setObjectName(QString::fromUtf8("etAdicionarCurador"));

        gridLayout->addWidget(etAdicionarCurador, 8, 5, 1, 1);

        etUniversidade = new QLineEdit(EditarCurador);
        etUniversidade->setObjectName(QString::fromUtf8("etUniversidade"));

        gridLayout->addWidget(etUniversidade, 2, 5, 1, 1);

        label_4 = new QLabel(EditarCurador);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        etUpdatePessoa = new QLineEdit(EditarCurador);
        etUpdatePessoa->setObjectName(QString::fromUtf8("etUpdatePessoa"));

        gridLayout->addWidget(etUpdatePessoa, 10, 5, 1, 1);

        label_9 = new QLabel(EditarCurador);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 10, 3, 1, 1);

        label_8 = new QLabel(EditarCurador);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 3, 3, 1, 1);

        etNome = new QLineEdit(EditarCurador);
        etNome->setObjectName(QString::fromUtf8("etNome"));

        gridLayout->addWidget(etNome, 1, 5, 1, 1);

        pushButton = new QPushButton(EditarCurador);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 9, 3, 1, 3);

        label_7 = new QLabel(EditarCurador);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 1, 3, 1, 1);

        provasTable = new QTableWidget(EditarCurador);
        if (provasTable->columnCount() < 2)
            provasTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        provasTable->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        provasTable->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        provasTable->setObjectName(QString::fromUtf8("provasTable"));

        gridLayout->addWidget(provasTable, 17, 3, 1, 3);

        pushButton_4 = new QPushButton(EditarCurador);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 5, 3, 1, 2);

        line_2 = new QFrame(EditarCurador);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 15, 3, 1, 3);

        label_10 = new QLabel(EditarCurador);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 11, 3, 1, 1);

        line = new QFrame(EditarCurador);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 2, 19, 1);

        etConfiabilidade = new QLineEdit(EditarCurador);
        etConfiabilidade->setObjectName(QString::fromUtf8("etConfiabilidade"));

        gridLayout->addWidget(etConfiabilidade, 3, 5, 1, 1);

        label = new QLabel(EditarCurador);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        etProvas = new QLineEdit(EditarCurador);
        etProvas->setObjectName(QString::fromUtf8("etProvas"));

        gridLayout->addWidget(etProvas, 18, 4, 1, 2);

        etCpf = new QLineEdit(EditarCurador);
        etCpf->setObjectName(QString::fromUtf8("etCpf"));

        gridLayout->addWidget(etCpf, 0, 5, 1, 1);

        label_3 = new QLabel(EditarCurador);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 18, 3, 1, 1);

        etRemoveCurador = new QLineEdit(EditarCurador);
        etRemoveCurador->setObjectName(QString::fromUtf8("etRemoveCurador"));

        gridLayout->addWidget(etRemoveCurador, 14, 5, 1, 1);

        label_6 = new QLabel(EditarCurador);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 16, 3, 1, 3);

        pushButton_3 = new QPushButton(EditarCurador);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 12, 3, 1, 3);

        etAdicionarPessoa = new QLineEdit(EditarCurador);
        etAdicionarPessoa->setObjectName(QString::fromUtf8("etAdicionarPessoa"));

        gridLayout->addWidget(etAdicionarPessoa, 7, 5, 1, 1);

        pushButton_2 = new QPushButton(EditarCurador);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 6, 3, 1, 3);

        label_13 = new QLabel(EditarCurador);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 7, 3, 1, 1);

        label_14 = new QLabel(EditarCurador);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 8, 3, 1, 1);


        retranslateUi(EditarCurador);
        QObject::connect(pushButton_4, SIGNAL(clicked()), EditarCurador, SLOT(buscar()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), EditarCurador, SLOT(adicionar()));
        QObject::connect(pushButton, SIGNAL(clicked()), EditarCurador, SLOT(atualizar()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), EditarCurador, SLOT(remover()));

        QMetaObject::connectSlotsByName(EditarCurador);
    } // setupUi

    void retranslateUi(QDialog *EditarCurador)
    {
        EditarCurador->setWindowTitle(QApplication::translate("EditarCurador", "Dialog", nullptr));
        label_5->setText(QApplication::translate("EditarCurador", "Universidade:", nullptr));
        label_11->setText(QApplication::translate("EditarCurador", "Query Monta:", nullptr));
        label_2->setText(QApplication::translate("EditarCurador", "Query Curadores:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = curadoresTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EditarCurador", "Cpf", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = curadoresTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EditarCurador", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = curadoresTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("EditarCurador", "Universidade", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = curadoresTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("EditarCurador", "Confiabilidade", nullptr));
        label_12->setText(QApplication::translate("EditarCurador", "Query Curador:", nullptr));
        label_4->setText(QApplication::translate("EditarCurador", "Cpf:", nullptr));
        label_9->setText(QApplication::translate("EditarCurador", "Query Pessoa:", nullptr));
        label_8->setText(QApplication::translate("EditarCurador", "Confiabilidade:", nullptr));
        pushButton->setText(QApplication::translate("EditarCurador", "Atualizar", nullptr));
        label_7->setText(QApplication::translate("EditarCurador", "Nome:", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = provasTable->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("EditarCurador", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = provasTable->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("EditarCurador", "Data", nullptr));
        pushButton_4->setText(QApplication::translate("EditarCurador", "Buscar", nullptr));
        label_10->setText(QApplication::translate("EditarCurador", "Query Curador:", nullptr));
        label->setText(QApplication::translate("EditarCurador", "Curadores", nullptr));
        label_3->setText(QApplication::translate("EditarCurador", "Query Provas:", nullptr));
        label_6->setText(QApplication::translate("EditarCurador", "Provas montadas", nullptr));
        pushButton_3->setText(QApplication::translate("EditarCurador", "Remover", nullptr));
        pushButton_2->setText(QApplication::translate("EditarCurador", "Adicionar", nullptr));
        label_13->setText(QApplication::translate("EditarCurador", "Query Pessoa:", nullptr));
        label_14->setText(QApplication::translate("EditarCurador", "Query Curador:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditarCurador: public Ui_EditarCurador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITARCURADOR_H
