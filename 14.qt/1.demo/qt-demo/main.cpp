#include "mypage.h"
#include <QApplication>
#include <QString>

/* 主函数 */
int main(int argc, char *argv[]){

    QApplication a(argc, argv); //进入Qt应用程序

    myPage my_page;   //界面对象

    my_page.show(); //my_page对象 调用方法show()进行显示

    return a.exec();
}
