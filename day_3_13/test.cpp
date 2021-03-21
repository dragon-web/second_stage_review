#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>
#include <set>

using namespace std;

int Solution(vector <int> & vec , int k)
{
    set<int> ma;
    for(int i = 0;i < vec.size();++i)
    {
        ma.insert(vec[i]);

    }
    vec.clear();
    for(auto & e : ma)
    {
        vec.push_back(e);
    }
    sort(vec.begin() , vec.end());
    return vec[k - 1];
}
int main()
{
    int num;
    cin >> num;
    vector <int> vec;
    vec.resize(num,0);
    for(int i = 0;i < num;++i)
    {
        cin >> vec[i];

    }
    int k;
    cin >> k;
    int ret = Solution(vec,k);
    cout <<  ret << endl;
    return 0;

}
