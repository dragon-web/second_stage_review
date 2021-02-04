#include <iostream>

using namespace std;

int Fib(int n)
{
    if(n <= 2)
    {
        return 1;

    }
    else{
        int a = 1;
        int b = 1;
        int temp = 0; 
        for(int i = 2 ; i < n;++i)
        {
            temp = a;
            a = b;
            b = temp + b;
        }
        return b;
    }
}
int main()
{
    int num1,num2;
    while(cin >> num1 >> num2)
    {
        int count = 0;
        for(int i = num1; i <= num2 ; ++i)
        {
            cout << Fib(i) <<" ";
            count += Fib(i);
        }
        cout << endl;
        cout << count << endl;
    }
    return 0;

}
