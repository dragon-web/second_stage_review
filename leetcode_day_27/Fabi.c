#include<stdio.h>

int Fab(int n)
{
  if(n == 1 || n == 2)
  {
    return 1;
  }
  else{
    return Fab(n-1)+Fab(n-2);
  }
}
int main()
{
  int month;
 printf("请输入多少月后:\n");
 scanf("%d",&month);
 int res =  Fab(month);
 printf("%d月后兔子数量是%d\n",month,res);
  return 0;
}
