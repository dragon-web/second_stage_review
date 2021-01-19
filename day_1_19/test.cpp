#include <iostream>
#include <string>
#include <vector>

using namespace std;

int Count(string& s1, string &s2)
{
    vector<vector<int>> dp(s1.size(),vector<int>(s2.size(),0));
    int max = 0;
    for(size_t i = 0;i < s1.size();++i)
    {
        for(size_t j = 0; j < s2.size(); ++j)
        {
            if(s1[i]  >= 'a' && s1[i] <= 'z')
            {
                s1[i] -= 32;
            }
            if(s2[j]  >= 'a' && s2[j] <= 'z')
            {
                s2[j] -= 32;
            }
            if(s1[i] == s2[j])
            {
                if(i != 0 && j!= 0)
                {
                    dp[i][j] = dp[i-1][j-1] + 1;
                }else 
                {
                    dp[i][j] = 1;
                }
                if(dp[i][j] > max)
                {
                    max = dp[i][j];
                }
            }
        }
    }
    return max;
}
int main()
{
    string str1,str2;
    while(cin >>str1 >> str2)
    {
        int res = Count(str1,str2);
        cout << res << endl;
    }
    return 0;
}
