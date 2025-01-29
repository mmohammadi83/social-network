/********************************************************************************
** Form generated from reading UI file 'editprofile.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFILE_H
#define UI_EDITPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
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
            editprofile->setObjectName(QStringLiteral("editprofile"));
        editprofile->resize(850, 639);
        editprofile->setStyleSheet(QLatin1String("background-color: rgb(70, 70, 70);\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
"font: 25 12pt \"Microsoft JhengHei UI Light\";"));
        label = new QLabel(editprofile);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 80, 171, 41));
        label_2 = new QLabel(editprofile);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 30, 141, 41));
        label_3 = new QLabel(editprofile);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(330, 130, 131, 41));
        label_4 = new QLabel(editprofile);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(330, 180, 131, 41));
        label_6 = new QLabel(editprofile);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 290, 181, 41));
        label_8 = new QLabel(editprofile);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 360, 191, 51));
        label_9 = new QLabel(editprofile);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 440, 191, 51));
        label_10 = new QLabel(editprofile);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 520, 201, 51));
        linenewname = new QLineEdit(editprofile);
        linenewname->setObjectName(QStringLiteral("linenewname"));
        linenewname->setGeometry(QRect(240, 290, 321, 41));
        linenewname->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        linenewage = new QLineEdit(editprofile);
        linenewage->setObjectName(QStringLiteral("linenewage"));
        linenewage->setGeometry(QRect(240, 370, 321, 41));
        linenewage->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        linenewgmail = new QLineEdit(editprofile);
        linenewgmail->setObjectName(QStringLiteral("linenewgmail"));
        linenewgmail->setGeometry(QRect(240, 450, 321, 41));
        linenewgmail->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        linenewpassword = new QLineEdit(editprofile);
        linenewpassword->setObjectName(QStringLiteral("linenewpassword"));
        linenewpassword->setGeometry(QRect(240, 530, 321, 41));
        linenewpassword->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        labeloldname = new QLabel(editprofile);
        labeloldname->setObjectName(QStringLiteral("labeloldname"));
        labeloldname->setGeometry(QRect(520, 80, 251, 41));
        labeloldusername = new QLabel(editprofile);
        labeloldusername->setObjectName(QStringLiteral("labeloldusername"));
        labeloldusername->setGeometry(QRect(520, 30, 251, 41));
        labeloldage = new QLabel(editprofile);
        labeloldage->setObjectName(QStringLiteral("labeloldage"));
        labeloldage->setGeometry(QRect(520, 130, 251, 41));
        labeloldgmail = new QLabel(editprofile);
        labeloldgmail->setObjectName(QStringLiteral("labeloldgmail"));
        labeloldgmail->setGeometry(QRect(520, 180, 251, 41));
        ok = new QPushButton(editprofile);
        ok->setObjectName(QStringLiteral("ok"));
        ok->setGeometry(QRect(620, 320, 181, 51));
        ok->setStyleSheet(QLatin1String("background-color: rgb(134, 134, 134);\n"
""));
        cancel = new QPushButton(editprofile);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(620, 420, 181, 51));
        cancel->setStyleSheet(QLatin1String("background-color: rgb(134, 134, 134);\n"
""));
        deleteAcount = new QPushButton(editprofile);
        deleteAcount->setObjectName(QStringLiteral("deleteAcount"));
        deleteAcount->setGeometry(QRect(620, 510, 181, 51));
        deleteAcount->setStyleSheet(QLatin1String("background-color: rgb(134, 134, 134);\n"
""));
        profButton = new QPushButton(editprofile);
        profButton->setObjectName(QStringLiteral("profButton"));
        profButton->setGeometry(QRect(70, 50, 171, 171));
        profButton->setStyleSheet(QStringLiteral(""));

        retranslateUi(editprofile);

        QMetaObject::connectSlotsByName(editprofile);
    } // setupUi

    void retranslateUi(QDialog *editprofile)
    {
        editprofile->setWindowTitle(QApplication::translate("editprofile", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("editprofile", "name :", Q_NULLPTR));
        label_2->setText(QApplication::translate("editprofile", "username :", Q_NULLPTR));
        label_3->setText(QApplication::translate("editprofile", "age : ", Q_NULLPTR));
        label_4->setText(QApplication::translate("editprofile", "gmail :", Q_NULLPTR));
        label_6->setText(QApplication::translate("editprofile", "new name :", Q_NULLPTR));
        label_8->setText(QApplication::translate("editprofile", "new age :", Q_NULLPTR));
        label_9->setText(QApplication::translate("editprofile", "new gmail :", Q_NULLPTR));
        label_10->setText(QApplication::translate("editprofile", "new password :", Q_NULLPTR));
        labeloldname->setText(QApplication::translate("editprofile", "empty", Q_NULLPTR));
        labeloldusername->setText(QApplication::translate("editprofile", "empty", Q_NULLPTR));
        labeloldage->setText(QApplication::translate("editprofile", "empty", Q_NULLPTR));
        labeloldgmail->setText(QApplication::translate("editprofile", "empty", Q_NULLPTR));
        ok->setText(QApplication::translate("editprofile", "ok", Q_NULLPTR));
        cancel->setText(QApplication::translate("editprofile", "cancel", Q_NULLPTR));
        deleteAcount->setText(QApplication::translate("editprofile", "delete acount", Q_NULLPTR));
        profButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class editprofile: public Ui_editprofile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROFILE_H
