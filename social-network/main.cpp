#include "mainwindow.h"
#include "login.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    login log;
    log.show();


    return a.exec();
}
