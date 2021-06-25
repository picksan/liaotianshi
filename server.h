#ifndef SERVER_H
#define SERVER_H

#include "global.h"
class server{
    private:
        int server_port;//服务器端口号
        int server_sockfd;//设为listen状态的套接字描述符
        string server_ip;//服务器ip
        static vector<bool> sock_arr;//保存所有套接字描述符
    public:
        server(int port,string ip);//构造函数
        ~server();//析构函数
        void run();//服务器开始服务
        static void RecvMsg(int conn);//子线程工作的静态函数
};

#endif