#include <iostream>
#include "client.h"

using namespace std;

int main(){

	client x1(60000, "192.168.0.48");
	client x2(60000, "192.168.0.48");
	client x3(60000, "192.168.0.48");
	
	sleep(100);
	
//	x1.sendData("Hello , I'm client.\n");
//	cout << x1.recvData() << endl;
	
//	x1.disconnectFromHost();

	return 0;
}

