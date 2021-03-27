#include <iostream>
#include <vector>
#include <string>
using namespace std;
int Add(vector<int> &vec1)
{
    int count = 0;
    for(size_t i = 0;i < vec1.size();++i)
    {
        count += vec1[i];

    }
    return count;

}
bool Judge(int& num)
{
    vector <int> vec1; //奇数位 
    vector <int> vec2; //偶数位
    string temp = to_string(num);
    int count = 1; 
    for(int i = temp.size() - 1 ;i >= 0;--i)
    {
        if(count % 2 == 0)
        {
            vec1.push_back(temp[i] - '0');

        }
        if(count % 2 == 1)
        {
            vec2.push_back(temp[i] - '0');

        }
        count++;

    }
    return Add(vec1) == Add(vec2);

}

int main()
{
    int L,R;
    while(cin >> L >> R)
    {
        int res = 0;
        for(int i = L;i <= R;++i)
        {
            if(Judge(i))
            {
                res++;

            }

        }
        cout << res << endl;

    }
    return 0;

}
