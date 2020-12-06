#include <iostream>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

void* Test(void* arg)
{
    int res = *(int*)arg;
    cout << "The Thread is:" << res <<endl;
}

int main()
{
    pthread_t tid[4];
    for(int i = 0;i < 4; ++i)
    {
        int res =  pthread_create(&tid[i],NULL,Test,(void*)&i);
        if(res < 0)
        {
            perror("pthread_create");
            return -1;
        }
        else{
            printf("I am thread\n");
        }
    }
    for(int j = 0;j < 4;++j)
    {
        pthread_join(tid[j],NULL); 
    }


    return 0;
} 
