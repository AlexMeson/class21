#include <iostream>
#include <string>
#include <string.h>

using namespace std;

void xxxxx(int x){
	cout << x << endl;
}

struct CC {
	int a;
	void (*output)(int);
};

class CXX{
public:
	CXX(int val){
		a = val;
	}
	void output(){
		cout << a << endl;
	}
	int a;
};

int main(){

	struct CC x1 = {
		.a = 78,
		.output = xxxxx,
	};
	CXX      x2(12);

	x1.output(x1.a);
	x2.output();


//	char    s1[] = "Hello world!This is a string.!!!!!!!!!!!!!!!!!!";
//	string  s2   = "Hello world!This is a string.!!!!!!!!!!!!!!!!!!";
//
//	cout << "size of s1 : " << sizeof(s1) << endl;
//	cout << "size of s2 : " << s2.size() << endl;
//
//
//	cout << "length of s1 : " << strlen(s1) << endl;
//	cout << "length of s2 : " << s2.length() << endl;

	return 0;
}
