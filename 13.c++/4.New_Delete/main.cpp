#include <iostream>

using namespace std;

struct xxxx{
	string str;
	int    num;
	double dbl;
};


/* 主函数 */
int main(){

//  指针类型 标识符 = new 类型(初值) ;
//	使用new为数组进行动态内存分配时不允许赋初值

	struct xxxx *p = new (struct xxxx)({"This is a string.", 789, 123.456});

	cout << "str = " +  p->str << endl;
	cout << "num = " << p->num << endl;
	cout << "dbl = " << p->dbl << endl;

	delete p;

	return 0;
}
