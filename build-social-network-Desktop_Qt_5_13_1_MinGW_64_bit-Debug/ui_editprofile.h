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
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
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
    QPushButton *ok;
    QPushButton *cancel;
    QPushButton *deleteAcount;
    QPushButton *profButton;

    void setupUi(QDialog *editprofile)
    {
        if (editprofile->objectName().isEmpty())
            editprofile->setObjectName(QString::fromUtf8("editprofile"));
        editprofile->resize(850, 639);
        editprofile->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 70, 70);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"font: 25 12pt \"Microsoft JhengHei UI Light\";"));
        label = new QLabel(editprofile);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 80, 171, 41));
        label_2 = new QLabel(editprofile);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 30, 141, 41));
        label_3 = new QLabel(editprofile);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(330, 130, 131, 41));
        label_4 = new QLabel(editprofile);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(330, 180, 131, 41));
        label_6 = new QLabel(editprofile);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 290, 181, 41));
        label_8 = new QLabel(editprofile);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 360, 191, 51));
        label_9 = new QLabel(editprofile);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 440, 191, 51));
        label_10 = new QLabel(editprofile);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(40, 520, 201, 51));
        linenewname = new QLineEdit(editprofile);
        linenewname->setObjectName(QString::fromUtf8("linenewname"));
        linenewname->setGeometry(QRect(240, 290, 321, 41));
        linenewname->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        linenewage = new QLineEdit(editprofile);
        linenewage->setObjectName(QString::fromUtf8("linenewage"));
        linenewage->setGeometry(QRect(240, 370, 321, 41));
        linenewage->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        linenewgmail = new QLineEdit(editprofile);
        linenewgmail->setObjectName(QString::fromUtf8("linenewgmail"));
        linenewgmail->setGeometry(QRect(240, 450, 321, 41));
        linenewgmail->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        linenewpassword = new QLineEdit(editprofile);
        linenewpassword->setObjectName(QString::fromUtf8("linenewpassword"));
        linenewpassword->setGeometry(QRect(240, 530, 321, 41));
        linenewpassword->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        labeloldname = new QLabel(editprofile);
        labeloldname->setObjectName(QString::fromUtf8("labeloldname"));
        labeloldname->setGeometry(QRect(520, 80, 251, 41));
        labeloldusername = new QLabel(editprofile);
        labeloldusername->setObjectName(QString::fromUtf8("labeloldusername"));
        labeloldusername->setGeometry(QRect(520, 30, 251, 41));
        labeloldage = new QLabel(editprofile);
        labeloldage->setObjectName(QString::fromUtf8("labeloldage"));
        labeloldage->setGeometry(QRect(520, 130, 251, 41));
        labeloldgmail = new QLabel(editprofile);
        labeloldgmail->setObjectName(QString::fromUtf8("labeloldgmail"));
        labeloldgmail->setGeometry(QRect(520, 180, 251, 41));
        ok = new QPushButton(editprofile);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(620, 320, 181, 51));
        ok->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 134, 134);\n"
""));
        cancel = new QPushButton(editprofile);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(620, 420, 181, 51));
        cancel->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 134, 134);\n"
""));
        deleteAcount = new QPushButton(editprofile);
        deleteAcount->setObjectName(QString::fromUtf8("deleteAcount"));
        deleteAcount->setGeometry(QRect(620, 510, 181, 51));
        deleteAcount->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 134, 134);\n"
""));
        profButton = new QPushButton(editprofile);
        profButton->setObjectName(QString::fromUtf8("profButton"));
        profButton->setGeometry(QRect(70, 50, 171, 171));
        profButton->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(editprofile);

        QMetaObject::connectSlotsByName(editprofile);
    } // setupUi

    void retranslateUi(QDialog *editprofile)
    {
        editprofile->setWindowTitle(QCoreApplication::translate("editprofile", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("editprofile", "name :", nullptr));
        label_2->setText(QCoreApplication::translate("editprofile", "username :", nullptr));
        label_3->setText(QCoreApplication::translate("editprofile", "age : ", nullptr));
        label_4->setText(QCoreApplication::translate("editprofile", "gmail :", nullptr));
        label_6->setText(QCoreApplication::translate("editprofile", "new name :", nullptr));
        label_8->setText(QCoreApplication::translate("editprofile", "new age :", nullptr));
        label_9->setText(QCoreApplication::translate("editprofile", "new gmail :", nullptr));
        label_10->setText(QCoreApplication::translate("editprofile", "new password :", nullptr));
        labeloldname->setText(QCoreApplication::translate("editprofile", "empty", nullptr));
        labeloldusername->setText(QCoreApplication::translate("editprofile", "empty", nullptr));
        labeloldage->setText(QCoreApplication::translate("editprofile", "empty", nullptr));
        labeloldgmail->setText(QCoreApplication::translate("editprofile", "empty", nullptr));
        ok->setText(QCoreApplication::translate("editprofile", "ok", nullptr));
        cancel->setText(QCoreApplication::translate("editprofile", "cancel", nullptr));
        deleteAcount->setText(QCoreApplication::translate("editprofile", "delete acount", nullptr));
        profButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class editprofile: public Ui_editprofile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROFILE_H
