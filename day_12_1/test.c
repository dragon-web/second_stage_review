#include<stdio.h>

int main()
{
  int a = 1,b = 0,c = -1, d = 0;
  d = ++a||++b&&++c;
  printf("%d\n",d);
  return 0;
}
