/********************************************************************************
** Form generated from reading UI file 'editprofile.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFILE_H
#define UI_EDITPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_editprofile
{
public:
    QPushButton *profile;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *linenewname;
    QLineEdit *linenewage;
    QLineEdit *linenewgmail;
    QLineEdit *linenewpassword;
    QLabel *labeloldname;
    QLabel *labeloldusername;
    QLabel *labeloldage;
    QLabel *labeloldgmail;
    QLabel *labeloldpassword;
    QPushButton *ok;
    QPushButton *cancel;
    QPushButton *deleteAcount;

    void setupUi(QDialog *editprofile)
    {
        if (editprofile->objectName().isEmpty())
            editprofile->setObjectName(QString::fromUtf8("editprofile"));
        editprofile->resize(850, 639);
        editprofile->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 70, 70);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"font: 25 12pt \"Microsoft JhengHei UI Light\";"));
        profile = new QPushButton(editprofile);
        profile->setObjectName(QString::fromUtf8("profile"));
        profile->setGeometry(QRect(70, 30, 181, 161));
        profile->setStyleSheet(QString::fromUtf8("border-radius: 85px;"));
        label = new QLabel(editprofile);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(380, 60, 121, 20));
        label_2 = new QLabel(editprofile);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(380, 30, 91, 21));
        label_3 = new QLabel(editprofile);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(380, 90, 81, 21));
        label_4 = new QLabel(editprofile);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(380, 120, 81, 31));
        label_5 = new QLabel(editprofile);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(380, 150, 91, 31));
        label_6 = new QLabel(editprofile);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 240, 111, 31));
        label_8 = new QLabel(editprofile);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 300, 111, 31));
        label_9 = new QLabel(editprofile);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 360, 141, 31));
        label_10 = new QLabel(editprofile);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 420, 151, 31));
        linenewname = new QLineEdit(editprofile);
        linenewname->setObjectName(QString::fromUtf8("linenewname"));
        linenewname->setGeometry(QRect(200, 240, 241, 31));
        linenewname->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        linenewage = new QLineEdit(editprofile);
        linenewage->setObjectName(QString::fromUtf8("linenewage"));
        linenewage->setGeometry(QRect(200, 300, 241, 31));
        linenewage->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        linenewgmail = new QLineEdit(editprofile);
        linenewgmail->setObjectName(QString::fromUtf8("linenewgmail"));
        linenewgmail->setGeometry(QRect(200, 360, 241, 31));
        linenewgmail->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        linenewpassword = new QLineEdit(editprofile);
        linenewpassword->setObjectName(QString::fromUtf8("linenewpassword"));
        linenewpassword->setGeometry(QRect(200, 420, 241, 31));
        linenewpassword->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        labeloldname = new QLabel(editprofile);
        labeloldname->setObjectName(QString::fromUtf8("labeloldname"));
        labeloldname->setGeometry(QRect(510, 60, 151, 21));
        labeloldusername = new QLabel(editprofile);
        labeloldusername->setObjectName(QString::fromUtf8("labeloldusername"));
        labeloldusername->setGeometry(QRect(510, 30, 151, 21));
        labeloldage = new QLabel(editprofile);
        labeloldage->setObjectName(QString::fromUtf8("labeloldage"));
        labeloldage->setGeometry(QRect(510, 90, 151, 21));
        labeloldgmail = new QLabel(editprofile);
        labeloldgmail->setObjectName(QString::fromUtf8("labeloldgmail"));
        labeloldgmail->setGeometry(QRect(510, 120, 151, 31));
        labeloldpassword = new QLabel(editprofile);
        labeloldpassword->setObjectName(QString::fromUtf8("labeloldpassword"));
        labeloldpassword->setGeometry(QRect(510, 150, 151, 31));
        ok = new QPushButton(editprofile);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(620, 230, 151, 41));
        ok->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 134, 134);\n"
""));
        cancel = new QPushButton(editprofile);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(620, 290, 151, 41));
        cancel->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 134, 134);\n"
""));
        deleteAcount = new QPushButton(editprofile);
        deleteAcount->setObjectName(QString::fromUtf8("deleteAcount"));
        deleteAcount->setGeometry(QRect(620, 350, 151, 41));
        deleteAcount->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 134, 134);\n"
""));

        retranslateUi(editprofile);

        QMetaObject::connectSlotsByName(editprofile);
    } // setupUi

    void retranslateUi(QDialog *editprofile)
    {
        editprofile->setWindowTitle(QCoreApplication::translate("editprofile", "Dialog", nullptr));
        profile->setText(QString());
        label->setText(QCoreApplication::translate("editprofile", "name :", nullptr));
        label_2->setText(QCoreApplication::translate("editprofile", "username :", nullptr));
        label_3->setText(QCoreApplication::translate("editprofile", "age : ", nullptr));
        label_4->setText(QCoreApplication::translate("editprofile", "gmail :", nullptr));
        label_5->setText(QCoreApplication::translate("editprofile", "password :", nullptr));
        label_6->setText(QCoreApplication::translate("editprofile", "new name :", nullptr));
        label_8->setText(QCoreApplication::translate("editprofile", "new age :", nullptr));
        label_9->setText(QCoreApplication::translate("editprofile", "new gmail :", nullptr));
        label_10->setText(QCoreApplication::translate("editprofile", "new password :", nullptr));
        labeloldname->setText(QCoreApplication::translate("editprofile", "empty", nullptr));
        labeloldusername->setText(QCoreApplication::translate("editprofile", "empty", nullptr));
        labeloldage->setText(QCoreApplication::translate("editprofile", "empty", nullptr));
        labeloldgmail->setText(QCoreApplication::translate("editprofile", "empty", nullptr));
        labeloldpassword->setText(QCoreApplication::translate("editprofile", "empty", nullptr));
        ok->setText(QCoreApplication::translate("editprofile", "ok", nullptr));
        cancel->setText(QCoreApplication::translate("editprofile", "cancel", nullptr));
        deleteAcount->setText(QCoreApplication::translate("editprofile", "delete acount", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editprofile: public Ui_editprofile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROFILE_H
