#include <iostream>

using namespace std;

class xxx {
public:
	xxx(){
		cout << "普通构造函数" << endl; 
		a = new int; 
	}
	xxx( const xxx &p ){	/* 拷贝构造函数通常使用引用变量 */
		cout << "拷贝构造函数" << endl; 
		a = new int;
		*a = *p.a;
	}
	int *a;
};

int main(){

	xxx *i = new xxx;
	*i->a = 789;
	xxx j(*i);		//不能使用浅拷贝(仅进行值传递) 使用深拷贝函数 
	*i->a = 123;

	cout << *j.a << endl;
	
//	xxx k = xxx(j);		xxx k(j);		xxx k = j;

	delete i;
	return 0;
}

/*
	构造函数 即使定义类时 未编写构造函数 编译器也会自动生成构造函数
	 
	拷贝构造函数
		行为: 将老对象中数据成员的值一一赋给新对象的数据成员 		
		
*/
