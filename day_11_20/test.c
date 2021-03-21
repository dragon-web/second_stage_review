#include<stdio.h>

void Swap(int *a , int *b)
{ 
  int temp = *a;
  *a = *b;
  *b = temp;
}


int main()
{
  int num1 = 12;
  int num2 = 3;
  Swap(&num1,&num2);
  printf("num1 = %d,num2 = %d\n",num1,num2);
  return 0;
}
