#include "ChatServer.hpp"

int main()
{
    ChatServer* cs = new ChatServer();
    if(!cs)
    {
        printf("Init Server failed\n");
        return -1;
    }
    cs->InitSvr();
    cs->Start();

    return 0;
}
