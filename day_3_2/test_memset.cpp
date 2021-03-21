#include <iostream>
#include <string.h>

using namespace std;


int main()
{
    char buf[10];
    memset(buf, 1 , 5);
    buf[5] = '\0';
    cout << buf <<endl;
    string a;
    return 0;
}
