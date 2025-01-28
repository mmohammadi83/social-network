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
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *linenewname;
    QLineEdit *linenewusername;
    QLineEdit *linenewage;
    QLineEdit *linenewgmail;
    QLineEdit *linenewpassword;
    QLabel *labeloldname;
    QLabel *labeloldusername;
    QLabel *labeloldage;
    QLabel *labeloldgmail;
    QLabel *labeloldpassword;

    void setupUi(QDialog *editprofile)
    {
        if (editprofile->objectName().isEmpty())
            editprofile->setObjectName(QString::fromUtf8("editprofile"));
        editprofile->resize(765, 596);
        profile = new QPushButton(editprofile);
        profile->setObjectName(QString::fromUtf8("profile"));
        profile->setGeometry(QRect(10, 10, 131, 121));
        label = new QLabel(editprofile);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 10, 121, 20));
        label_2 = new QLabel(editprofile);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 40, 161, 21));
        label_3 = new QLabel(editprofile);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 70, 131, 21));
        label_4 = new QLabel(editprofile);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 100, 121, 31));
        label_5 = new QLabel(editprofile);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(230, 130, 121, 41));
        label_6 = new QLabel(editprofile);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(230, 220, 111, 31));
        label_7 = new QLabel(editprofile);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(230, 260, 151, 31));
        label_8 = new QLabel(editprofile);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(230, 300, 111, 31));
        label_9 = new QLabel(editprofile);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(230, 330, 141, 31));
        label_10 = new QLabel(editprofile);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(230, 360, 151, 31));
        linenewname = new QLineEdit(editprofile);
        linenewname->setObjectName(QString::fromUtf8("linenewname"));
        linenewname->setGeometry(QRect(350, 230, 151, 22));
        linenewusername = new QLineEdit(editprofile);
        linenewusername->setObjectName(QString::fromUtf8("linenewusername"));
        linenewusername->setGeometry(QRect(360, 260, 141, 22));
        linenewage = new QLineEdit(editprofile);
        linenewage->setObjectName(QString::fromUtf8("linenewage"));
        linenewage->setGeometry(QRect(330, 300, 113, 22));
        linenewgmail = new QLineEdit(editprofile);
        linenewgmail->setObjectName(QString::fromUtf8("linenewgmail"));
        linenewgmail->setGeometry(QRect(340, 330, 113, 22));
        linenewpassword = new QLineEdit(editprofile);
        linenewpassword->setObjectName(QString::fromUtf8("linenewpassword"));
        linenewpassword->setGeometry(QRect(360, 370, 113, 22));
        labeloldname = new QLabel(editprofile);
        labeloldname->setObjectName(QString::fromUtf8("labeloldname"));
        labeloldname->setGeometry(QRect(340, 10, 111, 21));
        labeloldusername = new QLabel(editprofile);
        labeloldusername->setObjectName(QString::fromUtf8("labeloldusername"));
        labeloldusername->setGeometry(QRect(360, 40, 121, 21));
        labeloldage = new QLabel(editprofile);
        labeloldage->setObjectName(QString::fromUtf8("labeloldage"));
        labeloldage->setGeometry(QRect(330, 70, 91, 21));
        labeloldgmail = new QLabel(editprofile);
        labeloldgmail->setObjectName(QString::fromUtf8("labeloldgmail"));
        labeloldgmail->setGeometry(QRect(330, 100, 91, 31));
        labeloldpassword = new QLabel(editprofile);
        labeloldpassword->setObjectName(QString::fromUtf8("labeloldpassword"));
        labeloldpassword->setGeometry(QRect(350, 130, 121, 41));

        retranslateUi(editprofile);

        QMetaObject::connectSlotsByName(editprofile);
    } // setupUi

    void retranslateUi(QDialog *editprofile)
    {
        editprofile->setWindowTitle(QCoreApplication::translate("editprofile", "Dialog", nullptr));
        profile->setText(QString());
        label->setText(QCoreApplication::translate("editprofile", "label old name :", nullptr));
        label_2->setText(QCoreApplication::translate("editprofile", "label old username :", nullptr));
        label_3->setText(QCoreApplication::translate("editprofile", "lable old age : ", nullptr));
        label_4->setText(QCoreApplication::translate("editprofile", "label old gmail :", nullptr));
        label_5->setText(QCoreApplication::translate("editprofile", "label old password :", nullptr));
        label_6->setText(QCoreApplication::translate("editprofile", "label new name :", nullptr));
        label_7->setText(QCoreApplication::translate("editprofile", "label new username :", nullptr));
        label_8->setText(QCoreApplication::translate("editprofile", "lable new age :", nullptr));
        label_9->setText(QCoreApplication::translate("editprofile", "label new gmail :", nullptr));
        label_10->setText(QCoreApplication::translate("editprofile", "label new password :", nullptr));
        labeloldname->setText(QCoreApplication::translate("editprofile", "oldname", nullptr));
        labeloldusername->setText(QCoreApplication::translate("editprofile", "oldusername", nullptr));
        labeloldage->setText(QCoreApplication::translate("editprofile", "oldage", nullptr));
        labeloldgmail->setText(QCoreApplication::translate("editprofile", "oldgmail", nullptr));
        labeloldpassword->setText(QCoreApplication::translate("editprofile", "oldpassword", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editprofile: public Ui_editprofile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROFILE_H
