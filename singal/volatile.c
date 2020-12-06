#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

volatile int g_val = 1;

void sigcb(int signo)
{
  g_val = 0;
}
int main()
{
  signal(2,sigcb);
  while(g_val)
  {
    
  }
  
  return 0;
}
