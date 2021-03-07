#include <iostream>

using namespace std;
enum Test
{
    a = 1,
    b,
    c
};

void Print(Test b)
{
    cout << "Test" << b <<endl;
}
int main()
{
    Print(a);
}

