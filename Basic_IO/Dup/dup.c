#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
  int fd = open("./hello",O_RDWR|O_CREAT,0664);
  if(fd < 0)
  {
    perror("open");
    return -1;
  }
  dup2(fd,1);
  printf("dup\n");
  write(1,"hahaha",6);
  return 0;
}
