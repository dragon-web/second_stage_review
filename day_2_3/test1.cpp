#include <iostream>
#include <vector>

using namespace std;

void Solution(int num)
{
    int temp = num;
    vector<int> vec;
    for(int i = 2;i <= num;++i)
    {
        while(temp % i == 0)
        {
            temp = temp  / i;
            vec.push_back(i);

        }

    }
    cout << num << " = ";
    for(size_t j = 0;j < vec.size()-1;++j)
    {
        cout << vec[j] << " * ";

    }
    cout << vec[vec.size()-1] << endl;

}
int main()
{
    int num;
    while(cin >> num)
    {
        Solution(num);

    }
    return 0;

}
