#include "transferpage.h"
#include "ui_transferpage.h"

extern QString input_ipaddr;
extern QString input_port;

/* 传输页面构造函数 */
transferPage::transferPage(QWidget *parent) : QWidget(parent) , ui(new Ui::transferPage){
    ui->setupUi(this);

    /* 初始化下拉框数据 */
    QStringList str_list;
    str_list << "1" << "10" << "100" << "1000" << "10000" ;
    ui->comboBox_sendtimes->addItems(str_list);

    /* 设置报错对话框样式 */
    mbox.setIcon(QMessageBox::Critical);
    mbox.setWindowFlags(Qt::FramelessWindowHint);

    /* 设置按钮初始状态 */
    ui->btn_connect->setEnabled(true);
    ui->btn_disconnect->setDisabled(true);
    ui->btn_send->setDisabled(true);
    this->setWindowTitle("TCP客户端调试工具");

    connect(ui->btn_connect, SIGNAL(clicked(bool)), this, SLOT(slot_btnConnect_clicked()));
    connect(ui->btn_back, SIGNAL(clicked(bool)), this, SLOT(slot_btnBack_clicked()) );
}

/* 公有的槽函数 显示页面 由inputPage对象信号signal_display_transferpage 激活 */
void transferPage::slot_display_page(){
    /* 显示界面前同步服务端IP和端口号 */
    ui->label_target_ip->setText(input_ipaddr);
    ui->label_target_port->setText(input_port);
    this->show();   /* 界面显示 */
}

/* 槽函数 按钮btn_connect 点击 触发 */
void transferPage::slot_btnConnect_clicked(){
    ui->label_socket_status->setText("正在连接...");
    tcp_socket.connectToHost(input_ipaddr, input_port.toUShort());
    if( tcp_socket.waitForConnected(3000) ){
        ui->label_socket_status->setText("已连接");
        ui->btn_connect->setDisabled(true);
        ui->btn_disconnect->setEnabled(true);
        ui->btn_send->setEnabled(true);
        ui->btn_back->hide();
        ui->label_local_port->setText( QString::number(tcp_socket.localPort()) );
    }else{
        ui->label_socket_status->setText("已断开");
        mbox.setText("Connect failed : " + tcp_socket.errorString());
    }
}

/* 槽函数 按钮btn_disconnect 点击 触发 */
void transferPage::slot_btnDisconnect_clicked(){
    tcp_socket.disconnectFromHost();
    if( tcp_socket.waitForDisconnected() ){

    }else{

    }
}

void transferPage::slot_btnSend_clicked(){

}

void transferPage::slot_btnBack_clicked(){
    emit signal_backto_input();
    this->close();
}

transferPage::~transferPage(){
    delete ui;
}
