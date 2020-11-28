#include<stdio.h>

struct One
{
  double x;
  char a;
  int b;
};
int main()
{
  //int a;
  float b,c;
  //scanf("%2d%3f%4f",&a,&b,&c);
  //printf("a = %d,b = %d,c = %f",a,b,c);
  //struct One p;
  //printf("\n%d\n",sizeof(p));
  int x = 1;
  do{
    printf("%d\n",x++);
  }while(x--);
  return 0;
}
