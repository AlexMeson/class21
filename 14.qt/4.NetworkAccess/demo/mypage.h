#ifndef MYPAGE_H
#define MYPAGE_H

#include <QWidget>
#include <QString>
#include <QByteArray>
#include <QDebug>

#include <QNetworkAccessManager>    /* 网络访问管理中心类 */
#include <QNetworkRequest>          /* 网络请求 */
#include <QNetworkReply>            /* 网络回复 */
#include <QUrl>
#include <QSslSocket>
#include <QTextCodec>

QT_BEGIN_NAMESPACE
namespace Ui { class myPage; }
QT_END_NAMESPACE

class myPage : public QWidget{
    Q_OBJECT

public:
    myPage(QWidget *parent = nullptr);
    ~myPage();
    QNetworkAccessManager *pnet_manager;

private:
    Ui::myPage *ui;

private slots:
    void slot_getReply();
};
#endif // MYPAGE_H
