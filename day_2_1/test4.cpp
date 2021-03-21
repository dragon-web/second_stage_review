#include <iostream>
#include <unordered_set>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_set<int> dp;
    if(dp.find(1) == dp.end())
    {
        cout << "找不到" << endl;
    }
    else 
    {
        cout << "找的到"<<endl;
    }
}
