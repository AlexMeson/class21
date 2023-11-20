#include <iostream>

using namespace std;

void swap(int &x, int &y){
	int tmp;
	tmp = x, x = y, y = tmp;
}

int main(){

	int a = 789;
	int b = 111;
	int &p = b;
	p = 333;
	p = a;
	//p = 222;

	cout << "a = " << a << ", b = " << b << endl;
	swap(a, b);

	cout << "a = " << a << ", b = " << b << endl;

	return 0;
}
