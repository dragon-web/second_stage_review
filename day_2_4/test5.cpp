#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        int numSubarrayBoundedMax(vector<int>& A, int L, int R) {
            if(A.size() == 0)
            {
                return 0;
            }
            int count = 0;
            for(size_t i = 0;i < A.size();++i)
            {
                for(size_t j = i;j < A.size();++j)
                {
                    int max = A[j];
                    for(size_t k = i;k <= j;++k)
                    {
                        if(A[k] > max)
                        {
                            max = A[k];
                        }
                    }
                    if(max >= L && max <= R)
                    {
                        count++;
                    }
                }
            }
            return count;
        }
};



int main()
{
    vector<int> dp = {2 , 1 ,4 ,3};
    Solution a;
    int ret = a.numSubarrayBoundedMax(dp , 2 ,4 );
    cout << ret << endl;

    return 0;
}
