#include <iostream>
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>

#define THREAD_COUNT 4

struct Thread_Data
{
    int num_;
    Thread_Data()
    {
        num_ = -1;
    }
};
int g_tickets = 100;
void *ThreadStart(void *arg)
{
    pthread_detach(pthread_self());
    Thread_Data* td = (Thread_Data*)arg;
    while(1)
    {
        if(g_tickets > 0)
        {
            printf("I am %p--- %d , I have g_tickets %d\n",pthread_self(),g_tickets);
            g_tickets--;
        }
        else{
            delete td;
            break;
        }
        printf("I am work thread:%d\n",td->num_);
        sleep(1);
    }
    delete td;
}

int main()
{
    pthread_t tid[THREAD_COUNT];
    for(int i = 0; i < THREAD_COUNT; i++)
    {
        struct Thread_Data* td = new Thread_Data;
        td->num_ = i;
        int ret = pthread_create(&tid[i], NULL, ThreadStart,(void*)td); 
        if(ret < 0)
        {
            perror("pthread_create");
            return -1;
        }
    }
    while(1)
    {
        printf("i am main thread\n");
        sleep(1);
    }
}
