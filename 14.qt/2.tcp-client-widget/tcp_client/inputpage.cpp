#include "inputpage.h"
#include "ui_inputpage.h"

QString input_ipaddr;
QString input_port;

inputPage::inputPage(QWidget *parent) : QWidget(parent) , ui(new Ui::inputPage){
    ui->setupUi(this);

    this->setWindowTitle("TCP-client");

    font.setFamily("Consolas");
    font.setBold(true);
    mbox.setIcon(QMessageBox::Warning);
    mbox.setWindowTitle("Warning");

    ui->input_ipaddr->setText("192.168.0.48");
    ui->input_port->setText("60000");

    /* connect signal and slots */
    connect(ui->btn_exit, SIGNAL(clicked(bool)), this, SLOT(close()));
    connect(ui->btn_confirm, SIGNAL(clicked(bool)), this, SLOT(slot_btn_confirm_clicked()));
}

/* 槽函数 按钮btn_confirm点击时触发
 * 检查输入内容 - 关闭当前界面,显示交互界面 */
void inputPage::slot_btn_confirm_clicked(){
    input_ipaddr = ui->input_ipaddr->text();
    input_port   = ui->input_port->text();
    if( input_ipaddr.isEmpty() || input_port.isEmpty() ){   /* IP或端口字符串为空 */
        mbox.setText("Ip address or port is null.");
        mbox.setFont(font);
        mbox.show();
        return;
    }else{  /* IP或端口字符串均不为空 */
        emit signal_display_transferpage(); //发出信号 signal_display_transferpage
        this->hide();   //本界面隐藏
    }
}

inputPage::~inputPage(){
    delete ui;
}

