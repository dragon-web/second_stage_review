#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
  int fd[2];
  int ret = pipe(fd);
  if(ret < 0)
  {
    perror("pipe");
    return -1;
  }
  int flag =  fcntl(fd[0],F_GETFL);
  printf("fd[0] = %d\n",fd[0]);
  printf("fd[1] = %d\n",fd[1]);
}
