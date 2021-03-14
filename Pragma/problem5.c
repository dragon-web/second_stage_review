#include<stdio.h>
#include <math.h>

int count(int n)
{
    int num = 1;
    for(int i = 1; i <= n;++i)
    {
        num *= i;
    }
    return num;
}
int main()
{
    int n = 1;
    while(1.0 / count(n)* 1.0 < pow(10,-8))
    {
        n++;
    }    
    double s=0;
    for(int i=1;i<=n;i++)
        s+=1.0/i;
    printf("%g\n",s);
    return 0;
}
