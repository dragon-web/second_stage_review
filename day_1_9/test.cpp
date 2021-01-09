#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
    public:
        vector<int> distributeCandies(int candies, int num_people) {
            vector<int> dp;
            dp.resize(num_people,0);
            int temp = candies;
            for(int i = 0; temp > 0; i++)
            {   
                temp -= (i+1);
                if(i + 1 < temp)
                {dp[i % num_people] = i+1;}
                else
                {
                    dp[i % num_people] = temp;

                }
            }
            return dp;

        }

};
