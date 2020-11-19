#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>


/*
int main(int argc ,char* argv[],char* env[])
{
  // argc :命令行参数的个数
  // argv :命令行参数的内容
  // env:环境变量
 printf("argc is %d\n",argc);
 int i = 0;
 for(i = 0;i < argc;++i)
 {
   printf("%s\n",argv[i]);
 }
 return 0;
}
int main()
{
  printf("I am test\n");
  

  return 0;
}*/


int main()
{
  printf("------begin----------\n");
  execl("./test","test","a","b","c",NULL);
  printf("------end----------\n"); 
  return 0;
}
