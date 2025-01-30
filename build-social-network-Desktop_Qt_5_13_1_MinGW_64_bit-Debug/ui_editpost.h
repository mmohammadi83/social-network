/********************************************************************************
** Form generated from reading UI file 'editpost.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPOST_H
#define UI_EDITPOST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_editPost
{
public:
    QListWidget *listWidget;
    QLabel *label;
    QPushButton *ok;
    QPushButton *ok_2;
    QLineEdit *lineEdit;

    void setupUi(QDialog *editPost)
    {
        if (editPost->objectName().isEmpty())
            editPost->setObjectName(QString::fromUtf8("editPost"));
        editPost->resize(667, 714);
        editPost->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 70, 70);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"font: 25 12pt \"Microsoft JhengHei UI Light\";\n"
"border-width: 3px;\n"
"border-style: solid;\n"
"border-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.769, fx:0.5, fy:0.505682, stop:0 rgba(0, 0, 0, 255), stop:0.113636 rgba(14, 8, 73, 255), stop:0.323864 rgba(28, 17, 145, 255), stop:0.539773 rgba(126, 14, 81, 255), stop:0.659091 rgba(234, 11, 11, 255), stop:0.772727 rgba(244, 70, 5, 255), stop:0.875 rgba(255, 139, 0, 255), stop:1 rgba(239, 236, 55, 255))\n"
""));
        listWidget = new QListWidget(editPost);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 70, 641, 451));
        listWidget->setStyleSheet(QString::fromUtf8("border-width: 0px;background-color: rgb(51, 51, 51);\n"
"font: 18pt \"Microsoft YaHei UI\";"));
        label = new QLabel(editPost);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 231, 51));
        label->setStyleSheet(QString::fromUtf8("border-width: 0px;"));
        ok = new QPushButton(editPost);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(260, 610, 181, 51));
        ok->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 134, 134);\n"
"border-width: 0px;"));
        ok_2 = new QPushButton(editPost);
        ok_2->setObjectName(QString::fromUtf8("ok_2"));
        ok_2->setGeometry(QRect(460, 540, 181, 51));
        ok_2->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 134, 134);\n"
"border-width: 0px;"));
        lineEdit = new QLineEdit(editPost);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 540, 431, 51));
        lineEdit->setStyleSheet(QString::fromUtf8("border-width: 0px;\n"
"background-color: rgb(255, 255, 255);"));

        retranslateUi(editPost);

        QMetaObject::connectSlotsByName(editPost);
    } // setupUi

    void retranslateUi(QDialog *editPost)
    {
        editPost->setWindowTitle(QCoreApplication::translate("editPost", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("editPost", "posts:", nullptr));
        ok->setText(QCoreApplication::translate("editPost", "ok", nullptr));
        ok_2->setText(QCoreApplication::translate("editPost", "add post", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editPost: public Ui_editPost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPOST_H
