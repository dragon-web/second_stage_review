#include<iostream>
#include<unistd.h>

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
    while(1)
    {
    printf("I am child,pid = %d,ppid = %d\n",getpid(),getppid());
    sleep(1);
    }
  }
  else 
  {
    printf("I am father,pid = %d,ppid = %d\n",getpid(),getppid());
    sleep(1);
  }


  return 0;
}
