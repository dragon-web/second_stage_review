#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

void func(void)
{
  printf("i am func\n");
}

int main()
{
  atexit(func);
  printf("__begin__\n");
  //fflush(stdout);
  //_exit(2);
  printf("__end__\n");
  return 0;
}
