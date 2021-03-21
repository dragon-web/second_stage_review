#include <iostream>
#include <unordered_set>
#include <string>
#include <unordered_map>

using namespace std;

int Solution(string& str)
{
    if(str.size() == 0)
    {
        return 0; 
    }
    unordered_map<char , int> HashTable;
    int maxLen = 0;
    int start = 0;
    int current;
    for(int i = 0;i < str.size();++i)
    {
        if(HashTable.find(str[i]) == HashTable.end())
        {
            maxLen++;
            HashTable[str[i]] = i;
        }
        else 
        {
            if(current > maxLen)
            {
                
            }
        }
    }
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
