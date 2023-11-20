#include <iostream>

namespace meson{
	int a = 444;
	namespace alex{
		int a = 555;
	};
};

//using namespace std;	//使用标准命名空间
using namespace meson;

//已经使用using 引入了一个命名空间的内容 使用其命名空间下的内容 可以不带限定符
//如果不合理的进行空间引用或限定符操作 会使程序出现二义性 编译器不清楚如何选择

int a = 789;

int main(){

	//int a = 19;

	// ::	空间限定符 常用来指示一个命名空间或类下的标识符
	// 直接使用限定符 表示对应的标识符变量取全局数据区域的数据

	std::string k;

	std::cout << "a = " << ::a << std::endl;
	std::cout << "a = " << meson::a << std::endl;
	std::cout << "a = " << alex::a << std::endl;

	return 0;
}
