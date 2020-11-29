#include<unistd.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>

int main()
{
  umask(0);
  /*int fd1 = open("./Test1",O_WRONLY|O_CREAT,0644);
  printf("%d\n",fd1);
  close(fd1);*/
 char buf[32];
 ssize_t s = read(0,buf,31);
 if(s > 0)
 {
   buf[s] = 0;
   printf("buf : %s\n",buf);
 }

  return 0;
}
