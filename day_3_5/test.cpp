#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec1(10,1); 
    vector<int> vec2(10,2);
    auto it = vec1.begin();
    swap(vec2,vec1);
    for(auto e : vec1)
    {
        cout << e << " ";
    }
    cout << endl;
    cout << *it << endl;
}
