#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    /*int a = 0;
    float f = 0.1;
    printf("%d",a % int(f));
    */
    int w = 1, x = 2,y = 3,z = 4;
    int a =  w<x?w:y<z?y : z;
    cout << a << endl;
    return 0;
}
