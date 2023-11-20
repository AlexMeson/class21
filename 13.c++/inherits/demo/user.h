#ifndef _USER_H
#define _USER_H

#include <iostream>
#include <string>

using namespace std;

class user{
public:
    user();     //构造函数
    user(string name, unsigned int level);
    ~user();
    void outputData();
    void setData(string name, unsigned int level);
    string       user_name;
    unsigned int user_level;
private:

protected:

};
/* 类 可以继承自另一个类 二者的关系是派生类:基类 (子类:父类) */
/* class 子类名 : 修饰符 父类名 */
class super_user : public user{
public:
    super_user();
    super_user(string name, unsigned int level);
};

#endif // _USER_H
