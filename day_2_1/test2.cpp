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
    size_t len = 1;
    for(size_t i = 0;i < str.size();++i)
    {
        temp.insert(str[i]);
        for(size_t j = i+1; j < str.size();++j)
        {
            if(temp.find(str[j]) != temp.end())
            {
                 break;
            }
            else 
            {
                temp.insert(str[j]);
                if(len < temp.size())
                len = temp.size();
            }
        }
        temp.clear();
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
