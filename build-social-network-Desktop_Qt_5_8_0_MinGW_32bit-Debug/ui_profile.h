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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
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
            profile->setObjectName(QStringLiteral("profile"));
        profile->resize(894, 690);
        profile->setStyleSheet(QLatin1String("background-color: rgb(70, 70, 70);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"font: 25 12pt \"Microsoft JhengHei UI Light\";\n"
""));
        followers = new QLabel(profile);
        followers->setObjectName(QStringLiteral("followers"));
        followers->setGeometry(QRect(550, 110, 91, 41));
        label_2 = new QLabel(profile);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(400, 110, 121, 41));
        following = new QLabel(profile);
        following->setObjectName(QStringLiteral("following"));
        following->setGeometry(QRect(790, 110, 91, 41));
        label_3 = new QLabel(profile);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(650, 110, 121, 41));
        uname = new QLabel(profile);
        uname->setObjectName(QStringLiteral("uname"));
        uname->setGeometry(QRect(290, 40, 421, 41));
        gmail = new QLabel(profile);
        gmail->setObjectName(QStringLiteral("gmail"));
        gmail->setGeometry(QRect(60, 350, 591, 41));
        name = new QLabel(profile);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(60, 250, 481, 41));
        age = new QLabel(profile);
        age->setObjectName(QStringLiteral("age"));
        age->setGeometry(QRect(60, 300, 231, 41));
        unfollow = new QPushButton(profile);
        unfollow->setObjectName(QStringLiteral("unfollow"));
        unfollow->setGeometry(QRect(350, 470, 181, 51));
        unfollow->setStyleSheet(QLatin1String("background-color: rgb(134, 134, 134);\n"
""));
        follow = new QPushButton(profile);
        follow->setObjectName(QStringLiteral("follow"));
        follow->setGeometry(QRect(350, 530, 181, 51));
        follow->setStyleSheet(QLatin1String("background-color: rgb(134, 134, 134);\n"
""));
        prof = new QPushButton(profile);
        prof->setObjectName(QStringLiteral("prof"));
        prof->setGeometry(QRect(50, 50, 161, 151));

        retranslateUi(profile);

        QMetaObject::connectSlotsByName(profile);
    } // setupUi

    void retranslateUi(QDialog *profile)
    {
        profile->setWindowTitle(QApplication::translate("profile", "Dialog", Q_NULLPTR));
        followers->setText(QString());
        label_2->setText(QApplication::translate("profile", "followers:", Q_NULLPTR));
        following->setText(QString());
        label_3->setText(QApplication::translate("profile", "following:", Q_NULLPTR));
        uname->setText(QApplication::translate("profile", "uname", Q_NULLPTR));
        gmail->setText(QApplication::translate("profile", "gmail", Q_NULLPTR));
        name->setText(QApplication::translate("profile", "name", Q_NULLPTR));
        age->setText(QApplication::translate("profile", "age", Q_NULLPTR));
        unfollow->setText(QApplication::translate("profile", "unfollow", Q_NULLPTR));
        follow->setText(QApplication::translate("profile", "follow", Q_NULLPTR));
        prof->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class profile: public Ui_profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
