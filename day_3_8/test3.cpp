#include <iostream>
#include <string>
#include <functional>
#include <unistd.h>

using namespace std;

string Solution(string str)
{
    string Ch;
    string temp;
    for(int i = 0;i < str.size();++i)
    {
        int count = 1;
        int pos = i;
        for(int j = i + 1;j < str.size();++j)
        {
            if(str[i] == str[j])
            {
                count++;
                pos = j;
            }
            else
            {
                break;
            }
        }
        Ch = to_string(count);
        cout << "Ch = " << Ch << endl;
        temp += Ch;
        cout << "temp1 = " << temp << endl;
        count = 1;
        temp.push_back(str[i]);
        cout << "temp = " << temp << endl;
        i = pos;
        cout << "pos = " << pos << endl;
    }
    return temp;
}

int main()
{
    string str;
    while(getline(cin,str))
    {
        string temp = Solution(str);
        cout << temp << endl;
    }
    return 0;
}
