#include "editarcompeticoes.h"
#include "editarcurador.h"
#include "editarproponente.h"
#include "editartopico.h"
#include "mainwindow.h"
#include <QApplication>
#include <QStyleFactory>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}
