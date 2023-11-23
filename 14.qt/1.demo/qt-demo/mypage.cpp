#include "mypage.h"
#include "ui_mypage.h"

/* mypage类 构造函数 */
myPage::myPage(QWidget *parent) : QWidget(parent) , ui(new Ui::myPage) {
    //初始化Ui相关设置 为ui指针分配内存
    ui->setupUi(this);

    ui->btn->setText("CLICK");  //将Ui中按钮对象btn本文内容设置为"CLICK"

    //将背景色设置为红色
    this->setStyleSheet("background-color: rgb(255, 0, 0);");

    connect(ui->btn, &QPushButton::pressed, this, &myPage::slot_btn_pressed);
    connect(ui->btn, &QPushButton::released, this, [=](){
        this->setStyleSheet("background-color: rgb(255, 0, 0);");
    });
}

//槽函数 按键按下
void myPage::slot_btn_pressed(){
    this->setStyleSheet("background-color: rgb(0, 0, 255);");
}

myPage::~myPage(){
    delete ui;
}

/*
    信号和槽 - Qt下使不同对象之间产生行为交互的机制
    一个对象发出的信号 激活 另一个对象的槽函数
    一个对象中的槽函数 必须使用 限定修饰符配合slots修饰

    QObject::connect(const QObject *sender,     //信号发送者 (信号归属者对象的地址)
                     const char *signal,        //发送的什么信号
                     const QObject *receiver,   //信号接收者 (槽函数执行者对象的地址)
                     const char *method,        //执行的槽函数
                     Qt::ConnectionType type = Qt::AutoConnection)

    手动关联
        connect( &发送者, SIGNAL(信号名称()), &接收者, SLOT(函数名称()) );
        connect( &发送者, &发送者类名::信号名称, &接收者, &接收者类名::槽名称 )
        connect( &发送者, &发送者类名::信号名称, &接收者, [=](){
            槽函数程序
        } )

    自动关联
    ui设计界面 选中控件"go to slot" 选择发出信号 自动生成代码 只需编写槽函数内容
*/
