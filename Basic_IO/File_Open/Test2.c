#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
  umask(0);
  char buf[20];
  write(1,"hello",6);


  return 0;
}
