#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

vector<int> Solution(string &s, string s1)
{
    vector<int> res;
    list<char> rev;
    vector <int>dp2;
    for( size_t i = 0;i < s.size(); ++i)
    {
        rev.push_back(s1[i]);
        dp2.push_back(s[i] - '0');
    }
   /* for(size_t i = 0 ; i < dp2.size(); ++i)
    {
        cout << dp2[i] << " ";
    }*/
   // cout << endl;
    vector <int>dp1;
    size_t j = 0;
    auto _Begin = rev.begin();
    while( j < s1.size())
    {
        if(_Begin == rev.end())
        {
            _Begin++;
        }
        auto it = _Begin;
        auto Sl = it;
        auto it1 = ++Sl;
        if(it1 == rev.end())
        {
            it1++;
        }
        dp1.push_back(*it - '0');
        while(it1 != it)
        {
            if(it1 != rev.end())
            dp1.push_back(*it1 - '0');
            it1++;
        }
   //     cout << "///////////////////////" <<endl;
   //  cout << "dp1.size()" << dp1.size()<<endl;
         for(size_t i = 0 ;i < dp1.size(); ++i)
        {
            cout <<  dp1[i] << " ";
        }
        cout << endl;
        auto vec1 = dp1.begin();
        auto vec2 = dp2.begin();
        int total = 0;
        while(vec1 != dp1.end() && vec2 != dp2.end())
        {
            int _temp = 0;
            if(*vec1 == *vec2)
            {
                _temp = 1;
            }
            else{
                _temp = -1;
            }
            total += _temp;
            vec1++;
            vec2++;
        }
        res.push_back(total);
        dp1.clear();
        j++;
        _Begin++;
    }
    return res;
}

int main()
{
    string s;
    string s1;
    cout << "请输入你要转换的m序列" << endl; 
    cin >> s;
    cin >> s1;
    cout << "互相关序列" << endl;
    vector<int> ret = Solution(s,s1);
    for(size_t i = 0; i < ret.size(); ++i)
    {
        cout << ret[i];
    }
    cout << endl;
    return 0;
}
