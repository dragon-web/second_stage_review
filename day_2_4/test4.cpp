#include <iostream>
#include <vector>

using namespace std;

unsigned long long Solition(int num)
{
    if(num <= 2)
    {
        return num;

    }
    unsigned long long a = 1;
    unsigned long long b = 2;
    unsigned long long temp;
    for(int i = 2 ; i < num;++i)
    {
        temp = a;
        a = b;
        b = temp + b;

    }
    return b;

}
int main()
{
    int num;
    while(cin >> num)
    {
        unsigned long long ret = Solition(num);
        cout << ret <<endl;

    }

    return 0;

}
