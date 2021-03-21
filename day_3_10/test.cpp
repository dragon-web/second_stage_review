#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    vec.resize(9);
    for(int i = 0;i < 9;++i)
    {
        vec[i] = i+1;
    }
    vector<int>::iterator it = vec.begin();
    while(it != vec.end())
    {
        if(*it % 2 == 0)
        {
            it = vec.erase(it);
            it --;
        }
        it++;
    }

    for(auto e : vec)
    {
        cout << e << endl;
    }
}
