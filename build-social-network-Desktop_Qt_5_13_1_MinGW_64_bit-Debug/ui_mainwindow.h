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
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *posts;
    QLabel *followers;
    QLabel *following;
    QLabel *name;
    QLabel *age;
    QLabel *gmail;
    QLabel *uname;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(982, 682);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 70, 70);\n"
"color: rgb(255, 255, 255);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 20, 181, 171));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 110, 91, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(490, 110, 91, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(720, 110, 91, 41));
        posts = new QLabel(centralwidget);
        posts->setObjectName(QString::fromUtf8("posts"));
        posts->setGeometry(QRect(360, 110, 91, 41));
        followers = new QLabel(centralwidget);
        followers->setObjectName(QString::fromUtf8("followers"));
        followers->setGeometry(QRect(590, 110, 91, 41));
        following = new QLabel(centralwidget);
        following->setObjectName(QString::fromUtf8("following"));
        following->setGeometry(QRect(820, 110, 91, 41));
        name = new QLabel(centralwidget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(50, 200, 91, 41));
        age = new QLabel(centralwidget);
        age->setObjectName(QString::fromUtf8("age"));
        age->setGeometry(QRect(50, 250, 91, 41));
        gmail = new QLabel(centralwidget);
        gmail->setObjectName(QString::fromUtf8("gmail"));
        gmail->setGeometry(QRect(50, 300, 91, 41));
        uname = new QLabel(centralwidget);
        uname->setObjectName(QString::fromUtf8("uname"));
        uname->setGeometry(QRect(270, 20, 421, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 982, 20));
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
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "posts:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "followers", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "following:", nullptr));
        posts->setText(QString());
        followers->setText(QString());
        following->setText(QString());
        name->setText(QString());
        age->setText(QString());
        gmail->setText(QString());
        uname->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
