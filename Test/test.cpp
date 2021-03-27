#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
using namespace std;

int Solution(string & str)
{
    unordered_map<char,int> M;
    for(size_t i = 0;i < str.size();++i)
    {
        M[str[i]]++;
    }
    if(M['1'] == 0)
    {
        return 0;
    }
    if(M['8'] == 0)
    {
        return 0;
    }
    if(M['0'] == 0)
    {
        return 0;
    }
    if(M['7'] == 0)
    {
        return 0;
    }
    cout << M['1'] << endl;
    cout << M['8'] << endl;
    cout << M['0'] << endl;
    cout << M['7'] << endl;
    return M['1'] + M['8'] + M['0'] + M['7'];
}
int main()
{
    string str;
    getline(cin , str);
    cout << Solution(str) << endl;
    return 0;

}
