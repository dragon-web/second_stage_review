#include <iostream>
#include <math.h>

using namespace std;

int Solution(int number)
{
    int count = 0;
    if(number == 1)
    {
        return 1;

    }
    int a = 2;
    while(number > 1 && a <= number)
    {
        if(number % a == 0)
        {
            count++;
            while(number % a == 0)
            {
                number /= a;

            }

        }
        a++;

    }
    return count;

}
int main()
{
    int num;
    while(cin >> num)
    {
        int ret = Solution(num);
        cout << ret << endl;

    }
    return 0;

}
