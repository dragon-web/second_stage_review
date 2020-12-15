#include <stdio.h>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <string.h>
#include <iostream>
#include <sstream>
#include <pthread.h>

using namespace std;

void* Start(void *arg)
{
    int sockfd = *(int*)(arg);
    while(1)
    { 

        char buf[1024] = {0};
        int ret = recv(sockfd,buf,sizeof(buf)-1,0);
        if(ret < 0)
        {
            perror("recv");
            close(sockfd);
            delete (int*)(arg);
            return NULL;
        }
        else if(ret == 0)
        {
            printf("cil sockfd shundown\n");
            close(sockfd);
            delete (int*)(arg);
            return NULL;
        }
        printf("cli:%s",buf);

        //<html>hello bite 84</html>
        //首行首行
        //响应报头
        //空行
        //响应体
        std::string body = "<html><b>Shoot me</b>";
        body += "<body>";
        body +=  "<img src=";
        body += "\"";
        body += "/home/flf/second_stage_review/day_12_15/duge.jpg";
        body += "\"";
        body+= " width=";
        body+="250px";
        body += " height=";
        body += "200px";
        body += " alt=";
        body += "\"xiang wo kai pao\"";
        body += "/>";
        body += "</body>";
        body += "</html>";
        std::stringstream ss;
        ss << "HTTP/1.1 200 OK\r\n";
        ss << "Content-Type: text/html\r\n";
        ss << "Content-Length: "<<body.size()<<"\r\n";
        ss << "\r\n";
        ret = send(sockfd,ss.str().c_str(),ss.str().size(),0);
        if(ret < 0)
        {
            perror("send");
            close(sockfd);
            delete (int*)(arg);
            return NULL;
        }
        ret = send(sockfd,body.c_str(),body.size(),0);
        if(ret < 0)
        {
            perror("send");
            close(sockfd);
            delete (int*)(arg);
            return NULL;
        }
        ss.clear();
        ss.str() = "";
    }
       delete (int*)(arg);
       close(sockfd);
}

int main()
{
    int listen_sock = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
    if(listen_sock < 0)
    {
        perror("socket");
        return -1;
    }
    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_port = htons(80);
    addr.sin_addr.s_addr = inet_addr("0.0.0.0");

    int ret = bind(listen_sock,(struct sockaddr*)&addr,sizeof(addr));
    if(ret < 0)
    {
        perror("bind");
        close(listen_sock);
        return -1;
    }
    ret = listen(listen_sock,10);
    if(ret < 0)
    {
        perror("listen");
        close(listen_sock);
        return -1;
    }
    while(1)
    {
        int sockfd = accept(listen_sock,NULL,NULL);
        if(sockfd < 0)
        {
            perror("accept");
            close(listen_sock);
            return -1;
        }
        int *p = new int();
        *p = sockfd;
        pthread_t tid;
        ret = pthread_create(&tid,NULL,Start,(void*)p);
        if(ret < 0)
        {
            perror("pthread_create"); 
            delete p;
            return -1;
        }
    }
    close(listen_sock);
    return 0;
}

