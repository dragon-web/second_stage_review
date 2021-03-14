#include <stdio.h>

int main(){
    int a[3][3];
    for(int i = 0;i < 3;++i)
    {
        for(int j = 0;j < 3;++j)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int max = a[0][0];
    int pos = 0;
    for(int i = 0;i < 3;++i )
    {
        for(int j = 0;j < 3;++j)
        {
            if(i == j || i+j == 2)
            {
                if(max < a[i][j])
                {
                    pos = i;
                }
            }
        }
    }
    printf("行号是%d\n",pos); 
    return 0;
}
