#include <iostream>

using namespace std;

class stu{
private:
	/* attr */
	string stu_name;
	double stu_score;
public:
	/* method */
	/* 构造函数 - 对象生命周期开始时自动调用 名称与类名同名 可以被重载 可有传参数 无返回值 */
	stu(){
		cout << "Object life begin." << endl;
	}
	stu(string name){
		stu_name = name;
		cout << stu_name + "life begin." << endl;
	}
	/* 析构函数 - 对象生命周期结束时自动调用 名称是"~类名"  不可被重载 不可传参 无返回值 */
	~stu(){
		cout << stu_name + "life over." << endl;
	}
	void setData(string name, double score){
		stu_name  = name;
		stu_score = score;
	}
	void getData(){
		cout << "stu name  : " +  stu_name  << endl;
		cout << "stu score : " << stu_score << endl;
	}
	void hello();
};

/* 类内部定义的方法 单独实现 函数前要加类名限定符 表示该函数实现是某个类中的函数实现而不是独立的 */
void stu::hello(){
	cout << "Hello student!" << endl;
}

void hello(){
	cout << "Hello world!" << endl;
}


int main(){

//	stu x1("AAA ");
//	stu x2("BBB ");
//	stu x3("CCC ");

	stu *x1 = new stu("AAA ");
	stu *x2 = new stu("BBB ");
	stu *x3 = new stu("CCC ");

	delete x2;
	delete x3;
	delete x1;
	
	return 0;
}

/*
使用关键字class <类名称>定义类
class typename{
	//属性
	//方法
};

在类中定义的成员和方法可以使用访问修饰关键字进行修饰
如果不进行指定 默认是私有的(private)

使用 public 修饰的成员 表示公开的成员 这些成员允许在类外被访问
使用 private 修饰的成员 表示私有的成员 这些成员不允许在类外被访问

使用protected修饰的成员 表示受保护的成员

构造函数传参

	类	对象(传递给构造函数参数)
	类   对象 = 类(传递给构造函数参数)					//拷贝构造函数

	类  *对象 = new 类(传递给构造函数参数)

*/
