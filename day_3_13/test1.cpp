#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main()
{
    int N,K;
    vector <vector<int>> vec;
    vec.resize(N,vector<int> (K,0));
    map<string , int> ma;
    int num1 ,num2,num3;
    for(int i = 0;i < N;++i)
    {
        cin >> num1;
        if (num1 == 1)
        {
            cin >> num2 >> num3;
        }
        ma.insert(pair<string,int> (to_string(num2),num3));
        auto temp = to_string(num2);
        if(ma.size() > K)
        {
            
        }
    }

    return 0;

}
