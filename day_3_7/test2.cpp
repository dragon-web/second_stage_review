#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

bool Solution(vector<int> dp)
{
    sort(dp.begin(),dp.end());
    if(((dp[0] + dp[1] == 4)&&(dp[2] + dp[3] == 6)) || (dp[0] + dp[1] == 3)&&(dp[2] + dp[3] == 8))
        return true;   

}
int main()
{
    vector<int> vec;
    vec.resize(4,0);
    for(int i = 0;i < 4;++i)
    {
        cin >> vec[i];

    }
    if(Solution(vec))
    {
        cout << "true" <<endl;

    }
    else
    {
        cout << "false" << endl;

    }
    return 0;

}
