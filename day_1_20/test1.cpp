#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

void Print(vector<int> test)
{
    for(size_t i = 0; i < test.size();++i)
    {
        cout << test[i] << " ";
    }
    cout << endl;
}
vector<int> Solution(vector<int> &dp, int &k)
{
    if(k == 0 || dp.size() == 0)
    {
        return dp;
    }
    else {  
        while(k > 0)
        {
            int pos1 = dp.size() / 2; // 记录中间位置
            int pos2 = dp.size() - 1; //记录最后位置
            vector<int> res;
            while(pos1 > 0 && pos2 > dp.size()/2)
            {
                res.push_back(dp[pos2]);
                res.push_back(dp[pos1]);
                pos1--;
                pos2--;
            }
            dp = res;
            res.clear();
            k--;
        }
        return dp;
    }
}
int main()
{
    int T;
    cin >> T;
    vector<int> dp;
    dp.resize(T,0);
    for(int i = 0;i < T;++i)
    {cin >> dp[i];}
    Print(dp);
    cout << "========================"<<endl;
    vector<int> res = Solution(dp ,T);
    reverse(res.begin(),res.end());
    for(size_t i = 0; i < res.size() ; ++i)
    {
        cout << res[i] <<" ";
    }
    return 0;

}
