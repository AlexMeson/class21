#include "mywidget.h"
#include "ui_mywidget.h"

#define ERROR_ITEM(INT)   arr.at(INT).toString()

myWidget::myWidget(QWidget *parent) : QWidget(parent) , ui(new Ui::myWidget){
    ui->setupUi(this);

    QFile qfile("../json_demo/json/xxx.json");

    if( qfile.open(QIODevice::ReadOnly) ){
        qDebug() << "Open file succeed." ;
        /* 读取文件数据 进行Json解析 */
        QByteArray barr =  qfile.readAll();

        /* 如果要对一篇Json数据进行解析 首先需要将数据转换成一篇Json文档 检查格式 */
        /* fromJson(const QByteArray &json, QJsonParseError *error = nullptr) */
        QJsonParseError err;
        QJsonDocument   doc = QJsonDocument::fromJson(barr, &err);
        if( err.error != QJsonParseError::NoError ){    /* 解析出错 */
            qDebug() << "Json analyze failed : " + err.errorString() ;
        }else{
            /* 格式无误 将文档所有内容转换为一个Json对象 逐步进行解析 */
            /* QJsonDocument中 object()方法能够将文档内容转换为一个JsonObject返回 */
            QJsonObject obj = doc.object() ;
            /* QJsonObject类中 value()方法用来根据键名获取值 */
            /* QJsonObject类中 contains()方法用来检查键值对中是否有目标键 */
            if( obj.contains("error") ){
                if( obj.value("error").isNull() ){
                    qDebug() << "当前位置 : " + \
                             obj.value("pro").toString() + \
                             obj.value("city").toString() + \
                             obj.value("region").toString() << \
                             obj.value("regionCode").toInt() ;
                }else{
//                    QJsonArray arr = obj.value("error").toArray();
//                    //qDebug() << arr.at(0).toString() + arr.at(1).toString();
//                    qDebug() << ERROR_ITEM(0) + ERROR_ITEM(1);
                }
            }
        }
        qfile.close();
    }else{
        qDebug() << "Open file failed : " + qfile.errorString();

    }
}

myWidget::~myWidget(){
    delete ui;
}

