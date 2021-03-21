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
    cin >> N >> K;
    vec.resize(N,vector<int> (2,0));
    unordered_map<string , int> ma;
    string Nonormal;
    int num1 ,num2,num3;
    vector <int> res;
    for(int i = 0;i < N;++i)
    {
        cin >> num1;
        if(num1 == 1)
        {
            cin >> num2 >> num3;
            ma.insert(pair<string,int> (to_string(num2),num3));
            if(ma.size() > K)
            {
                ma.erase(ma.find(Nonormal));

            }

            if(ma.size() > 1)
            {
                Nonormal = (*ma.begin()).first;

            }

        }
        if(num1 == 2)
        {
            cin >> num3;
            if(ma.find(to_string(num3)) != ma.end())
            {
                res.push_back(ma[to_string(num3)]);
            }
            else
            {
                res.push_back(-1);
            }
        }

        for(size_t i = 0;i < res.size();++i)
        {
            cout << res[i] << endl;
        }
    }
    return 0;

}
