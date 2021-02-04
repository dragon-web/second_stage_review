#include <iostream>
#include <string>
#include <vector>

using namespace std;

int Solution(string str1 , string str2)
{
    if(str1.size() == 0 || str2.size() == 0 || str2.size() > str1.size())
    {
        return 0;

    }
    int count = 0;
    for(size_t i = 0 ; i <= str1.size() - str2.size();++i)
    {
        string temp = str1.substr(i,str2.size());
        cout << temp << endl;
        if(temp == str2)
        {
            count++;
            i = i + str2.size() - 1;
        }

    }
    return count;

}
int main()
{
    string str1,str2;
    while(cin >> str1 >> str2)
    {
        int ret = Solution(str1,str2);
        cout << ret << endl;

    }

    return 0;

}
