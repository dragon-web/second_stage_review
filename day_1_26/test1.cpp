#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int Solution(int number)
{
    if(number < 10)
    {
        return number;

    }
    else 
    {
        stack<int> dp;
        int count = number;
        while(count >= 10)
        {
            while(count)
            {
                dp.push(count % 10);
                count /= 10; 

            }
            while(dp.size())
            {
                count += dp.top();
                dp.pop();

            }

        }
        return count;

    }

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
