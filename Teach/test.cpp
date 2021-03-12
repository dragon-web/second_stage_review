#include <stdio.h>
#include <iostream>

using namespace std;
/*
enum color{
    red,yellow,blue = 4,green,white
}c1;
struct student{
    int a;
    char ar[100];
}b;*/
int main()
{
    /*
     * unsigned int x = 65535;
       printf("%d",x);
    
    int a,b;
    cout << (a = 5,b = 2, a > b ? a++ : b++ ,a+b); 
    c1 = white;
    cout << sizeof(b) << endl;
    char Ar[] = {'X','I','Y','O','U','\0'};
    puts(Ar);
    int a[2][3] = {2,4,6,8,10,12};
    cout << *(&a[0][0] + 2*2 + 1) << " " << *(a[1] + 2) << endl;
*/
    /*int x = 31, y = 2,s = 0;
    do{
        s -= x*y;
        cout << "s = " << s << endl;
        x+=2;
        y-=3;
    }while(x % 3 == 0);
    printf("x = %d\ty=%d\ts=%d\t",x,y,s);
    */
    int i;
    for(i = 5; i < 15;++i)
    {
        if(i % 4 == 0)
        {
            printf("%2d",i);
        }
        else{
            continue;
        }
    }
    return 0;
}
