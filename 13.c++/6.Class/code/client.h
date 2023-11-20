#ifndef _CLIENT_H
#define _CLIENT_H

#include <string>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>

using namespace std;

/* �ͻ����� */
class client {
private:	/* ˽������ */
	int sockfd;
	struct sockaddr_in server_addr;
	struct sockaddr_in local_addr;
public:		/* �����ķ��� */
	client(unsigned short port, std::string ipv4_str);	/* ���캯�� */
	~client();											/* �������� */
	void connectToHost();			/* ���� */	
	void disconnectFromHost();		/* �Ͽ����� */
	void sendData(std::string msg);	/* ������Ϣ */
	std::string recvData();			/* ������Ϣ */
};

#endif /* _CLIENT_H */
