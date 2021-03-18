#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

char firstUniqChar(string s) {
    char arr[256] = {0};
    for(size_t i = 0;i < s.size();++i)
    {
        arr[s[i]]++ ;
    }
    for(size_t i = 0;i < s.size();++i)
    {
        if(arr[s[i]] == 1)
        {
            return s[i];
        }
    }
    char ch = ' ';
    return ch;
}
class Solution {
    public:
        char firstUniqChar(string s) {
            unordered_map<char,int> t;
            for(auto e : s)
            {
                t[e]++;

            }
            for(auto it : s)
            {
                if(t[it] == 1)
                {
                    return it;

                }

            }
            return ' ';

        }

};

int main()
{
    string str;
    cin >> str;
    cout << firstUniqChar(str) << endl;
}
