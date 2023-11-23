/********************************************************************************
** Form generated from reading UI file 'mypage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYPAGE_H
#define UI_MYPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myPage
{
public:

    void setupUi(QWidget *myPage)
    {
        if (myPage->objectName().isEmpty())
            myPage->setObjectName(QString::fromUtf8("myPage"));
        myPage->resize(800, 600);

        retranslateUi(myPage);

        QMetaObject::connectSlotsByName(myPage);
    } // setupUi

    void retranslateUi(QWidget *myPage)
    {
        myPage->setWindowTitle(QApplication::translate("myPage", "myPage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myPage: public Ui_myPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYPAGE_H
