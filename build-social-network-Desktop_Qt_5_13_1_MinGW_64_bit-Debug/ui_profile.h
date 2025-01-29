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

    void setupUi(QDialog *profile)
    {
        if (profile->objectName().isEmpty())
            profile->setObjectName(QString::fromUtf8("profile"));
        profile->resize(894, 690);
        profile->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 70, 70);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"font: 25 12pt \"Microsoft JhengHei UI Light\";\n"
""));
        followers = new QLabel(profile);
        followers->setObjectName(QString::fromUtf8("followers"));
        followers->setGeometry(QRect(550, 110, 91, 41));
        label_2 = new QLabel(profile);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 110, 121, 41));
        following = new QLabel(profile);
        following->setObjectName(QString::fromUtf8("following"));
        following->setGeometry(QRect(790, 110, 91, 41));
        label_3 = new QLabel(profile);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(650, 110, 121, 41));
        uname = new QLabel(profile);
        uname->setObjectName(QString::fromUtf8("uname"));
        uname->setGeometry(QRect(290, 40, 421, 41));
        gmail = new QLabel(profile);
        gmail->setObjectName(QString::fromUtf8("gmail"));
        gmail->setGeometry(QRect(60, 350, 591, 41));
        name = new QLabel(profile);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(60, 250, 481, 41));
        age = new QLabel(profile);
        age->setObjectName(QString::fromUtf8("age"));
        age->setGeometry(QRect(60, 300, 231, 41));
        unfollow = new QPushButton(profile);
        unfollow->setObjectName(QString::fromUtf8("unfollow"));
        unfollow->setGeometry(QRect(350, 470, 181, 51));
        unfollow->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 134, 134);\n"
""));
        follow = new QPushButton(profile);
        follow->setObjectName(QString::fromUtf8("follow"));
        follow->setGeometry(QRect(350, 530, 181, 51));
        follow->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 134, 134);\n"
""));
        prof = new QPushButton(profile);
        prof->setObjectName(QString::fromUtf8("prof"));
        prof->setGeometry(QRect(50, 50, 161, 151));

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
