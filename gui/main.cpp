#include "editarcompeticoes.h"
#include "mainwindow.h"
#include <QApplication>
#include <QStyleFactory>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    EditarCompeticoes w;
    w.show();

//    MainWindow w;
//    w.show();


    return a.exec();
}
