/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_15;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_14;
    QPushButton *pushButton_13;
    QPushButton *pushButton_12;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_16;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_11;
    QPushButton *pushButton_4;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(308, 460);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_15 = new QPushButton(tab);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));

        gridLayout_2->addWidget(pushButton_15, 9, 0, 1, 1);

        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_2->addWidget(pushButton_5, 6, 0, 1, 1);

        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 3, 0, 1, 1);

        pushButton_8 = new QPushButton(tab);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout_2->addWidget(pushButton_8, 7, 0, 1, 1);

        pushButton_14 = new QPushButton(tab);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));

        gridLayout_2->addWidget(pushButton_14, 8, 0, 1, 1);

        pushButton_13 = new QPushButton(tab);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        gridLayout_2->addWidget(pushButton_13, 2, 0, 1, 1);

        pushButton_12 = new QPushButton(tab);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        gridLayout_2->addWidget(pushButton_12, 1, 0, 1, 1);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_2->addWidget(pushButton_3, 4, 0, 1, 1);

        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout_2->addWidget(pushButton_6, 5, 0, 1, 1);

        pushButton_16 = new QPushButton(tab);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));

        gridLayout_2->addWidget(pushButton_16, 10, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_7 = new QPushButton(tab_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout_3->addWidget(pushButton_7, 1, 0, 1, 1);

        pushButton_11 = new QPushButton(tab_2);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        gridLayout_3->addWidget(pushButton_11, 4, 0, 1, 1);

        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_3->addWidget(pushButton_4, 0, 0, 1, 1);

        pushButton_10 = new QPushButton(tab_2);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout_3->addWidget(pushButton_10, 3, 0, 1, 1);

        pushButton_9 = new QPushButton(tab_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout_3->addWidget(pushButton_9, 2, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 308, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(editCandidato()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(editQuestao()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_15->setText(QApplication::translate("MainWindow", "Participa de Prova", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "Competi\303\247\303\243o Acad\303\252mica", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Quest\303\243o", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "Resolve Quest\303\243o", nullptr));
        pushButton_14->setText(QApplication::translate("MainWindow", "Prop\303\265e Quest\303\243o", nullptr));
        pushButton_13->setText(QApplication::translate("MainWindow", "Proponente", nullptr));
        pushButton_12->setText(QApplication::translate("MainWindow", "Curador", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Candidato", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Prova", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "T\303\263pico", nullptr));
        pushButton_16->setText(QApplication::translate("MainWindow", "Monta Prova", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Adicionar / Editar", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "Listar quest\303\265es por t\303\263pico", nullptr));
        pushButton_11->setText(QApplication::translate("MainWindow", "Listar candidatos por competi\303\247\303\243o", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Listar Competi\303\247\303\265es", nullptr));
        pushButton_10->setText(QApplication::translate("MainWindow", "Listar hist\303\263rico por Candidato", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "Listar quest\303\265es por Proponente", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Consultas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
