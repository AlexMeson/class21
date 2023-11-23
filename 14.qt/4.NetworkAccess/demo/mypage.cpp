#include "mypage.h"
#include "ui_mypage.h"
#include "replyTimeout.h"

myPage::myPage(QWidget *parent) : QWidget(parent) , ui(new Ui::myPage){
    ui->setupUi(this);

//     bool bSupp = QSslSocket::supportsSsl();
//     QString buildVersion = QSslSocket::sslLibraryBuildVersionString();
//     QString version = QSslSocket::sslLibraryVersionString();
//     qDebug() << bSupp << buildVersion << version;

    /* 初始化网络访问管理对象 */
    pnet_manager = new QNetworkAccessManager(this);
    QNetworkRequest request(QUrl("http://whois.pconline.com.cn/ip.jsp"));

    // 发起Get请求
    qDebug() << "GET " ;
    QNetworkReply *reply = pnet_manager->get(request);
    ReplyTimeout   replytimeout(reply, 10000);
    connect(&replytimeout, &ReplyTimeout::sig_timeout, this , [=](){
        /* 超时处理动作 */
    });

    connect(reply, &QNetworkReply::finished, this, [=](){
        QTextCodec *codec = QTextCodec::codecForName("GBK");
        QString result_string = codec->toUnicode(reply->readAll());
        int begin = result_string.indexOf("省") + 1;
        int over  = result_string.indexOf("市");
        result_string = result_string.mid(begin, over - begin);
        qDebug() <<  result_string ;
        reply->deleteLater();
    } );


    //connect(reply, &QNetworkReply::finished, this, &myPage::slot_getReply);
}

void myPage::slot_getReply(){
    /* QObject::sender() 将在槽函数中返回信号发送者的地址 */
    QNetworkReply * reply = (QNetworkReply *)sender();
    QTextCodec *codec = QTextCodec::codecForName("GBK");
    qDebug() << codec->toUnicode(reply->readAll());

    reply->deleteLater();   //释放空间
}

myPage::~myPage(){
    delete ui;
}

