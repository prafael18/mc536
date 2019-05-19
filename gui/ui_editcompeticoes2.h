/********************************************************************************
** Form generated from reading UI file 'editcompeticoes2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCOMPETICOES2_H
#define UI_EDITCOMPETICOES2_H

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

class Ui_editcompeticoes
{
public:
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_11;
    QFrame *line_2;
    QLabel *label_11;
    QTableWidget *tableWidget;
    QLabel *label_12;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QFrame *line_3;
    QPushButton *pushButton;
    QTableWidget *tableWidget_2;
    QLabel *label_5;
    QLineEdit *lineEdit_13;
    QFrame *line_4;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QTableWidget *tableWidget_3;
    QFrame *line;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_3;
    QLabel *label_7;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_6;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_6;
    QPushButton *pushButton_5;
    QTableWidget *tableWidget_4;
    QLineEdit *lineEdit_10;
    QLabel *label;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_4;
    QLabel *label_2;
    QPushButton *pushButton_4;

    void setupUi(QDialog *editcompeticoes)
    {
        if (editcompeticoes->objectName().isEmpty())
            editcompeticoes->setObjectName(QString::fromUtf8("editcompeticoes"));
        editcompeticoes->resize(622, 377);
        gridLayout_2 = new QGridLayout(editcompeticoes);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEdit_11 = new QLineEdit(editcompeticoes);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));

        gridLayout_2->addWidget(lineEdit_11, 2, 1, 1, 1);

        line_2 = new QFrame(editcompeticoes);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 0, 2, 3, 1);

        label_11 = new QLabel(editcompeticoes);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_11, 0, 0, 1, 2);

        tableWidget = new QTableWidget(editcompeticoes);
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
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 1, 0, 1, 2);

        label_12 = new QLabel(editcompeticoes);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 2, 0, 1, 1);

        scrollArea = new QScrollArea(editcompeticoes);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 318, 708));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        line_3 = new QFrame(scrollAreaWidgetContents);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 11, 0, 1, 3);

        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 10, 0, 1, 2);

        tableWidget_2 = new QTableWidget(scrollAreaWidgetContents);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));

        gridLayout->addWidget(tableWidget_2, 7, 0, 1, 3);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        lineEdit_13 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));

        gridLayout->addWidget(lineEdit_13, 16, 2, 1, 1);

        line_4 = new QFrame(scrollAreaWidgetContents);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 5, 0, 1, 3);

        pushButton_3 = new QPushButton(scrollAreaWidgetContents);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 21, 0, 1, 2);

        lineEdit_8 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        gridLayout->addWidget(lineEdit_8, 15, 2, 1, 1);

        lineEdit_9 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));

        gridLayout->addWidget(lineEdit_9, 20, 2, 1, 1);

        tableWidget_3 = new QTableWidget(scrollAreaWidgetContents);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));

        gridLayout->addWidget(tableWidget_3, 13, 0, 1, 3);

        line = new QFrame(scrollAreaWidgetContents);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 17, 0, 1, 3);

        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 14, 0, 1, 2);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 20, 0, 1, 2);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 18, 0, 1, 3);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        lineEdit_12 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));

        gridLayout->addWidget(lineEdit_12, 1, 1, 1, 2);

        lineEdit = new QLineEdit(scrollAreaWidgetContents);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 2);

        lineEdit_6 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout->addWidget(lineEdit_6, 10, 2, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 8, 0, 1, 2);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        pushButton_5 = new QPushButton(scrollAreaWidgetContents);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 16, 0, 1, 2);

        tableWidget_4 = new QTableWidget(scrollAreaWidgetContents);
        tableWidget_4->setObjectName(QString::fromUtf8("tableWidget_4"));

        gridLayout->addWidget(tableWidget_4, 19, 0, 1, 3);

        lineEdit_10 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));

        gridLayout->addWidget(lineEdit_10, 21, 2, 1, 1);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 6, 0, 1, 3);

        lineEdit_7 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        gridLayout->addWidget(lineEdit_7, 14, 2, 1, 1);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 15, 0, 1, 2);

        lineEdit_2 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 2, 1, 1, 2);

        lineEdit_3 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 3, 1, 1, 2);

        lineEdit_5 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 8, 2, 1, 1);

        lineEdit_4 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 4, 1, 1, 2);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 12, 0, 1, 3);

        pushButton_4 = new QPushButton(scrollAreaWidgetContents);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 3, 3, 1);


        retranslateUi(editcompeticoes);

        QMetaObject::connectSlotsByName(editcompeticoes);
    } // setupUi

    void retranslateUi(QDialog *editcompeticoes)
    {
        editcompeticoes->setWindowTitle(QApplication::translate("editcompeticoes", "Dialog", nullptr));
        label_11->setText(QApplication::translate("editcompeticoes", "Competi\303\247\303\265es Ativas", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("editcompeticoes", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("editcompeticoes", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("editcompeticoes", "Data", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("editcompeticoes", "Local", nullptr));
        label_12->setText(QApplication::translate("editcompeticoes", "Query Competi\303\247\303\265es:", nullptr));
        pushButton->setText(QApplication::translate("editcompeticoes", "Novo Topico", nullptr));
        label_5->setText(QApplication::translate("editcompeticoes", "Nome:", nullptr));
        pushButton_3->setText(QApplication::translate("editcompeticoes", "Novo Candidato", nullptr));
        label_9->setText(QApplication::translate("editcompeticoes", "Query fases:", nullptr));
        label_10->setText(QApplication::translate("editcompeticoes", "Query Candidatos:", nullptr));
        label_3->setText(QApplication::translate("editcompeticoes", "Candidatos", nullptr));
        label_7->setText(QApplication::translate("editcompeticoes", "Local:", nullptr));
        label_4->setText(QApplication::translate("editcompeticoes", "Id:", nullptr));
        label_8->setText(QApplication::translate("editcompeticoes", "Query topicos:", nullptr));
        label_6->setText(QApplication::translate("editcompeticoes", "Data:", nullptr));
        pushButton_5->setText(QApplication::translate("editcompeticoes", "Montar Prova", nullptr));
        label->setText(QApplication::translate("editcompeticoes", "Topicos", nullptr));
        pushButton_2->setText(QApplication::translate("editcompeticoes", "Nova Fase", nullptr));
        label_2->setText(QApplication::translate("editcompeticoes", "Fases", nullptr));
        pushButton_4->setText(QApplication::translate("editcompeticoes", "Buscar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editcompeticoes: public Ui_editcompeticoes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCOMPETICOES2_H
