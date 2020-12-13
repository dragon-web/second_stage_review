#include <iostream>

using namespace std;

template <typename T1>

struct sum{
   static void foo(T1 op1, T1 op2)
    {
        cout<<op1 << " "<<op2<<endl;
    }
};
int main()
{
    sum<int>::foo(1,2);
    char *ptr;
    char str[] = "abcdefg";
    ptr = str;
    ptr+=5;
    printf("%s\n",ptr);
    return 0;
}
