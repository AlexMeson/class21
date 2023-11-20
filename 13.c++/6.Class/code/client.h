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

/* 客户端类 */
class client {
private:	/* 私有属性 */
	int sockfd;
	struct sockaddr_in server_addr;
	struct sockaddr_in local_addr;
public:		/* 公开的方法 */
	client(unsigned short port, std::string ipv4_str);	/* 构造函数 */
	~client();											/* 析构函数 */
	void connectToHost();			/* 连接 */	
	void disconnectFromHost();		/* 断开连接 */
	void sendData(std::string msg);	/* 发送消息 */
	std::string recvData();			/* 接收消息 */
};

#endif /* _CLIENT_H */
