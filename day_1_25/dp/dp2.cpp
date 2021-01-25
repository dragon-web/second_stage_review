#include <iostream>
#include <vector>
#include <string>

using namespace std;

int Min(int a,int b,int c)
{
    int temp = 0;
    temp = a > b ? b : a;
    temp = temp > c ? c : temp;
    return temp;

}

int Solution(string s1 , string s2)
{
    size_t len1 = s1.size();
    size_t len2 = s2.size();
    vector <vector <int>> dp(len1+1,vector<int>(len2+1 , 0));
    for(size_t i = 0 ;i <= len2 ;++i)
    {
        dp[0][i] = i;

    }
    for(size_t j = 0;j <= len1; ++j)
    {
        dp[j][0] = j;

    }
    for(size_t i = 0;i <= len1; ++i)
    {
        for(size_t j = 0;j <= len2;++j)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << "================================"<< endl;
    for(size_t i = 0 ; i < len1; ++i)
    {
        for(size_t j = 0;j < len2;++j)
        {
            if(s1[i] != s2[j])
            {
                dp[i+1][j+1] = Min(dp[i][j],dp[i+1][j],dp[i][j+1]) + 1;
            }
            else
            {
                dp[i+1][j+1] = Min(dp[i][j],dp[i+1][j],dp[i][j+1]);
            }
        }
        for(size_t i = 0 ;i <= len1 ;++i)
        {
            cout <<" 第 " << i << "次" << endl;
            for(size_t j = 0;j <= len2;++j)
            {
                cout << dp[i][j] << " ";
            }
            cout << endl;
        }

    }
    return dp[len1][len2];

}
int main()
{
    string str1,str2;
    while(cin >> str1 >>str2)
    {
        int ret = Solution(str1 , str2);
        cout << ret << endl;

    }

    return 0;

}
