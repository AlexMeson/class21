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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_transferPage
{
public:
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_2;
    QLabel *label_socket_status;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_connect;
    QPushButton *btn_disconnect;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout;
    QLabel *label_target_ip;
    QLabel *label_socket_status_5;
    QLabel *label_target_port;
    QLabel *label_local_port;
    QLabel *label_socket_status_2;
    QLabel *label_socket_status_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_back;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTextEdit *textedit_output;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QGridLayout *gridLayout_4;
    QTextEdit *textedit_input;
    QPushButton *btn_send;
    QLabel *label_4;
    QComboBox *comboBox_sendtimes;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *transferPage)
    {
        if (transferPage->objectName().isEmpty())
            transferPage->setObjectName(QString::fromUtf8("transferPage"));
        transferPage->resize(500, 400);
        transferPage->setMinimumSize(QSize(500, 400));
        gridLayout_6 = new QGridLayout(transferPage);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(transferPage);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        label->setFont(font);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_socket_status = new QLabel(transferPage);
        label_socket_status->setObjectName(QString::fromUtf8("label_socket_status"));
        label_socket_status->setMinimumSize(QSize(40, 15));
        label_socket_status->setFont(font);

        gridLayout_2->addWidget(label_socket_status, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        btn_connect = new QPushButton(transferPage);
        btn_connect->setObjectName(QString::fromUtf8("btn_connect"));
        btn_connect->setMinimumSize(QSize(80, 30));
        btn_connect->setMaximumSize(QSize(80, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font1.setPointSize(10);
        btn_connect->setFont(font1);

        gridLayout_2->addWidget(btn_connect, 1, 0, 1, 1);

        btn_disconnect = new QPushButton(transferPage);
        btn_disconnect->setObjectName(QString::fromUtf8("btn_disconnect"));
        btn_disconnect->setMinimumSize(QSize(80, 30));
        btn_disconnect->setMaximumSize(QSize(80, 30));
        btn_disconnect->setFont(font1);

        gridLayout_2->addWidget(btn_disconnect, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 2);


        gridLayout_5->addLayout(gridLayout_3, 0, 0, 2, 1);

        horizontalSpacer_4 = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_target_ip = new QLabel(transferPage);
        label_target_ip->setObjectName(QString::fromUtf8("label_target_ip"));
        label_target_ip->setMinimumSize(QSize(100, 15));
        label_target_ip->setFont(font);

        gridLayout->addWidget(label_target_ip, 0, 1, 1, 1);

        label_socket_status_5 = new QLabel(transferPage);
        label_socket_status_5->setObjectName(QString::fromUtf8("label_socket_status_5"));
        label_socket_status_5->setMinimumSize(QSize(60, 15));
        label_socket_status_5->setFont(font);

        gridLayout->addWidget(label_socket_status_5, 2, 0, 1, 1);

        label_target_port = new QLabel(transferPage);
        label_target_port->setObjectName(QString::fromUtf8("label_target_port"));
        label_target_port->setMinimumSize(QSize(100, 15));
        label_target_port->setFont(font);

        gridLayout->addWidget(label_target_port, 1, 1, 1, 1);

        label_local_port = new QLabel(transferPage);
        label_local_port->setObjectName(QString::fromUtf8("label_local_port"));
        label_local_port->setMinimumSize(QSize(100, 15));
        label_local_port->setFont(font);

        gridLayout->addWidget(label_local_port, 2, 1, 1, 1);

        label_socket_status_2 = new QLabel(transferPage);
        label_socket_status_2->setObjectName(QString::fromUtf8("label_socket_status_2"));
        label_socket_status_2->setMinimumSize(QSize(60, 15));
        label_socket_status_2->setFont(font);

        gridLayout->addWidget(label_socket_status_2, 0, 0, 1, 1);

        label_socket_status_4 = new QLabel(transferPage);
        label_socket_status_4->setObjectName(QString::fromUtf8("label_socket_status_4"));
        label_socket_status_4->setMinimumSize(QSize(60, 15));
        label_socket_status_4->setFont(font);

        gridLayout->addWidget(label_socket_status_4, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout, 0, 2, 2, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_back = new QPushButton(transferPage);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setMinimumSize(QSize(80, 30));
        btn_back->setMaximumSize(QSize(80, 30));
        btn_back->setFont(font1);

        horizontalLayout->addWidget(btn_back);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout_5->addLayout(horizontalLayout, 1, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(transferPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        textedit_output = new QTextEdit(transferPage);
        textedit_output->setObjectName(QString::fromUtf8("textedit_output"));

        verticalLayout->addWidget(textedit_output);


        gridLayout_6->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(transferPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        textedit_input = new QTextEdit(transferPage);
        textedit_input->setObjectName(QString::fromUtf8("textedit_input"));

        gridLayout_4->addWidget(textedit_input, 0, 0, 4, 1);

        btn_send = new QPushButton(transferPage);
        btn_send->setObjectName(QString::fromUtf8("btn_send"));
        btn_send->setMinimumSize(QSize(80, 30));
        btn_send->setMaximumSize(QSize(80, 30));
        btn_send->setFont(font1);

        gridLayout_4->addWidget(btn_send, 0, 1, 1, 1);

        label_4 = new QLabel(transferPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout_4->addWidget(label_4, 1, 1, 1, 1);

        comboBox_sendtimes = new QComboBox(transferPage);
        comboBox_sendtimes->setObjectName(QString::fromUtf8("comboBox_sendtimes"));

        gridLayout_4->addWidget(comboBox_sendtimes, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 3, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_4);


        gridLayout_6->addLayout(verticalLayout_2, 2, 0, 1, 1);


        retranslateUi(transferPage);

        QMetaObject::connectSlotsByName(transferPage);
    } // setupUi

    void retranslateUi(QWidget *transferPage)
    {
        transferPage->setWindowTitle(QApplication::translate("transferPage", "Form", nullptr));
        label->setText(QApplication::translate("transferPage", "Socket\347\212\266\346\200\201", nullptr));
        label_socket_status->setText(QApplication::translate("transferPage", "\345\267\262\346\226\255\345\274\200", nullptr));
        btn_connect->setText(QApplication::translate("transferPage", "\350\277\236\346\216\245", nullptr));
        btn_disconnect->setText(QApplication::translate("transferPage", "\346\226\255\345\274\200", nullptr));
        label_target_ip->setText(QString());
        label_socket_status_5->setText(QApplication::translate("transferPage", "\346\234\254\345\234\260\347\253\257\345\217\243\357\274\232", nullptr));
        label_target_port->setText(QString());
        label_local_port->setText(QString());
        label_socket_status_2->setText(QApplication::translate("transferPage", "\345\257\271\346\226\271IP   \357\274\232", nullptr));
        label_socket_status_4->setText(QApplication::translate("transferPage", "\345\257\271\346\226\271\347\253\257\345\217\243\357\274\232", nullptr));
        btn_back->setText(QApplication::translate("transferPage", "\350\277\224\345\233\236", nullptr));
        label_2->setText(QApplication::translate("transferPage", "\346\225\260\346\215\256\346\216\245\346\224\266\345\217\212\346\217\220\347\244\272\347\252\227\345\217\243", nullptr));
        label_3->setText(QApplication::translate("transferPage", "\346\225\260\346\215\256\345\217\221\351\200\201\347\252\227\345\217\243(\346\226\207\346\234\254\346\250\241\345\274\217)", nullptr));
        btn_send->setText(QApplication::translate("transferPage", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
        label_4->setText(QApplication::translate("transferPage", "\351\207\215\345\244\215\345\217\221\351\200\201\346\254\241\346\225\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class transferPage: public Ui_transferPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFERPAGE_H
