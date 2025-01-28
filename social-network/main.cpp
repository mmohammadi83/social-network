#include <QApplication>
#include "login.h"
#include <QDebug>
#include "profilepage.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    login log;
    log.show();
    // ایجاد و نمایش پنجره پروفایل
       ProfilePage profilePage;
       profilePage.show();

    return a.exec();
}
