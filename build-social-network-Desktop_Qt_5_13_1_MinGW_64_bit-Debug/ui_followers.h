/********************************************************************************
** Form generated from reading UI file 'followers.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOLLOWERS_H
#define UI_FOLLOWERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_followers
{
public:
    QListWidget *listWidget;
    QLabel *label;
    QPushButton *ok;

    void setupUi(QDialog *followers)
    {
        if (followers->objectName().isEmpty())
            followers->setObjectName(QString::fromUtf8("followers"));
        followers->resize(572, 640);
        followers->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 70, 70);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"font: 25 12pt \"Microsoft JhengHei UI Light\";\n"
"border-width: 3px;\n"
"border-style: solid;\n"
"border-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.769, fx:0.5, fy:0.505682, stop:0 rgba(0, 0, 0, 255), stop:0.113636 rgba(14, 8, 73, 255), stop:0.323864 rgba(28, 17, 145, 255), stop:0.539773 rgba(126, 14, 81, 255), stop:0.659091 rgba(234, 11, 11, 255), stop:0.772727 rgba(244, 70, 5, 255), stop:0.875 rgba(255, 139, 0, 255), stop:1 rgba(239, 236, 55, 255))"));
        listWidget = new QListWidget(followers);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 70, 551, 481));
        listWidget->setStyleSheet(QString::fromUtf8("border-width: 0px;background-color: rgb(51, 51, 51);\n"
"font: 28pt \"Microsoft YaHei UI\";"));
        label = new QLabel(followers);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 231, 51));
        label->setStyleSheet(QString::fromUtf8("border-width: 0px;"));
        ok = new QPushButton(followers);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(200, 570, 181, 51));
        ok->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 134, 134);\n"
"border-width: 0px;"));

        retranslateUi(followers);

        QMetaObject::connectSlotsByName(followers);
    } // setupUi

    void retranslateUi(QDialog *followers)
    {
        followers->setWindowTitle(QCoreApplication::translate("followers", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("followers", "followers:", nullptr));
        ok->setText(QCoreApplication::translate("followers", "ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class followers: public Ui_followers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOLLOWERS_H
