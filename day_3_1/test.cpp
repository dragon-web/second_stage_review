#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> vs;
    string t1 = "asd";
    string t2 = "asb";
    vs.push_back(t1);
    vs.push_back(t2);
    for(int i = 0;i < vs.size();++i)
    {
        cout << vs[i] <<endl;
    }
}
