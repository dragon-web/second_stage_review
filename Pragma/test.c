#include <stdio.h>

int fun(int x)
{
    static int y = 0;
    y += x;
    return y;
}
int main()
{
   int x = 10,y = 0,k; 
   for(k = 0; k < 2;++k)
   {
       y = fun(x);
       printf("y = %d\n",y);
   }
    return 0;
}
