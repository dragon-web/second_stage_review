#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
void TestThread(void* arg)
{
    
}

int main()
{
    pthread_t tid[2];
   for(int i = 0;i < 2;++i)
   {
    if(pthread_create(&tid[i],NULL,TestThread,NULL) == 0)
    {
        printf("Create Success\n");
    }
}
}
