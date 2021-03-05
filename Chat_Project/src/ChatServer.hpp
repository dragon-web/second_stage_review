#pragma once 
#include <stdio.h>
#include <unistd.h>
#include <string>
#include <iostream>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <pthread.h>
#define TCP_PORT 8086

class ChatServer
{
    public:
        ChatServer()
        {
            tcp_sock = -1;
            tcp_port = TCP_PORT;
        }
        ~ChatServer()
        {

        }
        /*初始化变量的接口*/ 

        int InitSvr(uint16_t tcp_port = TCP_PORT)
        {
            tcp_sock = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
            if(tcp_sock)
            {
                return -1;
            }
            struct sockaddr_in addr;
            addr.sin_family = AF_INET;
            addr.sin_port = htons(tcp_port);
            addr.sin_addr.s_addr = inet_addr("0.0.0.0");
            int ret = bind(tcp_sock,(struct sockaddr*)&addr,sizeof(addr));
            if(ret < 0)
            {
                return -2;
            }
            ret = listen(tcp_sock , 5);
            if(ret < 0)
            {
                return -3;
            }

            return 0;
        }
        //启动线程
        int Start()
        {
            struct sockaddr_in peer_addr;
            socklen_t peer_addrlen = sizeof(peer_addr);
            while(1)
            {
                int new_sock = accept(tcp_sock,(struct sockaddr*)&peer_addr,&peer_addrlen);
                if(new_sock < 0)
                {
                    continue;
                }
                pthread_t tid;
                int ret = pthread_create(&tid,NULL,LoginRegisterStart,NULL);
                if(ret < 0)
                {

                }

            }
        }

    private:
        static void* LoginRegisterStart(void* arg)
        {
            //注册
            //登录
        }
    private:
        int tcp_sock;
        int udp_sock;
        uint16_t tcp_port;
};

