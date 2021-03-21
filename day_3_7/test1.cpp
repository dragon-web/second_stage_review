#include <iostream>
#include <string>

using namespace std;

string Solution(string s1 , string s2)
{
    if(s2.size() == 0)
    {
        return s1;

    }
    else{
        for(int i = 0;i < s2.size();++i)
        {
            int index = s1.find(s2[i]);
            if(index != -1)
            {
                s1.erase(index,1);

            }

        } 
        return s1;

    }

}
int main()
{
    string str1,str2;
    while(getline(cin,str1) && getline(cin,str2))
    {
        string res = Solution(str1,str2);
        cout << res << endl;

    }

}
