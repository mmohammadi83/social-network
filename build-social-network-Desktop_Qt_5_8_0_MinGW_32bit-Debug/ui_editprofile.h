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
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_editprofile
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *editprofile)
    {
        if (editprofile->objectName().isEmpty())
            editprofile->setObjectName(QStringLiteral("editprofile"));
        editprofile->resize(400, 300);
        buttonBox = new QDialogButtonBox(editprofile);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(editprofile);
        QObject::connect(buttonBox, SIGNAL(accepted()), editprofile, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), editprofile, SLOT(reject()));

        QMetaObject::connectSlotsByName(editprofile);
    } // setupUi

    void retranslateUi(QDialog *editprofile)
    {
        editprofile->setWindowTitle(QApplication::translate("editprofile", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class editprofile: public Ui_editprofile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROFILE_H
