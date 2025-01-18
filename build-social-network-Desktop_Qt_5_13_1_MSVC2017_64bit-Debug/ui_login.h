/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
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

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->setEnabled(true);
        login->resize(845, 557);
        login->setMinimumSize(QSize(763, 489));
        login->setMaximumSize(QSize(16777215, 16777215));
        login->setStyleSheet(QString::fromUtf8("\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.340909 rgba(0, 0, 0, 255), stop:0.511364 rgba(255, 255, 255, 255));\n"
"border-radius: 5px;\n"
"font: 10pt \"Mongolian Baiti\";\n"
"color:rgb(255,255,255);\n"
"\n"
"\n"
""));
        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(470, 80, 151, 31));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Mongolian Baiti\";\n"
"color:rgb(0, 0, 0)\n"
""));
        label_2 = new QLabel(login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(650, 80, 151, 31));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Mongolian Baiti\";\n"
"color:rgb(0, 0, 0)\n"
""));
        name = new QLineEdit(login);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(650, 120, 151, 31));
        name->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        userName = new QLineEdit(login);
        userName->setObjectName(QString::fromUtf8("userName"));
        userName->setGeometry(QRect(470, 120, 151, 31));
        userName->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        age = new QLineEdit(login);
        age->setObjectName(QString::fromUtf8("age"));
        age->setGeometry(QRect(470, 220, 151, 31));
        age->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        label_3 = new QLabel(login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(650, 180, 151, 31));
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Mongolian Baiti\";\n"
""));
        gmail = new QLineEdit(login);
        gmail->setObjectName(QString::fromUtf8("gmail"));
        gmail->setGeometry(QRect(650, 220, 151, 31));
        gmail->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        label_4 = new QLabel(login);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(470, 180, 151, 31));
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Mongolian Baiti\";\n"
""));
        label_5 = new QLabel(login);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(470, 280, 151, 31));
        label_5->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Mongolian Baiti\";\n"
""));
        password = new QLineEdit(login);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(470, 320, 151, 31));
        password->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        label_6 = new QLabel(login);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(650, 280, 151, 31));
        label_6->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Mongolian Baiti\";\n"
""));
        confirmPass = new QLineEdit(login);
        confirmPass->setObjectName(QString::fromUtf8("confirmPass"));
        confirmPass->setGeometry(QRect(650, 320, 151, 31));
        confirmPass->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        label_7 = new QLabel(login);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(560, 10, 141, 61));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font-size: 20pt;\n"
"color:rgb(0, 0, 0)"));
        signupB = new QPushButton(login);
        signupB->setObjectName(QString::fromUtf8("signupB"));
        signupB->setGeometry(QRect(590, 380, 111, 41));
        signupB->setStyleSheet(QString::fromUtf8("background-color: rgb(99, 99, 99);\n"
"color:rgb(255, 255, 255);\n"
""));
        unameLog = new QLineEdit(login);
        unameLog->setObjectName(QString::fromUtf8("unameLog"));
        unameLog->setGeometry(QRect(70, 130, 151, 31));
        unameLog->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0,0,0);\n"
""));
        label_8 = new QLabel(login);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(70, 90, 151, 31));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0);\n"
"font: 12pt \"Mongolian Baiti\";\n"
"color: rgb(255,255,255);\n"
""));
        label_9 = new QLabel(login);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(70, 190, 151, 31));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0);\n"
"font: 12pt \"Mongolian Baiti\";\n"
"color: rgb(255,255,255);\n"
""));
        passLog = new QLineEdit(login);
        passLog->setObjectName(QString::fromUtf8("passLog"));
        passLog->setGeometry(QRect(70, 230, 151, 31));
        passLog->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0,0,0);\n"
""));
        loginB = new QPushButton(login);
        loginB->setObjectName(QString::fromUtf8("loginB"));
        loginB->setGeometry(QRect(90, 390, 111, 41));
        loginB->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);\n"
"color:rgb(0, 0, 0)\n"
""));
        label_10 = new QLabel(login);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(100, 20, 131, 61));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0);\n"
"font-size: 20pt;\n"
"color: rgb(255, 255, 255)"));
        errorSignUp = new QLabel(login);
        errorSignUp->setObjectName(QString::fromUtf8("errorSignUp"));
        errorSignUp->setGeometry(QRect(520, 450, 231, 31));
        errorSignUp->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 10pt \"Arial Narrow\";\n"
"color: rgb(170, 0, 0)"));
        errorLogIn = new QLabel(login);
        errorLogIn->setObjectName(QString::fromUtf8("errorLogIn"));
        errorLogIn->setGeometry(QRect(50, 450, 241, 31));
        errorLogIn->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0);\n"
"font: 10pt \"Arial Narrow\";\n"
"color: rgb(170, 0, 0)"));
        errorconfirm = new QLabel(login);
        errorconfirm->setObjectName(QString::fromUtf8("errorconfirm"));
        errorconfirm->setGeometry(QRect(650, 350, 161, 21));
        errorconfirm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 10pt \"Arial Narrow\";\n"
"color: rgb(170, 0, 0)"));
        doneSignUp = new QLabel(login);
        doneSignUp->setObjectName(QString::fromUtf8("doneSignUp"));
        doneSignUp->setGeometry(QRect(520, 460, 231, 31));
        doneSignUp->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 10pt \"Arial Narrow\";\n"
"color: rgb(0, 255, 0)"));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("login", "user name", nullptr));
        label_2->setText(QCoreApplication::translate("login", "name", nullptr));
        label_3->setText(QCoreApplication::translate("login", "gmail", nullptr));
        label_4->setText(QCoreApplication::translate("login", "age", nullptr));
        label_5->setText(QCoreApplication::translate("login", "password", nullptr));
        label_6->setText(QCoreApplication::translate("login", "confirm", nullptr));
        label_7->setText(QCoreApplication::translate("login", "sign up", nullptr));
        signupB->setText(QCoreApplication::translate("login", "sign up", nullptr));
        label_8->setText(QCoreApplication::translate("login", "user name", nullptr));
        label_9->setText(QCoreApplication::translate("login", "password", nullptr));
        loginB->setText(QCoreApplication::translate("login", "login", nullptr));
        label_10->setText(QCoreApplication::translate("login", "log in", nullptr));
        errorSignUp->setText(QCoreApplication::translate("login", "this user already has sign up", nullptr));
        errorLogIn->setText(QCoreApplication::translate("login", "this user dosn't have account", nullptr));
        errorconfirm->setText(QCoreApplication::translate("login", "to password are not matching", nullptr));
        doneSignUp->setText(QCoreApplication::translate("login", "user added  to database", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
