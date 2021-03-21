#include <iostream>
#include <queue>
#include <functional>
#include <algorithm>

using namespace std;
class Solution {
    public:
        int findKthLargest(vector<int>& nums, int k) {
            priority_queue<int ,vector<int> ,less<int>> pq;
            for(auto & e : nums)
            {
                pq.push(e);
            }
            for(int i = 0;i < k;++k)
            {
                pq.pop();

            }
            return pq.top();

        }

};

int main()
{
    priority_queue<int,vector<int> ,greater<int>> pri_qu; 
    vector<int> dp = {1,2,3,5,1,4,7}; 
    for(auto e : dp)
    {
        pri_qu.push(e);
    }
    while(!pri_qu.empty())
    { 
        cout << pri_qu.top() << " ";
        pri_qu.pop();
    }


    return 0;
}
