#include <iostream>
#include <limits.h>

using namespace std;

/* 函数重载 - 允许使用同一名称定义多个函数
   但是这些函数必须在形参个数或者形参类型上有区别
*/

/* 函数模板 template */

//template <typename v>

//v findMax(v a, v b, v c = 0){
//	return ((a > b) ? a : b) > c ? ((a > b) ? a : b) : c;
//}

int findMax(int a, int b, int c = INT_MIN){
	return ((a > b) ? a : b) > c ? ((a > b) ? a : b) : c;
}

//int findMax(int a, int b){
//	return ((a > b) ? a : b);
//}

int main(){

	cout << findMax(45,789,456) << endl;

	return 0;
}

/*
inline将一个函数定义为内置函数 对编译器是一个建议性的行为
inline int findMax(int a, int b){
	return (a > b) ? a : b;
}

*/
