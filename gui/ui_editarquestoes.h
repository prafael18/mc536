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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_EditarQuestoes
{
public:
    QGridLayout *gridLayout;
    QSpinBox *spinBox;
    QLabel *label_8;
    QTableWidget *tableWidget;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_3;
    QFrame *line;
    QPushButton *pushButton;
    QLabel *label_10;
    QLabel *label_9;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_3;
    QComboBox *comboBox;
    QLineEdit *lineEdit_6;
    QLabel *label_4;
    QLabel *label_7;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *EditarQuestoes)
    {
        if (EditarQuestoes->objectName().isEmpty())
            EditarQuestoes->setObjectName(QString::fromUtf8("EditarQuestoes"));
        EditarQuestoes->resize(690, 590);
        gridLayout = new QGridLayout(EditarQuestoes);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spinBox = new QSpinBox(EditarQuestoes);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(10);

        gridLayout->addWidget(spinBox, 3, 6, 1, 1);

        label_8 = new QLabel(EditarQuestoes);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 7, 3, 1, 2);

        tableWidget = new QTableWidget(EditarQuestoes);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem13);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setMinimumSize(QSize(311, 0));

        gridLayout->addWidget(tableWidget, 1, 0, 11, 1);

        lineEdit_5 = new QLineEdit(EditarQuestoes);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 6, 6, 1, 1);

        lineEdit_3 = new QLineEdit(EditarQuestoes);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 4, 6, 1, 1);

        line = new QFrame(EditarQuestoes);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 1, 11, 1);

        pushButton = new QPushButton(EditarQuestoes);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 11, 6, 1, 1);

        label_10 = new QLabel(EditarQuestoes);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 9, 3, 1, 2);

        label_9 = new QLabel(EditarQuestoes);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 8, 3, 1, 3);

        lineEdit_2 = new QLineEdit(EditarQuestoes);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 2, 6, 1, 1);

        comboBox_2 = new QComboBox(EditarQuestoes);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 9, 6, 1, 1);

        lineEdit_4 = new QLineEdit(EditarQuestoes);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 5, 6, 1, 1);

        label_6 = new QLabel(EditarQuestoes);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 3, 1, 2);

        label_5 = new QLabel(EditarQuestoes);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 3, 1, 2);

        label_3 = new QLabel(EditarQuestoes);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 3, 1, 1);

        comboBox = new QComboBox(EditarQuestoes);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 8, 6, 1, 1);

        lineEdit_6 = new QLineEdit(EditarQuestoes);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout->addWidget(lineEdit_6, 7, 6, 1, 1);

        label_4 = new QLabel(EditarQuestoes);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 20));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 0, 1, 7);

        label_7 = new QLabel(EditarQuestoes);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 6, 3, 1, 2);

        pushButton_2 = new QPushButton(EditarQuestoes);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 10, 6, 1, 1);

        label_2 = new QLabel(EditarQuestoes);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 3, 1, 1);

        label = new QLabel(EditarQuestoes);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 3, 1, 1);

        lineEdit = new QLineEdit(EditarQuestoes);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 6, 1, 1);


        retranslateUi(EditarQuestoes);

        QMetaObject::connectSlotsByName(EditarQuestoes);
    } // setupUi

    void retranslateUi(QDialog *EditarQuestoes)
    {
        EditarQuestoes->setWindowTitle(QApplication::translate("EditarQuestoes", "Dialog", nullptr));
        label_8->setText(QApplication::translate("EditarQuestoes", "Limite de Tempo: ", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EditarQuestoes", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EditarQuestoes", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("EditarQuestoes", "Nivel", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("EditarQuestoes", "ID_prova", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->item(0, 0);
        ___qtablewidgetitem4->setText(QApplication::translate("EditarQuestoes", "123", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(0, 1);
        ___qtablewidgetitem5->setText(QApplication::translate("EditarQuestoes", "Bla Bla Bla", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(0, 2);
        ___qtablewidgetitem6->setText(QApplication::translate("EditarQuestoes", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(0, 3);
        ___qtablewidgetitem7->setText(QApplication::translate("EditarQuestoes", "34", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(1, 0);
        ___qtablewidgetitem8->setText(QApplication::translate("EditarQuestoes", "456", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(1, 1);
        ___qtablewidgetitem9->setText(QApplication::translate("EditarQuestoes", "Alb Alb Alb", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(1, 2);
        ___qtablewidgetitem10->setText(QApplication::translate("EditarQuestoes", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(1, 3);
        ___qtablewidgetitem11->setText(QApplication::translate("EditarQuestoes", "89", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QApplication::translate("EditarQuestoes", "Adicionar Quest\303\243o", nullptr));
        label_10->setText(QApplication::translate("EditarQuestoes", "ID_prova:", nullptr));
        label_9->setText(QApplication::translate("EditarQuestoes", "Nome_Topico:", nullptr));
        label_6->setText(QApplication::translate("EditarQuestoes", "Entrada:", nullptr));
        label_5->setText(QApplication::translate("EditarQuestoes", "Enunciado:", nullptr));
        label_3->setText(QApplication::translate("EditarQuestoes", "N\303\255vel:", nullptr));
        label_4->setText(QApplication::translate("EditarQuestoes", "Tela: Atualizar ou Adicionar Quest\303\243o", nullptr));
        label_7->setText(QApplication::translate("EditarQuestoes", "Saida:", nullptr));
        pushButton_2->setText(QApplication::translate("EditarQuestoes", "Atualizar Quest\303\243o", nullptr));
        label_2->setText(QApplication::translate("EditarQuestoes", "Nome:", nullptr));
        label->setText(QApplication::translate("EditarQuestoes", "ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditarQuestoes: public Ui_EditarQuestoes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITARQUESTOES_H
