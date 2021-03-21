#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

bool isHappy(int n)
{
    vector<int> vec;
    unordered_set<int> Con;
    Con.insert(-1);
    while(1)
    {
        while(n)
        {
            int num = n % 10;
            n /= 10;
            vec.push_back(num);
        }
        int sum = 0;
        for(auto it : vec)
        {
            sum += it * it;
        }
        if(sum == 1)
        {
            return true;
        }
        if(Con.find(sum) != Con.end())
        {
            return false;    
        }
        Con.insert(sum);
        n = sum;
        vec.clear();
    }
    return false;
}

int main()
{

    cout << isHappy(19) << endl;

    return 0;
}
