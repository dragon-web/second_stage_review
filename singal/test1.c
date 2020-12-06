#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>
void sigoc(int signo)
{
  printf("signo is %d\n",signo);
}

int main()
{
  signal(17,sigoc);
  pid_t pid = fork();
  if(pid < 0)
  {
    perror("fork");
    return -1;
  }
  else if(pid == 0)
  {
    printf("This is child\n");
    _exit(0);
  }
    else if(pid > 0)
    {
      while(1){}
     printf("This is father\n");
    }
    return 0;
}
