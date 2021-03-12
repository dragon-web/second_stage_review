#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    int reverse = 0;
    int count = 0;
    int bit = 0;
    while(num)
    {
        
        bit = num % 10;
        printf("%d \n",bit);
        reverse = 10 * reverse + bit;  
        count++;
        num /= 10;
    }
    printf("位数 %d\n",count);
    printf("逆序 %d\n",reverse);

}
