/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *name;
    QLineEdit *userName;
    QLineEdit *age;
    QLabel *label_3;
    QLineEdit *gmail;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *password;
    QLabel *label_6;
    QLineEdit *confirmPass;
    QLabel *label_7;
    QPushButton *signupB;
    QLineEdit *unameLog;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *passLog;
    QPushButton *loginB;
    QLabel *label_10;
    QLabel *errorSignUp;
    QLabel *errorLogIn;
    QLabel *errorconfirm;
    QLabel *doneSignUp;
    QLabel *errorServer;
    QLabel *passIncorrect;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->setEnabled(true);
        login->resize(845, 557);
        login->setMinimumSize(QSize(763, 489));
        login->setMaximumSize(QSize(16777215, 16777215));
        login->setStyleSheet(QLatin1String("\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.340909 rgba(0, 0, 0, 255), stop:0.511364 rgba(255, 255, 255, 255));\n"
"\n"
"font: 10pt \"Mongolian Baiti\";\n"
"color:rgb(255,255,255);\n"
"border-radius: 10px;\n"
"\n"
"\n"
"\n"
""));
        label = new QLabel(login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(470, 80, 151, 31));
        label->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Mongolian Baiti\";\n"
"color:rgb(0, 0, 0)\n"
""));
        label_2 = new QLabel(login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(650, 80, 151, 31));
        label_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Mongolian Baiti\";\n"
"color:rgb(0, 0, 0)\n"
""));
        name = new QLineEdit(login);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(640, 120, 181, 41));
        name->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        userName = new QLineEdit(login);
        userName->setObjectName(QStringLiteral("userName"));
        userName->setGeometry(QRect(440, 120, 181, 41));
        userName->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        age = new QLineEdit(login);
        age->setObjectName(QStringLiteral("age"));
        age->setGeometry(QRect(440, 220, 181, 41));
        age->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        label_3 = new QLabel(login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(650, 180, 151, 31));
        label_3->setStyleSheet(QLatin1String("color:rgb(0, 0, 0);background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Mongolian Baiti\";\n"
""));
        gmail = new QLineEdit(login);
        gmail->setObjectName(QStringLiteral("gmail"));
        gmail->setGeometry(QRect(640, 220, 181, 41));
        gmail->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        label_4 = new QLabel(login);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(470, 180, 151, 31));
        label_4->setStyleSheet(QLatin1String("color:rgb(0, 0, 0);background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Mongolian Baiti\";\n"
""));
        label_5 = new QLabel(login);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(470, 280, 151, 31));
        label_5->setStyleSheet(QLatin1String("color:rgb(0, 0, 0);background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Mongolian Baiti\";\n"
""));
        password = new QLineEdit(login);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(440, 320, 181, 41));
        password->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        label_6 = new QLabel(login);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(650, 280, 151, 31));
        label_6->setStyleSheet(QLatin1String("color:rgb(0, 0, 0);background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Mongolian Baiti\";\n"
""));
        confirmPass = new QLineEdit(login);
        confirmPass->setObjectName(QStringLiteral("confirmPass"));
        confirmPass->setGeometry(QRect(640, 320, 181, 41));
        confirmPass->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        label_7 = new QLabel(login);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(560, 10, 141, 61));
        label_7->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font-size: 20pt;\n"
"color:rgb(0, 0, 0)"));
        signupB = new QPushButton(login);
        signupB->setObjectName(QStringLiteral("signupB"));
        signupB->setGeometry(QRect(580, 430, 111, 41));
        signupB->setStyleSheet(QLatin1String("background-color: rgb(99, 99, 99);\n"
"color:rgb(255, 255, 255);\n"
""));
        unameLog = new QLineEdit(login);
        unameLog->setObjectName(QStringLiteral("unameLog"));
        unameLog->setGeometry(QRect(30, 130, 271, 41));
        unameLog->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0,0,0);\n"
""));
        label_8 = new QLabel(login);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(70, 90, 151, 31));
        label_8->setStyleSheet(QLatin1String("background-color: rgb(0,0,0);\n"
"font: 12pt \"Mongolian Baiti\";\n"
"color: rgb(255,255,255);\n"
""));
        label_9 = new QLabel(login);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(70, 190, 151, 31));
        label_9->setStyleSheet(QLatin1String("background-color: rgb(0,0,0);\n"
"font: 12pt \"Mongolian Baiti\";\n"
"color: rgb(255,255,255);\n"
""));
        passLog = new QLineEdit(login);
        passLog->setObjectName(QStringLiteral("passLog"));
        passLog->setGeometry(QRect(30, 230, 271, 41));
        passLog->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0,0,0);\n"
""));
        loginB = new QPushButton(login);
        loginB->setObjectName(QStringLiteral("loginB"));
        loginB->setGeometry(QRect(80, 430, 111, 41));
        loginB->setStyleSheet(QLatin1String("background-color: rgb(191, 191, 191);\n"
"color:rgb(0, 0, 0)\n"
""));
        label_10 = new QLabel(login);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(100, 20, 131, 61));
        label_10->setStyleSheet(QLatin1String("background-color: rgb(0,0,0);\n"
"font-size: 20pt;\n"
"color: rgb(255, 255, 255)"));
        errorSignUp = new QLabel(login);
        errorSignUp->setObjectName(QStringLiteral("errorSignUp"));
        errorSignUp->setGeometry(QRect(520, 500, 231, 31));
        errorSignUp->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 10pt \"Arial Narrow\";\n"
"color: rgb(170, 0, 0)"));
        errorLogIn = new QLabel(login);
        errorLogIn->setObjectName(QStringLiteral("errorLogIn"));
        errorLogIn->setGeometry(QRect(60, 310, 241, 31));
        errorLogIn->setStyleSheet(QLatin1String("background-color: rgb(0,0,0);\n"
"font: 10pt \"Arial Narrow\";\n"
"color: rgb(170, 0, 0)"));
        errorconfirm = new QLabel(login);
        errorconfirm->setObjectName(QStringLiteral("errorconfirm"));
        errorconfirm->setGeometry(QRect(650, 370, 161, 21));
        errorconfirm->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 10pt \"Arial Narrow\";\n"
"color: rgb(170, 0, 0)"));
        doneSignUp = new QLabel(login);
        doneSignUp->setObjectName(QStringLiteral("doneSignUp"));
        doneSignUp->setGeometry(QRect(520, 500, 231, 31));
        doneSignUp->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 10pt \"Arial Narrow\";\n"
"color: rgb(0, 255, 0)"));
        errorServer = new QLabel(login);
        errorServer->setObjectName(QStringLiteral("errorServer"));
        errorServer->setGeometry(QRect(60, 330, 241, 31));
        errorServer->setStyleSheet(QLatin1String("background-color: rgb(0,0,0);\n"
"font: 10pt \"Arial Narrow\";\n"
"color: rgb(170, 0, 0)"));
        passIncorrect = new QLabel(login);
        passIncorrect->setObjectName(QStringLiteral("passIncorrect"));
        passIncorrect->setGeometry(QRect(60, 350, 241, 31));
        passIncorrect->setStyleSheet(QLatin1String("background-color: rgb(0,0,0);\n"
"font: 10pt \"Arial Narrow\";\n"
"color: rgb(170, 0, 0)"));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("login", "user name", Q_NULLPTR));
        label_2->setText(QApplication::translate("login", "name", Q_NULLPTR));
        label_3->setText(QApplication::translate("login", "gmail", Q_NULLPTR));
        label_4->setText(QApplication::translate("login", "age", Q_NULLPTR));
        label_5->setText(QApplication::translate("login", "password", Q_NULLPTR));
        label_6->setText(QApplication::translate("login", "confirm", Q_NULLPTR));
        label_7->setText(QApplication::translate("login", "sign up", Q_NULLPTR));
        signupB->setText(QApplication::translate("login", "sign up", Q_NULLPTR));
        label_8->setText(QApplication::translate("login", "user name", Q_NULLPTR));
        label_9->setText(QApplication::translate("login", "password", Q_NULLPTR));
        loginB->setText(QApplication::translate("login", "login", Q_NULLPTR));
        label_10->setText(QApplication::translate("login", "log in", Q_NULLPTR));
        errorSignUp->setText(QApplication::translate("login", "this user already has sign up", Q_NULLPTR));
        errorLogIn->setText(QApplication::translate("login", "this user dosn't have account", Q_NULLPTR));
        errorconfirm->setText(QApplication::translate("login", "to password are not matching", Q_NULLPTR));
        doneSignUp->setText(QApplication::translate("login", "user added  to database", Q_NULLPTR));
        errorServer->setText(QApplication::translate("login", "error from database", Q_NULLPTR));
        passIncorrect->setText(QApplication::translate("login", "password incorrect", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
