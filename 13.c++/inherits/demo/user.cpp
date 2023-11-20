#include "user.h"

super_user::super_user(){

}
super_user::super_user(string name, unsigned int level){
    user_name = name;
    user_level = level;
}

/* 构造函数 */
user::user(){

}

user::~user(){

}

/* 构造函数 传入参数为成员赋初值 */
user::user(string name, unsigned int level){
    user_name = name;
    user_level = level;
}

void user::outputData(){
    cout << "name  : " << this->user_name  << endl;
    cout << "level : " << this->user_level << endl;
}

void user::setData(string name, unsigned int level){
    user_name = name;
    user_level = level;
}
