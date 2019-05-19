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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QPushButton *btCandidato;
    QSpacerItem *verticalSpacer;
    QPushButton *btProponente;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btCurador;
    QSpacerItem *verticalSpacer_3;
    QPushButton *btQuestao;
    QSpacerItem *verticalSpacer_4;
    QPushButton *btTopico;
    QSpacerItem *verticalSpacer_5;
    QPushButton *btCompeticao;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_6;
    QLineEdit *etPassword;
    QLineEdit *etHostName;
    QLineEdit *etUserName;
    QLineEdit *etDbName;
    QLabel *label_3;
    QPushButton *btConnect;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *labelStatus;
    QFrame *line;
    QFrame *line_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(366, 493);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btCandidato = new QPushButton(centralWidget);
        btCandidato->setObjectName(QString::fromUtf8("btCandidato"));
        btCandidato->setEnabled(false);

        verticalLayout->addWidget(btCandidato);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btProponente = new QPushButton(centralWidget);
        btProponente->setObjectName(QString::fromUtf8("btProponente"));
        btProponente->setEnabled(false);

        verticalLayout->addWidget(btProponente);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        btCurador = new QPushButton(centralWidget);
        btCurador->setObjectName(QString::fromUtf8("btCurador"));
        btCurador->setEnabled(false);

        verticalLayout->addWidget(btCurador);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        btQuestao = new QPushButton(centralWidget);
        btQuestao->setObjectName(QString::fromUtf8("btQuestao"));
        btQuestao->setEnabled(false);

        verticalLayout->addWidget(btQuestao);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        btTopico = new QPushButton(centralWidget);
        btTopico->setObjectName(QString::fromUtf8("btTopico"));
        btTopico->setEnabled(false);

        verticalLayout->addWidget(btTopico);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        btCompeticao = new QPushButton(centralWidget);
        btCompeticao->setObjectName(QString::fromUtf8("btCompeticao"));
        btCompeticao->setEnabled(false);

        verticalLayout->addWidget(btCompeticao);


        gridLayout->addLayout(verticalLayout, 9, 0, 1, 2);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 4, 0, 1, 1);

        etPassword = new QLineEdit(centralWidget);
        etPassword->setObjectName(QString::fromUtf8("etPassword"));

        gridLayout->addWidget(etPassword, 5, 1, 1, 1);

        etHostName = new QLineEdit(centralWidget);
        etHostName->setObjectName(QString::fromUtf8("etHostName"));

        gridLayout->addWidget(etHostName, 2, 1, 1, 1);

        etUserName = new QLineEdit(centralWidget);
        etUserName->setObjectName(QString::fromUtf8("etUserName"));

        gridLayout->addWidget(etUserName, 3, 1, 1, 1);

        etDbName = new QLineEdit(centralWidget);
        etDbName->setObjectName(QString::fromUtf8("etDbName"));

        gridLayout->addWidget(etDbName, 6, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        btConnect = new QPushButton(centralWidget);
        btConnect->setObjectName(QString::fromUtf8("btConnect"));

        gridLayout->addWidget(btConnect, 7, 1, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        labelStatus = new QLabel(centralWidget);
        labelStatus->setObjectName(QString::fromUtf8("labelStatus"));

        gridLayout->addWidget(labelStatus, 7, 0, 1, 1);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 8, 0, 1, 2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 366, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(btCandidato, SIGNAL(clicked()), MainWindow, SLOT(editCandidato()));
        QObject::connect(btQuestao, SIGNAL(clicked()), MainWindow, SLOT(editQuestao()));
        QObject::connect(btCompeticao, SIGNAL(clicked()), MainWindow, SLOT(editCompeticao()));
        QObject::connect(btProponente, SIGNAL(clicked()), MainWindow, SLOT(editProponente()));
        QObject::connect(btCurador, SIGNAL(clicked()), MainWindow, SLOT(editCurador()));
        QObject::connect(btTopico, SIGNAL(clicked()), MainWindow, SLOT(editTopico()));
        QObject::connect(btConnect, SIGNAL(clicked()), MainWindow, SLOT(connect()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Competi\303\247\303\265es Acad\303\252micas", nullptr));
        btCandidato->setText(QApplication::translate("MainWindow", "Candidato", nullptr));
        btProponente->setText(QApplication::translate("MainWindow", "Proponente", nullptr));
        btCurador->setText(QApplication::translate("MainWindow", "Curador", nullptr));
        btQuestao->setText(QApplication::translate("MainWindow", "Quest\303\243o", nullptr));
        btTopico->setText(QApplication::translate("MainWindow", "T\303\263pico", nullptr));
        btCompeticao->setText(QApplication::translate("MainWindow", "Competi\303\247\303\243o Acad\303\252mica", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Data Base Name:", nullptr));
        etPassword->setText(QApplication::translate("MainWindow", "password", nullptr));
        etHostName->setText(QApplication::translate("MainWindow", "tcp://localhost:3306", nullptr));
        etUserName->setText(QApplication::translate("MainWindow", "root", nullptr));
        etDbName->setText(QApplication::translate("MainWindow", "uni_competicoes", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "User Name:", nullptr));
        btConnect->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Password:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Host Name:", nullptr));
        labelStatus->setText(QApplication::translate("MainWindow", "Status: -", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
