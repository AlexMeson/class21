#ifndef TRANSFERPAGE_H
#define TRANSFERPAGE_H

#include <iostream>
#include <string>

#include <QWidget>
#include <QStringList>
#include <QString>
#include <QDebug>
#include <QTcpSocket>
#include <QMessageBox>
#include <QTextCodec>
#include <QByteArray>
#include <QDateTime>

namespace Ui {
class transferPage;
}

class transferPage : public QWidget{
    Q_OBJECT

public:
    explicit transferPage(QWidget *parent = nullptr);
    ~transferPage();

private:
    Ui::transferPage *ui;
    QTcpSocket        tcp_socket;
    QMessageBox       mbox;

public slots:
    void slot_display_page();
private slots:
    void slot_btnConnect_clicked();
    void slot_btnDisconnect_clicked();
    void slot_btnSend_clicked();
    void slot_btnBack_clicked();
    void slot_connectEstablished();
    void slot_diconnectedCompleted();
    void slot_tcpsocketReaddata();
signals:
    void signal_backto_input();
};

#endif // TRANSFERPAGE_H
