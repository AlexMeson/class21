/********************************************************************************
** Form generated from reading UI file 'inputpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTPAGE_H
#define UI_INPUTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inputPage
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *input_ipaddr;
    QLabel *label_2;
    QLineEdit *input_port;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_confirm;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_exit;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *inputPage)
    {
        if (inputPage->objectName().isEmpty())
            inputPage->setObjectName(QString::fromUtf8("inputPage"));
        inputPage->resize(320, 155);
        inputPage->setMinimumSize(QSize(320, 155));
        gridLayout_2 = new QGridLayout(inputPage);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(inputPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(90, 25));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(14);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        input_ipaddr = new QLineEdit(inputPage);
        input_ipaddr->setObjectName(QString::fromUtf8("input_ipaddr"));
        input_ipaddr->setMinimumSize(QSize(160, 25));
        input_ipaddr->setMaximumSize(QSize(160, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        input_ipaddr->setFont(font1);

        gridLayout->addWidget(input_ipaddr, 0, 1, 1, 1);

        label_2 = new QLabel(inputPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(90, 25));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        input_port = new QLineEdit(inputPage);
        input_port->setObjectName(QString::fromUtf8("input_port"));
        input_port->setMinimumSize(QSize(160, 25));
        input_port->setMaximumSize(QSize(160, 25));
        input_port->setFont(font1);
        input_port->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(input_port, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btn_confirm = new QPushButton(inputPage);
        btn_confirm->setObjectName(QString::fromUtf8("btn_confirm"));
        btn_confirm->setMinimumSize(QSize(90, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setWeight(50);
        btn_confirm->setFont(font2);

        horizontalLayout->addWidget(btn_confirm);

        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_exit = new QPushButton(inputPage);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));
        btn_exit->setMinimumSize(QSize(90, 30));
        btn_exit->setFont(font2);

        horizontalLayout->addWidget(btn_exit);

        horizontalSpacer_3 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 2, 1, 1, 1);


        retranslateUi(inputPage);

        QMetaObject::connectSlotsByName(inputPage);
    } // setupUi

    void retranslateUi(QWidget *inputPage)
    {
        inputPage->setWindowTitle(QApplication::translate("inputPage", "inputPage", nullptr));
        label->setText(QApplication::translate("inputPage", "\345\257\271\346\226\271IP  :", nullptr));
        input_ipaddr->setText(QString());
        label_2->setText(QApplication::translate("inputPage", "\345\257\271\346\226\271\347\253\257\345\217\243:", nullptr));
        input_port->setText(QString());
        btn_confirm->setText(QApplication::translate("inputPage", "\347\241\256\350\256\244", nullptr));
        btn_exit->setText(QApplication::translate("inputPage", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inputPage: public Ui_inputPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTPAGE_H
