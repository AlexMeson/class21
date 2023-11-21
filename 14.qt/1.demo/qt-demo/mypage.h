#ifndef MYPAGE_H
#define MYPAGE_H

#include <iostream>
#include <QWidget>  //Qt所有界面类的父类
#include <QDebug>   //Qt提供的输出方法

QT_BEGIN_NAMESPACE
namespace Ui { class myPage; }
QT_END_NAMESPACE

/* 界面类 myPage 继承自 QWidget */
class myPage : public QWidget{
    Q_OBJECT    //该宏是为了提供信号和槽机制

public:
    myPage(QWidget *parent = nullptr);  //构造函数
    ~myPage();                          //析构函数

private:
    Ui::myPage *ui; //ui指针 可以通过ui指针访问界面中的成员组件

private slots:
    void slot_btn_pressed();
    void slot_btn_released();
    void slot_btn_toggled();
};
#endif // MYPAGE_H
