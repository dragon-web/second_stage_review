#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main()
{
  printf("begin-----------------\n");
  pid_t ret = fork();
  if(ret < 0)
  {
    perror("fork");
    return 0;
  }
  else if(ret == 0)
  {
    {
      printf("I am child,pid = %d,ppid = %d\n",getpid(),getppid());
      sleep(1);
      exit(10);
    }
  }
  else 
  {
    {
    printf("I am father,pid = %d,ppid = %d\n",getpid(),getppid());
      sleep(1);
      int status;
     wait(&status);
     printf("exit_code : %d\n",(status >> 8)&0xFF);
    }
  }


  return 0;
}
