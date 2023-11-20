#include "client.h"

using namespace std;

client::client(unsigned short port, string ipv4_str){
	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	memset(&server_addr, 0x00, sizeof(server_addr));
	server_addr.sin_family      = AF_INET;
	server_addr.sin_port        = htons(port);	//Port
	server_addr.sin_addr.s_addr = inet_addr(ipv4_str.c_str());	//IP-address
	connectToHost();
}

client::~client(){
	close(sockfd);
}

/* ���� */
void client::connectToHost(){
	connect(sockfd, (const struct sockaddr *)&server_addr, sizeof(server_addr));
}
/* �Ͽ����� */
void client::disconnectFromHost(){
	close(sockfd);
}
/* ������Ϣ */
void client::sendData(string msg){
	send(sockfd, msg.c_str(), msg.length(), 0);
} 
/* ������Ϣ */
string client::recvData(){
	char data[1024] = {0};
	recv(sockfd, data, sizeof(data), 0);
	return string(data);
}
