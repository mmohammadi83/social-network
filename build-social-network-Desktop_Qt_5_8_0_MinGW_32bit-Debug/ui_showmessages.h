/********************************************************************************
** Form generated from reading UI file 'showmessages.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWMESSAGES_H
#define UI_SHOWMESSAGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            showmessages->setObjectName(QStringLiteral("showmessages"));
        showmessages->resize(914, 699);
        centralwidget = new QWidget(showmessages);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        chatDisplay = new QTextEdit(centralwidget);
        chatDisplay->setObjectName(QStringLiteral("chatDisplay"));
        chatDisplay->setGeometry(QRect(80, 40, 731, 531));
        chatDisplay->setReadOnly(true);
        messageInput = new QLineEdit(centralwidget);
        messageInput->setObjectName(QStringLiteral("messageInput"));
        messageInput->setGeometry(QRect(80, 590, 601, 31));
        sendButton = new QPushButton(centralwidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(700, 590, 112, 34));
        showmessages->setCentralWidget(centralwidget);
        menubar = new QMenuBar(showmessages);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 914, 20));
        showmessages->setMenuBar(menubar);
        statusbar = new QStatusBar(showmessages);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        showmessages->setStatusBar(statusbar);

        retranslateUi(showmessages);

        QMetaObject::connectSlotsByName(showmessages);
    } // setupUi

    void retranslateUi(QMainWindow *showmessages)
    {
        showmessages->setWindowTitle(QApplication::translate("showmessages", "MainWindow", Q_NULLPTR));
        messageInput->setText(QString());
        sendButton->setText(QApplication::translate("showmessages", "Send", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class showmessages: public Ui_showmessages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWMESSAGES_H
