#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    std::unordered_map<std::string,size_t> people {{ { "Jan", 44 }, {"Jim", 33}, {"Joe", 99} }, 10};
    for(auto it : people)
    {
        cout << it.second << " ";
    }
    cout << endl;
    cout << people.size() << endl;
    return 0;
}
