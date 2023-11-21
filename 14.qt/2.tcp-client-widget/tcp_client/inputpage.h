#ifndef INPUTPAGE_H
#define INPUTPAGE_H

#include <QDebug>
#include <QFont>
#include <QMessageBox>
#include <QString>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class inputPage; }
QT_END_NAMESPACE

class inputPage : public QWidget{
    Q_OBJECT

public:
    /* attribute */
    QMessageBox mbox;
    QFont       font;
    /* method */
    inputPage(QWidget *parent = nullptr);
    ~inputPage();

private:
    Ui::inputPage *ui;

private slots:
    void slot_btn_confirm_clicked();

signals:
    void signal_display_transferpage();
};
#endif // INPUTPAGE_H
