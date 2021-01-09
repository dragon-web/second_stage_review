#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        vector<int> distributeCandies(int candies, int num_people) {
            vector<int> dp;
            dp.resize(num_people,0);
            int temp = candies;
            int begin = 1;
            int index = 0;
            while(temp > 0)
            {
                temp = temp - begin;
                if(temp  > 0)
                    dp[index % num_people] += begin;
                else
                {
                    dp[index % num_people] += temp + begin;

                }
                begin++;
                index++;

            }
            return dp;

        }

};

int main()
{
    Solution sol;
   vector<int> res =  sol.distributeCandies(10,3);
    for(size_t i = 0 ;i < res.size(); ++i)
    {
        cout << res[i] << " "; 
    } 
    return 0;
}
