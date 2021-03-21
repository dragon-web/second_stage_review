#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    int N,K;
    vector <vector<int>> vec;
    vec.resize(N,vector<int> (K,0));
    unordered_map<string , int> ma;
    vector<int> res;
    int num1 ,num2,num3;
    string Nocomal;
    for(int i = 0;i < N;++i)
    {
        cin >> num1;
        if(num1 == 1)
        {
            cin >> num2 >> num3;
        
        ma.insert(pair<string,int> (to_string(num2),num3));
        if(ma.size() > 1)
        {
           string temp = (*ma.begin()).first;
        }
        if(ma.size() >= K)
        {
            
        }
         }
    }
    return 0;

}
