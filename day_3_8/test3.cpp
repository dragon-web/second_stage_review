#include <iostream>
#include <string>
#include <functional>
#include <unistd.h>

using namespace std;

string Solution(string str)
{
    string Ch;
    for(int i = 0;i < str.size();++i)
    {
        int count = 1;
        int pos = 0;
        bool flag = 1; 
        for(int j = i+1; j < str.size();++j)
        {
            if(str[i] == str[j])
            {
                count++;
                pos = j;
            }
            else{
                pos = j - 1;
                break;
            }
        }
        Ch = to_string(count);
        count = 1;
        Ch.push_back(str[i]);
        i = pos;  
    }
    return Ch;
}
int main()
{
    string str;
    while(cin >> str)
    {
        string temp = Solution(str);
        cout << temp << endl;
    }
    return 0;
}
