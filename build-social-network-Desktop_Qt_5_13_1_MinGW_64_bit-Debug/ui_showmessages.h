/********************************************************************************
** Form generated from reading UI file 'showmessages.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWMESSAGES_H
#define UI_SHOWMESSAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_showmessages
{
public:
    QWidget *centralwidget;
    QTextEdit *chatDisplay;
    QLineEdit *messageInput;
    QPushButton *sendButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *showmessages)
    {
        if (showmessages->objectName().isEmpty())
            showmessages->setObjectName(QString::fromUtf8("showmessages"));
        showmessages->resize(914, 699);
        centralwidget = new QWidget(showmessages);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        chatDisplay = new QTextEdit(centralwidget);
        chatDisplay->setObjectName(QString::fromUtf8("chatDisplay"));
        chatDisplay->setGeometry(QRect(80, 40, 731, 531));
        chatDisplay->setReadOnly(true);
        messageInput = new QLineEdit(centralwidget);
        messageInput->setObjectName(QString::fromUtf8("messageInput"));
        messageInput->setGeometry(QRect(80, 590, 601, 31));
        sendButton = new QPushButton(centralwidget);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(700, 590, 112, 34));
        showmessages->setCentralWidget(centralwidget);
        menubar = new QMenuBar(showmessages);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 914, 20));
        showmessages->setMenuBar(menubar);
        statusbar = new QStatusBar(showmessages);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        showmessages->setStatusBar(statusbar);

        retranslateUi(showmessages);

        QMetaObject::connectSlotsByName(showmessages);
    } // setupUi

    void retranslateUi(QMainWindow *showmessages)
    {
        showmessages->setWindowTitle(QCoreApplication::translate("showmessages", "MainWindow", nullptr));
        messageInput->setText(QString());
        sendButton->setText(QCoreApplication::translate("showmessages", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class showmessages: public Ui_showmessages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWMESSAGES_H
