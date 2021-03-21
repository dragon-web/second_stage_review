#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>

using namespace std;

class Solution {
    public:
        bool isHappy(int n) {
            unordered_set<int> Con;
            vector<int> vec;
            int sum = 0;
            int count = 0;
            while(1)
            {
                while(n)
                {
                    int num = n % 10;
                    n /= 10;
                    vec.push_back(num);
                }
                for(auto e : vec)
                {
                    sum += e*e;
                }
                Con.insert(sum);
                vec.clear();
                if(Con.find(sum) != Con.end() && count > 0)
                {
                    return false;
                }
                if(sum == 1)
                {
                    return true;
                }
                n = sum;
                cout << "sum = " << sum << endl;
                vec.clear();
                sum = 0;
                count++;
                cout << "count = " << count << endl;
            }
            return false;
        }
};
int main()
{
    Solution a;
    a.isHappy(19);

    return 0;
}
