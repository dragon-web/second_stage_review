#include <stdio.h>

int get_val = 1;

void test()
{
    get_val = 0;
}
int main()
{
    while(get_val)
    {
        printf("start\n");
        test();
    }

    return 0;
}
