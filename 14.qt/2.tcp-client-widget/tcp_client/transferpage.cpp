#include "transferpage.h"
#include "ui_transferpage.h"

transferPage::transferPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::transferPage)
{
    ui->setupUi(this);
}

transferPage::~transferPage()
{
    delete ui;
}
