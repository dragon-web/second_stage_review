#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void sigcb(int sigcb)
{
  printf("sigcb is : %d\n",sigcb);
}
int main()
{
  struct sigaction newact;
  newact.sa_handler = 
  sigaction(2,)


  return 0;
}
