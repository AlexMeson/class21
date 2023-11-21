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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myPage
{
public:
    QPushButton *btn;

    void setupUi(QWidget *myPage)
    {
        if (myPage->objectName().isEmpty())
            myPage->setObjectName(QString::fromUtf8("myPage"));
        myPage->resize(400, 300);
        btn = new QPushButton(myPage);
        btn->setObjectName(QString::fromUtf8("btn"));
        btn->setGeometry(QRect(70, 70, 91, 31));

        retranslateUi(myPage);

        QMetaObject::connectSlotsByName(myPage);
    } // setupUi

    void retranslateUi(QWidget *myPage)
    {
        myPage->setWindowTitle(QApplication::translate("myPage", "myPage", nullptr));
        btn->setText(QApplication::translate("myPage", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myPage: public Ui_myPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYPAGE_H
