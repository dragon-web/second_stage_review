#include <stdio.h>
#include <iostream>

using namespace std;

int funa(int a)
{
    int b= 0;
    static int c = 3;
    a= c++,b++;
    return a;
}
int main()
{
/*    int arr[] = {1,2,3};
    int *p = arr;
    cout << *++p << " " << *(++p) << endl;
   */
    int a = 2,i,k;
    for(i = 0;i < 2;++i)
    {
        k = funa(a++);
    }
    cout << k << endl;
    return 0;
}
