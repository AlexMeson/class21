#include "inputpage.h"
#include "transferpage.h"

#include <QApplication>
#include <QObject>

int main(int argc, char *argv[]){

    QApplication a(argc, argv);

    inputPage    input_page;
    transferPage trans_page;

    QObject::connect(&input_page, SIGNAL(signal_display_transferpage()), \
                     &trans_page, SLOT(show()) );

    input_page.show();

    return a.exec();
}
