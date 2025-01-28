/********************************************************************************
** Form generated from reading UI file 'profilepage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEPAGE_H
#define UI_PROFILEPAGE_H

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

class Ui_profile
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *name;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *profile)
    {
        if (profile->objectName().isEmpty())
            profile->setObjectName(QStringLiteral("profile"));
        profile->resize(800, 600);
        centralwidget = new QWidget(profile);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 0, 131, 151));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 190, 81, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 240, 55, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 210, 91, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 160, 93, 28));
        name = new QLabel(centralwidget);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(100, 200, 55, 16));
        profile->setCentralWidget(centralwidget);
        menubar = new QMenuBar(profile);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        profile->setMenuBar(menubar);
        statusbar = new QStatusBar(profile);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        profile->setStatusBar(statusbar);

        retranslateUi(profile);

        QMetaObject::connectSlotsByName(profile);
    } // setupUi

    void retranslateUi(QMainWindow *profile)
    {
        profile->setWindowTitle(QApplication::translate("profile", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("profile", "labelProfilePic", Q_NULLPTR));
        label_2->setText(QApplication::translate("profile", "labelName", Q_NULLPTR));
        label_3->setText(QApplication::translate("profile", "age:", Q_NULLPTR));
        label_4->setText(QApplication::translate("profile", "username:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("profile", "btnEditProfile", Q_NULLPTR));
        name->setText(QApplication::translate("profile", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class profile: public Ui_profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEPAGE_H
