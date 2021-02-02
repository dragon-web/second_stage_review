#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int Solution(string &s)
{
    size_t len = 0;
    if(s.size() == 0)
    {
        return 0;
    }
    unordered_set<char> HashSet;
    for(size_t i = 0 ; i < s.size() ;++i)
    {
        if(HashSet.find(s[i]) == HashSet.end())
        {
            HashSet.insert(s[i]);
        }
        else 
        {
            auto it = HashSet.find(s[i]);
            HashSet.erase(it);
           continue;
        }
        if(len < HashSet.size())
        {
            len = HashSet.size();
        }
    }
    return len;
}

int main()
{
    string str;
    while(cin >> str)
    {
        int ret = Solution(str);
        cout << ret << endl;
    }
    return 0;
}
