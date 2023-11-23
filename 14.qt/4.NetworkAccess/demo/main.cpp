#include "mypage.h"

#include <QApplication>

int main(int argc, char *argv[]){

    QApplication a(argc, argv);

    myPage w;
    w.show();

    return a.exec();
}
