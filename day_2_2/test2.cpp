#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
    public:
        bool Judge(string s , int k)
        {
            unordered_map<int,string> HashMap;
            
        

        }
        int longestSubstring(string s, int k) {
            if(s.size() == 0 || s.size() <= k)
            {
                return 0;

            }
            size_t len = 0;
            for(size_t i = 0;i < s.size();++i)
            {
                for(size_t j = i+ 1; j < s.size();++j)
                {
                    string temp = s.substr(i,j -  i);


                }

            }

        }

};
