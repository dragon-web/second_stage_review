#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <string>

using namespace std;
class Solution {
    public:
        int longestSubstring(string s, int k) {
            if (k <= 1) return s.size();
            if (s.empty() || s.size() < k) return 0;

            vector<int> hash(128, 0);
            for (auto c : s) ++hash[c];
            size_t i = 0;
            while (i < s.size() && hash[s[i]] >= k) ++i;
            if (i == s.size()) return s.size();
            int l = longestSubstring(s.substr(0, i), k);
            while (i < s.size() && hash[s[i]] < k) ++i;
            int r = longestSubstring(s.substr(i), k);

            return max(l, r);

        }

};
