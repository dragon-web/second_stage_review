#include <iostream>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <vector>
#include <set>

using namespace std;

class Solution {
    public:
        class Compare
        {
            public:
                bool operator() (const pair<string,int>& left, const pair<string,int>& right)
                {
                    return left.second > right.second;
                }
        };
        vector<string> topKFrequent(vector<string>& words, int k) 
        {
            map<string ,int> m;
            for(size_t i = 0;i < m.size();++i)
            {
                ++(m[words[i]]);
            }
            multiset<string, Compare> mul(m.begin(),m.end());
            



            vector<string> res;

        }
};
