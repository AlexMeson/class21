#include "mypage.h"
#include "ui_mypage.h"

/* mypage类 构造函数 */
myPage::myPage(QWidget *parent) : QWidget(parent) , ui(new Ui::myPage) {
    //初始化Ui相关设置 为ui指针分配内存
    ui->setupUi(this);

    ui->btn->setText("Hello");

    //connect( &发送者, SIGNAL(信号名称), &接收者, SLOT(函数名称) );
    //关联信号和槽 - 按钮对象btn 点击发出信号clicked() 激活本类对象的行为hello()
    connect( ui->btn , SIGNAL(clicked(bool)), this, SLOT(slot_btn_clicked()) );
//    connect( ui->btn , SIGNAL(clicked(bool)), this, SLOT(slot_btn_clicked()) );
//    connect( ui->btn , SIGNAL(clicked(bool)), this, SLOT(slot_btn_clicked()) );
}

void myPage::slot_btn_clicked(){
    qDebug() << "Hello world!";   //C++风格
    disconnect( ui->btn , SIGNAL(clicked(bool)), this, SLOT(slot_btn_clicked()) );
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
    connect( &发送者, SIGNAL(信号名称), &接收者, SLOT(函数名称) );
    自动关联
    ui设计界面 选中控件"go to slot" 选择发出信号 自动生成代码 只需编写槽函数内容
*/
