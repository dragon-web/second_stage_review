#include <stdio.h>

int func(int x)
{
  int count = 0;
  while(x)
  {
    count++;
    x&(x-1);
  }
  return count;
}

int main()
{
  int I = 1;
  if(I <= 0)
  {
    printf("%d\n",I);
  }
  else{
    printf("%%%%\n");
  }

  func(9999);
}
