#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>

int main()
{
  pid_t pid = fork();
  if(pid < 0)
  {
    perror("Fork");
  }
 else if(pid == 0)
  {
    int count = 20;
    while(1)
    {
      printf("I am chhild pid = [%d],ppid = [%d]\n",getpid(),getppid());
    }
  }
 else 
 { 
   int status;
   wait(&status);
     while(1)
       {
      printf("I am chhild pid = [%d],ppid = [%d]\n",getpid(),getppid());
      sleep(1);
       }
 }

  return 0;
}
