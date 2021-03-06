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
#include "ConnectInfo.hpp"
#include "tools.hpp"
#define TCP_PORT 8086

class TcpConnect
{
    public:
        TcpConnect()
        {
            new_sock = -1;
        }
        ~TcpConnect()
        {}
        void SetSockFd(int fd)
        {
            new_sock = fd;
        }
        int GetSockFd()
        {
            return new_sock;
        }
    private:
        int new_sock;
};




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
            string temp = "listen port is 8086";
            Log(INFO,__FILE__,__LINE__,temp) << endl;
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
                TcpConnect *tc = new TcpConnect();
                tc->SetSockFd(new_sock);
                
                int ret = pthread_create(&tid,NULL,LoginRegisterStart,(void*)tc);
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
         pthread_detach(pthread_self());    
        TcpConnect *tc = (TcpConnect*)arg;
        char ques_type = '\0';
       ssize_t recv_size = recv(tc->GetSockFd(),&ques_type,1,0);
        if(recv_size < 0)
        {
            close(tc->GetSockFd());
            return NULL;
        }
        else if(recv_size == 0) 
        {
            close(tc->GetSockFd());
            return NULL;
        }
        switch(ques_type)
        {
            case REGISTER_RESQ:  // 处理注册请求
                {

                    break;
                }
            case LOGIN_RESQ:   //处理登录请求
                {
                    break;
                }
           
        }

        }


    int DealRegisterinfo(int new_sock)
    {
        struct RegisterInfo ri;
       ssize_t recv_size =  recv (new_sock,&ri,sizeof(ri),0);
        if(recv_size < 0)
        {
            return -1;
        }
        else if(recv_size == 0){
        close(new_sock);
        return -2;
        }
        //正常接受到,将数据递交到用户管理模块
        
    }

    int DealLogin()
    {
        
    }
    private:
        int tcp_sock;
        int udp_sock;
        uint16_t tcp_port;
};

