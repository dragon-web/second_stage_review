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
#include "UserManager.hpp"
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
        void *GetServer()
        {
            server = this;
            return server;
        }
    private:
        int new_sock;
        void *server; //保存this指针，线程入口函数可以获取用户管理模块的指针
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
            user_manager_ = new UserManger();
            if(!user_manager_)
            { Log(INFO,__FILE__,__LINE__,temp) << endl;}

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
        TcpConnect* tc = new TcpConnect();
        tc->SetSockFd(new_sock);
        tc->GetServer();
    

                pthread_t tid;
                
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
        ChatServer* cs = (ChatServer*)tc->GetServer();
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
        int resp_status = -1;
        switch(ques_type)
        {
            case REGISTER_RESQ:  // 处理注册请求
                {
                   resp_status = cs->DealRegisterinfo(tc->GetSockFd()); 
                   
        
                    break;
                }
            case LOGIN_RESQ:   //处理登录请求
                {
                    break;
                }
        struct ReplyInfo ri;

        }
        return 0;
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
    int ret =  user_manager_->DealRegister(ri.nick_name_,ri.school_,ri.password_);
    if(ret < 0)
    {
        return REGISTER_FAILED;
    }
    return REGISTER_SUCCESS;
    }

    int DealLogin()
    {
        
    }
    private:
        int tcp_sock;
        int udp_sock;
        uint16_t tcp_port;

        UserManger* user_manager_;
};

