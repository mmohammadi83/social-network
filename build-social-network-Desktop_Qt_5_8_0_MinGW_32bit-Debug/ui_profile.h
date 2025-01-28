/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profile
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
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
        label->setGeometry(QRect(20, 0, 131, 161));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 150, 81, 41));
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
        label_2->setText(QApplication::translate("profile", "name:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class profile: public Ui_profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
