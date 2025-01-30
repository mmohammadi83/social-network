/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *followers;
    QLabel *following;
    QLabel *name;
    QLabel *age;
    QLabel *gmail;
    QLabel *uname;
    QPushButton *prof;
    QListWidget *listWidget;
    QLabel *gmail_2;
    QPushButton *logOut;
    QPushButton *followingbutton;
    QPushButton *followersbutton;
    QPushButton *exit;
    QPushButton *postButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1075, 827);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 70, 70);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"font: 25 12pt \"Microsoft JhengHei UI Light\";\n"
"border-width: 3px;\n"
"border-style: solid;\n"
"border-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.769, fx:0.5, fy:0.505682, stop:0 rgba(0, 0, 0, 255), stop:0.113636 rgba(14, 8, 73, 255), stop:0.323864 rgba(28, 17, 145, 255), stop:0.539773 rgba(126, 14, 81, 255), stop:0.659091 rgba(234, 11, 11, 255), stop:0.772727 rgba(244, 70, 5, 255), stop:0.875 rgba(255, 139, 0, 255), stop:1 rgba(239, 236, 55, 255))\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        followers = new QLabel(centralwidget);
        followers->setObjectName(QString::fromUtf8("followers"));
        followers->setGeometry(QRect(430, 110, 91, 51));
        followers->setStyleSheet(QString::fromUtf8("border-width: 0px;"));
        following = new QLabel(centralwidget);
        following->setObjectName(QString::fromUtf8("following"));
        following->setGeometry(QRect(830, 110, 91, 51));
        following->setStyleSheet(QString::fromUtf8("border-width: 0px;"));
        name = new QLabel(centralwidget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(50, 200, 481, 41));
        name->setStyleSheet(QString::fromUtf8("border-width: 0px;"));
        age = new QLabel(centralwidget);
        age->setObjectName(QString::fromUtf8("age"));
        age->setGeometry(QRect(50, 250, 231, 41));
        age->setStyleSheet(QString::fromUtf8("border-width: 0px;"));
        gmail = new QLabel(centralwidget);
        gmail->setObjectName(QString::fromUtf8("gmail"));
        gmail->setGeometry(QRect(50, 300, 591, 41));
        gmail->setStyleSheet(QString::fromUtf8("border-width: 0px;"));
        uname = new QLabel(centralwidget);
        uname->setObjectName(QString::fromUtf8("uname"));
        uname->setGeometry(QRect(320, 20, 421, 61));
        uname->setStyleSheet(QString::fromUtf8("border-width: 0px;font: 18pt \"Microsoft YaHei UI\";"));
        prof = new QPushButton(centralwidget);
        prof->setObjectName(QString::fromUtf8("prof"));
        prof->setGeometry(QRect(50, 10, 181, 181));
        prof->setStyleSheet(QString::fromUtf8("border-width: 0px;"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(50, 430, 471, 321));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"font: 28pt \"Microsoft YaHei UI\";\n"
"border-width: 0px;"));
        listWidget->setMovement(QListView::Static);
        listWidget->setFlow(QListView::TopToBottom);
        listWidget->setProperty("isWrapping", QVariant(false));
        listWidget->setViewMode(QListView::ListMode);
        listWidget->setSelectionRectVisible(false);
        gmail_2 = new QLabel(centralwidget);
        gmail_2->setObjectName(QString::fromUtf8("gmail_2"));
        gmail_2->setGeometry(QRect(50, 370, 481, 41));
        gmail_2->setStyleSheet(QString::fromUtf8("border-width: 0px;"));
        logOut = new QPushButton(centralwidget);
        logOut->setObjectName(QString::fromUtf8("logOut"));
        logOut->setGeometry(QRect(820, 650, 181, 51));
        logOut->setStyleSheet(QString::fromUtf8("border-width: 0px;background-color: rgb(134, 134, 134);\n"
""));
        followingbutton = new QPushButton(centralwidget);
        followingbutton->setObjectName(QString::fromUtf8("followingbutton"));
        followingbutton->setGeometry(QRect(690, 110, 131, 51));
        followingbutton->setStyleSheet(QString::fromUtf8("border-width: 0px;"));
        followersbutton = new QPushButton(centralwidget);
        followersbutton->setObjectName(QString::fromUtf8("followersbutton"));
        followersbutton->setGeometry(QRect(290, 110, 131, 51));
        followersbutton->setStyleSheet(QString::fromUtf8("border-width: 0px;"));
        exit = new QPushButton(centralwidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(820, 580, 181, 51));
        exit->setStyleSheet(QString::fromUtf8("border-width: 0px;background-color: rgb(134, 134, 134);\n"
""));
        postButton = new QPushButton(centralwidget);
        postButton->setObjectName(QString::fromUtf8("postButton"));
        postButton->setGeometry(QRect(820, 510, 181, 51));
        postButton->setStyleSheet(QString::fromUtf8("border-width: 0px;background-color: rgb(134, 134, 134);\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1075, 29));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        followers->setText(QString());
        following->setText(QString());
        name->setText(QCoreApplication::translate("MainWindow", "name", nullptr));
        age->setText(QCoreApplication::translate("MainWindow", "age", nullptr));
        gmail->setText(QCoreApplication::translate("MainWindow", "gmail", nullptr));
        uname->setText(QCoreApplication::translate("MainWindow", "uname", nullptr));
        prof->setText(QString());
        gmail_2->setText(QCoreApplication::translate("MainWindow", "suggested for you:", nullptr));
        logOut->setText(QCoreApplication::translate("MainWindow", "log out", nullptr));
        followingbutton->setText(QCoreApplication::translate("MainWindow", "following", nullptr));
        followersbutton->setText(QCoreApplication::translate("MainWindow", "followers", nullptr));
        exit->setText(QCoreApplication::translate("MainWindow", "exit", nullptr));
        postButton->setText(QCoreApplication::translate("MainWindow", "posts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
