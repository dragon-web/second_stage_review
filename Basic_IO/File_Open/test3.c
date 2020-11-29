#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
  int ret = open("./Test_Open.txt",O_RDWR | O_CREAT,0664);
  if(ret < 0)
  {
    perror("open");
    return -1;
  }
  printf("file open ret = %d\n",ret);
  char buf[10] = {0};
  read(ret,buf,sizeof(buf)-1);
  printf("buf = %s\n",buf);
  while(1)
  {
    sleep(1);
  }
  return 0;
}
