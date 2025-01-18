#include <QApplication>
#include "login.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Show the login dialog
    login loginDialog;
    loginDialog.show();

    return a.exec();
}
