#include <iostream>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

void* Test(void* arg)
{
    int res = *(int*)arg;
    cout << res <<endl;
    cout << "haha" <<endl;
}

int main()
{
    pthread_t tid;
    for(int i = 0;i < 4; ++i)
    {
        int res =  pthread_create(&tid,NULL,Test,(void*)&i);
        if(res < 0)
        {
            perror("pthread_create");
            return -1;
        }
        else{
            printf("I am thread\n");
        }
        sleep(1);
    }


    return 0;
} 
