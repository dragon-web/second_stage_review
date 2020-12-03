#include<stdio.h>
#include<unistd.h>

int main()
{
  int fd[2];
 int ret =  pipe(fd);
  if(ret < 0)
  {
    perror("pipe");
    return -1;
  }
  printf("fd[0]:%d\n",fd[0]); 
  printf("fd[1]:%d\n",fd[1]);
  pid_t pid = fork();

  if(pid < 0)
  {
    perror("fork");
    return -1;
  }
  else if (pid == 0)
  {
    write(fd[1],"I love linux",12);
  }
  else 
  {
    sleep(5);
    char buf[1024] = {0};
    read(fd[0],buf,sizeof(buf)-1);
    printf("I am father:buf is %s\n",buf);
  }
  while(1)
  {
    sleep(1);
  }

  return 0;
}
