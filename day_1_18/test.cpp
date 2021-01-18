#include <iostream>
#include <string>
#include <vector>

using namespace std;
string Solution(string s1 , string s2)
{
    string temp;
    vector<vector <int>>dp;
    dp.resize(s1.size(),vector <int>(s2.size(),0));
    int max = -1;
    size_t index1 = 0;
    size_t index2 = 0;
    for(size_t i = 0;i < s1.size();++i)
    {
        for(size_t j = 0; j < s2.size(); ++j)
        {
            if(s1[i] == s2[j])
            {
                if(i != 0 && j != 0)
                {
                    dp[i][j] = dp[i - 1][j - 1]+1;
                }
                else 
                {
                    dp[i][j] = 1;
                }
                if(dp[i][j] > max)
                {
                    max = dp[i][j];
                    index1 = i;
                    index2 = j;
                }
            }
        }
    }
    string res;
    if(max != -1)
    {
        while(max)
        {
            res = s1[index1] + res;
            index1--;
            max--;
        }
    }
    return res;
}
int main()
{
    string str1;
    string str2;
    while(cin >>str1 >> str2)
    {
        string res = Solution(str1 , str2);
        cout << res << endl;

    }   
    return 0;
}
