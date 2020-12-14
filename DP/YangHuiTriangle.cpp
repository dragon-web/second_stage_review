#include <iostream>
#include <vector>

using namespace std;

int CountNum(vector<vector<int>> dp)
{
    for(size_t i = 0 ; i < dp.size();++i)
    {
        if(i == 0)
        {
            
        }
    }
}
int Solution(int num)
{
    if (num == 1 || num == 2)
    {
        return -1;

    }
    else
    {
        int count = 1;
        for(int i = 0;i < num;++i)
        {


        }
    }
}
int main()
{
    int num;
    while(cin >> num)
    {
        vector<vector<int>> dp(num);
        for(int i = 0; i < num;++i)
        {
            dp[i].resize(num,i);
        }
    }
    return 0;
}

