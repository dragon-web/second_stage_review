#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void sigcb(int signumber)
{
  printf("signumber is %d\n",signumber);
}
int main()
{
  signal(2,sigcb);
  signal(40,sigcb);
  sigset_t newset,oldset;
  sigfillset(&newset);//比特位全部设置为1,阻塞掉
  sigprocmask(SIG_SETMASK,&newset,&oldset);
  sigemptyset(&oldset); //设置成全0
  sigprocmask(SIG_SETMASK,&oldset,NULL);
  // 观察2号信号调用了几次sigcb 40号信号调用了几次sigcb
  while(1)
  {
    sleep(1);
  }
  return 0;
}
