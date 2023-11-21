#include <iostream>
#include "user.h"

using namespace std;

class xxx{
public:
    //explicit 防止有参函数发生隐式类型转换
//    explicit xxx(int n1, int n2, int n3){
//        a = n1;
//        b = n2;
//        c = n3;
//    }
    /* 构造函数形参初始化列表 */
    explicit xxx(int n1, int n2, int n3) : a(n1), b(n2), c(n3){
    }
    int a;
    int b;
    int c;
};

/* 主函数 */
int main(){

    xxx obj(78,45,12);


    return 0;
}

/*
    类中的成员
        使用public修饰的成员称为 公开成员 在类外部允许访问
        使用private\protected修饰成员 称为私有成员\受保护成员 在类外部不允许访问

    继承时 使用修饰符修饰继承类型
        public    公有继承 -- 父类中的成员属性在子类中不变
        protected 保护继承 -- 父类中的公有成员属性在子类中变为受保护的
        private   私有继承 -- 父类中的成员属性在子类中均为私有属性

但无论哪种继承方式，下面两点都没有改变:
1.private 成员只能被本类成员（类内）和友元访问, 不能被派生类访问;
2.protected 成员可以被派生类访问

*/
