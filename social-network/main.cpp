#include <QApplication>
#include "login.h"

#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    std::string uname;
    login log(&uname);
    log.exec();
    MainWindow mw(uname);
    mw.show();

    return a.exec();
}
