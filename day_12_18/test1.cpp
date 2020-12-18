class Solution {
    public:
        int firstMissingPositive(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            if(nums[nums.size() - 1]  > 0)
                return nums[nums.size() - 1]+ 1;
            else{
                for(int i = 1;i <= nums.size() - 1; ++i)
                {
                    if((nums[i+1] != nums[i] + 1) && nums[i] + 1 > 0)
                        return nums[i]+1;

                }
                if(nums[0] > 1)
                    return nums[0]- 1;
                int temp = nums[nums.size()-1];
                while(temp <= 0)
                    temp++;
                return temp;
            }
        }
};
