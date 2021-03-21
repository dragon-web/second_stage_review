#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <pthread.h>
#include <stdio.h>

using namespace std;

void* TestRead(void* arg);

void* TestWrite(void* arg);

int fd[2];
int main()
{
    int ret = pipe(fd);
    if(ret < 0)
    {
        perror("pipe");
        return -1;
    }
    pthread_t tid[2];
    for(int i = 0; i < 2;++i)
    {
        int res = pthread_create(&tid[i],NULL,(void*)TestRead,NULL);
        if(res < 0)
        {
            perror("pthread_create");
            return -1;
        }
        printf("Create down\n");
    }
    return 0;
}

void* TestRead(void* arg)
{
   char buf[10];
   read(fd[0],buf,10);
   printf("%s\n",buf);
   printf("Read over\n");
}

void* TestWrite(void* arg)
{
    write(fd[1],"Begin",5);
    printf("Write down:");
}

