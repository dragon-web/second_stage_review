#include <stdio.h>

int main()
{
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int count = 0;
    for(int i = 0;i < 3;++i)
    {
        for(int j = 0;j < 3;++j)
        {
            if(i != j && i+j != 2)
            {
                count += a[i][j];
            }
        }
    }
    printf("和为 %d\n",count);
}
