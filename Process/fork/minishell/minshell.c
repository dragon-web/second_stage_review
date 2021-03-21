#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<memory.h>
// 创建子进程  进程程序替换 进程等待
char get_Commmand[1024];

int GetCommand()
{
  printf("[minishell@localhost minishell]");
  fflush(stdout);
  memset(get_Commmand,'\0',sizeof(get_Commmand));
 if(fgets(get_Commmand,sizeof(get_Commmand)-1,stdin) == NULL)
 {
   perror("fgets error");
   return -1;
 }
 printf("%s\n",get_Commmand);
 return 0;
}

int DealCommand(char *command)
{
  // ls -al  可执行程序 + 命令行参数
  while(*command)
  {
    if(isspace(*command)&&command != '\0')
    {

    }
  }
  
}


int main()
{
  while(1)
  {
  if(GetCommand() == -1)
  {
    continue;
  }
  }
  return 0;
}
