#ifndef REPLYTIMEOUT_H
#define REPLYTIMEOUT_H

#include <QObject>
#include <QTimer>
#include <QNetworkReply>

/* 网络回复超时处理类 */
class ReplyTimeout : public QObject {
    Q_OBJECT
public:
    ReplyTimeout(QNetworkReply *reply, const int timeout) : myreply(reply) {
        if( reply && reply->isRunning() ){
            /* 在经过timeout毫秒后, 触发超时处理事件 */
            QTimer::singleShot(timeout, this, &ReplyTimeout::slot_onTimeout);
        }
    }
private:
    QNetworkReply *myreply;
signals:
    void sig_timeout();
private slots:
    void slot_onTimeout(){
        if( myreply->isRunning() ){
            myreply->abort();
            myreply->deleteLater();
            qDebug() << "timeout";
            emit sig_timeout();
        }
    }
};

#endif // REPLYTIMEOUT_H
