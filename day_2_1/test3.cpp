#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int Solution(string& str)
{
    unordered_set<char> temp;
    if(str.size() == 0)
    {
        return 0;
    }
    size_t len = 0;
    size_t rt = 0; // 保存现有字符尾部
    for(size_t i = 0;i < str.size();++i)
    {
        if(i != 0)
        {
            temp.erase(temp.find(str[i-1]));
        }
        while(rt < str.size() && temp.find(str[i]) == temp.end())
        {
            temp.insert(str[i]);
            rt++;
        }
        len = len > rt ? len : rt;
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
