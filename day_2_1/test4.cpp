#include <iostream>
#include <unordered_set>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_set<char> dp;
    dp.insert('a');
    if(dp.find('a') == dp.end())
    {
        cout << "找不到" << endl;
    }
    else 
    {
        cout << "找的到"<<endl;
    }
}
