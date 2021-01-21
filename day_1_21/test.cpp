#include <iostream>
#include <vector>
using namespace std;

/*
 * public int maxSubArray(int[] nums) {
    int max = nums[0];
    for(int i=1;i<nums.length;i++){
        nums[i] += Integer.max(0,nums[i-1]);
//当前数据替换成dp这个数组，如果dp[i-1] 对dp[i]做的是负贡献（小于0）就自己单干，如果不是就加上dp[i-1] 
        max = Integer.max(nums[i], max);
    }
    return max;
}
*/

int Solution(vector <int> &dp)
{
    if(dp.size() == 0)
        return 0;
    int max = dp[0];
    for(size_t i = 1;i < dp.size(); ++i)
    {
       if(dp[i-1] + dp[i] > dp[i])
       {
           dp[i] = dp[i-1]+dp[i];
       }
       if(dp[i] > max)
       {
           max = dp[i];
       }
    }
    return max;
    
}
int main()
{
    
    


    return 0;
}
