/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_profile
{
public:
    QLabel *followers;
    QLabel *label_2;
    QLabel *following;
    QLabel *label_3;
    QLabel *uname;
    QLabel *gmail;
    QLabel *name;
    QLabel *age;
    QPushButton *unfollow;
    QPushButton *follow;
    QPushButton *prof;
    QListWidget *posts;

    void setupUi(QDialog *profile)
    {
        if (profile->objectName().isEmpty())
            profile->setObjectName(QString::fromUtf8("profile"));
        profile->resize(894, 743);
        profile->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 70, 70);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"font: 25 12pt \"Microsoft JhengHei UI Light\";\n"
"border-width: 3px;\n"
"border-style: solid;\n"
"border-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.769, fx:0.5, fy:0.505682, stop:0 rgba(0, 0, 0, 255), stop:0.113636 rgba(14, 8, 73, 255), stop:0.323864 rgba(28, 17, 145, 255), stop:0.539773 rgba(126, 14, 81, 255), stop:0.659091 rgba(234, 11, 11, 255), stop:0.772727 rgba(244, 70, 5, 255), stop:0.875 rgba(255, 139, 0, 255), stop:1 rgba(239, 236, 55, 255))"));
        followers = new QLabel(profile);
        followers->setObjectName(QString::fromUtf8("followers"));
        followers->setGeometry(QRect(440, 110, 91, 41));
        followers->setStyleSheet(QString::fromUtf8("border-width: 0px;"));
        label_2 = new QLabel(profile);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(290, 110, 121, 41));
        label_2->setStyleSheet(QString::fromUtf8("border-width: 0px;"));
        following = new QLabel(profile);
        following->setObjectName(QString::fromUtf8("following"));
        following->setGeometry(QRect(750, 110, 91, 41));
        following->setStyleSheet(QString::fromUtf8("border-width: 0px;"));
        label_3 = new QLabel(profile);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(610, 110, 121, 41));
        label_3->setStyleSheet(QString::fromUtf8("border-width: 0px;"));
        uname = new QLabel(profile);
        uname->setObjectName(QString::fromUtf8("uname"));
        uname->setGeometry(QRect(290, 30, 421, 61));
        uname->setStyleSheet(QString::fromUtf8("border-width: 0px;\n"
"font: 28 16pt \"Microsoft YaHei UI Light\";"));
        gmail = new QLabel(profile);
        gmail->setObjectName(QString::fromUtf8("gmail"));
        gmail->setGeometry(QRect(50, 350, 381, 41));
        gmail->setStyleSheet(QString::fromUtf8("border-width: 0px;"));
        name = new QLabel(profile);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(50, 250, 391, 41));
        name->setStyleSheet(QString::fromUtf8("border-width: 0px;"));
        age = new QLabel(profile);
        age->setObjectName(QString::fromUtf8("age"));
        age->setGeometry(QRect(50, 300, 231, 41));
        age->setStyleSheet(QString::fromUtf8("border-width: 0px;"));
        unfollow = new QPushButton(profile);
        unfollow->setObjectName(QString::fromUtf8("unfollow"));
        unfollow->setGeometry(QRect(350, 660, 181, 51));
        unfollow->setStyleSheet(QString::fromUtf8("border-width: 0px;background-color: rgb(134, 134, 134);\n"
""));
        follow = new QPushButton(profile);
        follow->setObjectName(QString::fromUtf8("follow"));
        follow->setGeometry(QRect(350, 660, 181, 51));
        follow->setStyleSheet(QString::fromUtf8("border-width: 0px;background-color: rgb(134, 134, 134);\n"
""));
        prof = new QPushButton(profile);
        prof->setObjectName(QString::fromUtf8("prof"));
        prof->setGeometry(QRect(50, 50, 161, 151));
        prof->setStyleSheet(QString::fromUtf8("border-width: 0px;"));
        posts = new QListWidget(profile);
        posts->setObjectName(QString::fromUtf8("posts"));
        posts->setGeometry(QRect(420, 210, 421, 421));
        posts->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"font: 16pt \"Microsoft YaHei UI\";\n"
"border-width: 0px;"));

        retranslateUi(profile);

        QMetaObject::connectSlotsByName(profile);
    } // setupUi

    void retranslateUi(QDialog *profile)
    {
        profile->setWindowTitle(QCoreApplication::translate("profile", "Dialog", nullptr));
        followers->setText(QString());
        label_2->setText(QCoreApplication::translate("profile", "followers:", nullptr));
        following->setText(QString());
        label_3->setText(QCoreApplication::translate("profile", "following:", nullptr));
        uname->setText(QCoreApplication::translate("profile", "uname", nullptr));
        gmail->setText(QCoreApplication::translate("profile", "gmail", nullptr));
        name->setText(QCoreApplication::translate("profile", "name", nullptr));
        age->setText(QCoreApplication::translate("profile", "age", nullptr));
        unfollow->setText(QCoreApplication::translate("profile", "unfollow", nullptr));
        follow->setText(QCoreApplication::translate("profile", "follow", nullptr));
        prof->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class profile: public Ui_profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
