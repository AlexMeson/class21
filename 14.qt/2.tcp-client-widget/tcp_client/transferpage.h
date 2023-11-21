#ifndef TRANSFERPAGE_H
#define TRANSFERPAGE_H

#include <QWidget>

namespace Ui {
class transferPage;
}

class transferPage : public QWidget
{
    Q_OBJECT

public:
    explicit transferPage(QWidget *parent = nullptr);
    ~transferPage();

private:
    Ui::transferPage *ui;
};

#endif // TRANSFERPAGE_H
