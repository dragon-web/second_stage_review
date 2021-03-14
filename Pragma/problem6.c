#include <stdio.h>

int main()
{
    int arr[10];
    for(int i = 0;i < 10;++i)
    {
        scanf("%d",&arr[i]);
    }
    for(int j = 0;j < 10;++j)
    {
        if(j != 0)
        {
            arr[j - 1] = arr[j];
        }
    }
    for(int i = 0;i < 10;++i)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
