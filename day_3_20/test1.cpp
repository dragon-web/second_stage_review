#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

bool Judge(string str)
{
    if(str.size() <= 1)
    {
        return true;
    }
    for(size_t i = 1;i < str.size();++i)
    {
        if(str[i] > str[i-1])
        {
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}

string Solution(string& str)
{
    multiset<char> S;
    string ret;
        



}
int main()
{
    string str;
    while(cin >> str)
    {
        string res = Solution(str);
        cout << res << endl;

    }

    return 0;

}
