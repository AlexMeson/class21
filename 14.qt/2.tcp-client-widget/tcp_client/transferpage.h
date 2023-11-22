#ifndef TRANSFERPAGE_H
#define TRANSFERPAGE_H

#include <QWidget>
#include <QStringList>
#include <QString>
#include <QDebug>
#include <QTcpSocket>
#include <QMessageBox>

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
signals:
    void signal_backto_input();
};

#endif // TRANSFERPAGE_H
