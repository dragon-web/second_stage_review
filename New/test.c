#include <stdio.h>


void swap(int* num1,int* num2 )
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void swap1(int* num1,int* num2)
{
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
}

void swap2(int* a , int *b)
{
    int temp = *a ^ *b;
    *a = temp ^ *b;
    *b = temp ^ *a;
}
int main()
{
    int num1 = 2, num2 = 1;
    swap(&num1,&num2);
    printf("num1 = %d , num2 = %d",num1,num2);
    return 0;
}
