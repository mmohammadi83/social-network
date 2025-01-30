/********************************************************************************
** Form generated from reading UI file 'followings.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOLLOWINGS_H
#define UI_FOLLOWINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_followings
{
public:
    QListWidget *listWidget;
    QPushButton *ok;
    QLabel *label;

    void setupUi(QDialog *followings)
    {
        if (followings->objectName().isEmpty())
            followings->setObjectName(QString::fromUtf8("followings"));
        followings->resize(571, 643);
        followings->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 70, 70);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"font: 25 12pt \"Microsoft JhengHei UI Light\";\n"
"border-width: 3px;\n"
"border-style: solid;\n"
"border-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.769, fx:0.5, fy:0.505682, stop:0 rgba(0, 0, 0, 255), stop:0.113636 rgba(14, 8, 73, 255), stop:0.323864 rgba(28, 17, 145, 255), stop:0.539773 rgba(126, 14, 81, 255), stop:0.659091 rgba(234, 11, 11, 255), stop:0.772727 rgba(244, 70, 5, 255), stop:0.875 rgba(255, 139, 0, 255), stop:1 rgba(239, 236, 55, 255))\n"
""));
        listWidget = new QListWidget(followings);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 70, 551, 481));
        listWidget->setStyleSheet(QString::fromUtf8("border-width: 0px;background-color: rgb(51, 51, 51);\n"
"font: 28pt \"Microsoft YaHei UI\";"));
        ok = new QPushButton(followings);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(200, 570, 181, 51));
        ok->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 134, 134);\n"
"border-width: 0px;"));
        label = new QLabel(followings);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 231, 51));
        label->setStyleSheet(QString::fromUtf8("border-width: 0px;"));

        retranslateUi(followings);

        QMetaObject::connectSlotsByName(followings);
    } // setupUi

    void retranslateUi(QDialog *followings)
    {
        followings->setWindowTitle(QCoreApplication::translate("followings", "Dialog", nullptr));
        ok->setText(QCoreApplication::translate("followings", "ok", nullptr));
        label->setText(QCoreApplication::translate("followings", "following:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class followings: public Ui_followings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOLLOWINGS_H
