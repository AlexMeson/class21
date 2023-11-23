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
    connect(ui->btn_disconnect, SIGNAL(clicked(bool)), this, SLOT(slot_btnDisconnect_clicked()));
    connect(ui->btn_back, SIGNAL(clicked(bool)), this, SLOT(slot_btnBack_clicked()) );
    connect(&tcp_socket, SIGNAL(connected()), this, SLOT(slot_connectEstablished()) );
    connect(&tcp_socket, SIGNAL(disconnected()), this, SLOT(slot_diconnectedCompleted()) );
    connect(&tcp_socket, SIGNAL(readyRead()), this, SLOT(slot_tcpsocketReaddata()) );
    connect(ui->btn_send, SIGNAL(clicked(bool)), this, SLOT(slot_btnSend_clicked()) );
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
    this->setWindowTitle("正在连接...");
    tcp_socket.connectToHost(input_ipaddr, input_port.toUShort());
    if( tcp_socket.waitForConnected(3000) ){
        qDebug() << "Connect succeed";
    }else{
        qDebug() << "Connect failed : " + tcp_socket.errorString();
        mbox.setText("Connect failed : " + tcp_socket.errorString());
        mbox.exec();
    }
    this->setWindowTitle("TCP客户端调试工具");
}

/* 槽函数 按钮btn_disconnect 点击 触发 */
void transferPage::slot_btnDisconnect_clicked(){
    tcp_socket.disconnectFromHost();
    if( tcp_socket.waitForDisconnected() ){
        qDebug() << "Disconnected succeed.";
    }else{
        qDebug() << "Disconnected failed : " + tcp_socket.errorString();
    }
}

/* 槽函数 发送数据 由发送按钮点击触发 */
void transferPage::slot_btnSend_clicked(){
    int i = 0;
    QString str = ui->textedit_input->toPlainText();
    ui->textedit_input->clear();
//  QTextCodec *codec = QTextCodec::codecForName("GBK");    //指定转换的字符编码
//  QByteArray barr =  codec->fromUnicode(str);             //UTF-8(unicode) -> GBK
    tcp_socket.write(str.toLocal8Bit());
    tcp_socket.waitForBytesWritten(100);
    for( ; i < ui->comboBox_sendtimes->currentText().toInt() - 1 ; i++ ){
        tcp_socket.write(str.toLocal8Bit());
    }
    ui->textedit_output->append( QDateTime::currentDateTime().toString("hh:mm:ss") + \
                                " 发送数据：" + str + "[" + QString::number(i+1) + "次]" );
}

/* 槽函数 接收数据 由QTcpSocket对象的readyread信号触发 */
void transferPage::slot_tcpsocketReaddata(){
    QTextCodec *codec = QTextCodec::codecForName("GBK");
    QString str = codec->toUnicode(tcp_socket.readAll());
    ui->textedit_output->append( QDateTime::currentDateTime().toString("hh:mm:ss") + \
               " 接收数据：" + str );
}

/* 槽函数 连接建立触发的行为 由QTcpSocket对象的connected信号触发 */
void transferPage::slot_connectEstablished(){
    ui->label_socket_status->setText("已连接");
    ui->btn_connect->setDisabled(true);
    ui->btn_disconnect->setEnabled(true);
    ui->btn_send->setEnabled(true);
    ui->btn_back->hide();
    ui->label_local_port->setText( QString::number(tcp_socket.localPort()) );
}

/* 槽函数 断开连接触发的行为 由QTcpSocket对象的disconnected信号触发 */
void transferPage::slot_diconnectedCompleted(){
    ui->label_socket_status->setText("已断开");
    ui->btn_connect->setDisabled(false);
    ui->btn_disconnect->setEnabled(false);
    ui->btn_send->setEnabled(false);
    ui->btn_back->show();
    ui->label_local_port->clear();
}

void transferPage::slot_btnBack_clicked(){
    emit signal_backto_input();
    this->close();
}

transferPage::~transferPage(){
    delete ui;
}
