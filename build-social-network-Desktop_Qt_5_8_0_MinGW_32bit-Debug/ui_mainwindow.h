/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(990, 721);
        MainWindow->setStyleSheet(QLatin1String("background-color: rgb(70, 70, 70);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"font: 25 12pt \"Microsoft JhengHei UI Light\";\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 20, 181, 171));
        pushButton->setStyleSheet(QLatin1String("border-radius: 85px;\n"
"background-color: rgb(255, 255, 255);\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 110, 91, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(490, 110, 91, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(720, 110, 91, 41));
        posts = new QLabel(centralwidget);
        posts->setObjectName(QStringLiteral("posts"));
        posts->setGeometry(QRect(340, 110, 91, 41));
        followers = new QLabel(centralwidget);
        followers->setObjectName(QStringLiteral("followers"));
        followers->setGeometry(QRect(590, 110, 91, 41));
        following = new QLabel(centralwidget);
        following->setObjectName(QStringLiteral("following"));
        following->setGeometry(QRect(820, 110, 91, 41));
        name = new QLabel(centralwidget);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(50, 200, 201, 41));
        age = new QLabel(centralwidget);
        age->setObjectName(QStringLiteral("age"));
        age->setGeometry(QRect(50, 250, 191, 41));
        gmail = new QLabel(centralwidget);
        gmail->setObjectName(QStringLiteral("gmail"));
        gmail->setGeometry(QRect(50, 300, 271, 41));
        uname = new QLabel(centralwidget);
        uname->setObjectName(QStringLiteral("uname"));
        uname->setGeometry(QRect(270, 20, 421, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 982, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QString());
        label->setText(QApplication::translate("MainWindow", "posts:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "followers:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "following:", Q_NULLPTR));
        posts->setText(QString());
        followers->setText(QString());
        following->setText(QString());
        name->setText(QApplication::translate("MainWindow", "name", Q_NULLPTR));
        age->setText(QApplication::translate("MainWindow", "age", Q_NULLPTR));
        gmail->setText(QApplication::translate("MainWindow", "gmail", Q_NULLPTR));
        uname->setText(QApplication::translate("MainWindow", "uname", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
