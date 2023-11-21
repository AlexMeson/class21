/********************************************************************************
** Form generated from reading UI file 'transferpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFERPAGE_H
#define UI_TRANSFERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_transferPage
{
public:

    void setupUi(QWidget *transferPage)
    {
        if (transferPage->objectName().isEmpty())
            transferPage->setObjectName(QString::fromUtf8("transferPage"));
        transferPage->resize(500, 355);

        retranslateUi(transferPage);

        QMetaObject::connectSlotsByName(transferPage);
    } // setupUi

    void retranslateUi(QWidget *transferPage)
    {
        transferPage->setWindowTitle(QApplication::translate("transferPage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class transferPage: public Ui_transferPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFERPAGE_H
