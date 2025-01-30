/********************************************************************************
** Form generated from reading UI file 'editprofil.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFIL_H
#define UI_EDITPROFIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Di
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Di)
    {
        if (Di->objectName().isEmpty())
            Di->setObjectName(QStringLiteral("Di"));
        Di->resize(400, 300);
        buttonBox = new QDialogButtonBox(Di);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Di);
        QObject::connect(buttonBox, SIGNAL(accepted()), Di, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Di, SLOT(reject()));

        QMetaObject::connectSlotsByName(Di);
    } // setupUi

    void retranslateUi(QDialog *Di)
    {
        Di->setWindowTitle(QApplication::translate("Di", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Di: public Ui_Di {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROFIL_H
