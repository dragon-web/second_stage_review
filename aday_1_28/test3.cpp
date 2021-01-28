#include<iostream>
#include<vector>

using namespace std;

int Find(vector <int> test , int target)
{
    for(size_t i = 0;i < test.size();++i)
    {
        if(test[i] > target)
        {
            break;
        }
        if(test[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int Solution(vector< vector <int>> &dp)
{
    vector<vector <int>> dp1;
    vector<int> temp(dp[0].size(),1);
    dp1.push_back(temp);
    for(size_t i = 1 ; i < dp.size();++i)
    {
        vector <int> temp1(dp[i].size(),0);
        for(size_t j = 0;j < dp[i].size();++j)
        {
            int flag = Find(dp[i-1], dp[i][j]);
            if(flag != -1 && dp1[i - 1][flag] == 1)
            {
                temp1[j] = 1;
            }      
        }
        dp1.push_back(temp1);
    }
    for(size_t k = 0;k < dp[dp.size()-1].size();++k)
    {
        if(dp1[dp.size()-1][k] == 1)
        {
            return dp[dp.size() - 1][k];
        }
    }
    return -1;
}

int main()
{
    vector <vector<int> >vi = { { 1, 3, 5, 7  }, { 2,3,4, 5, 8, 9  }, { 1,2, 2, 4}, { 1, 2, 7}, {1,2} };
   /* cout << "请输入行值" << endl;
    int col;
    cin >> col;
    while(col != 0)
    {
        vector <int> dp;
        while( num != -1)
        {
            cin >> num;
            dp.push_back(num);
        }
        vi.push_back(dp);
        col--;
    } 
  */ 
    int ret = Solution(vi);
    cout << ret << endl;
    return 0;
}
