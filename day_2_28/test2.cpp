#include <string>
#include <iostream>

using namespace std;

class Solution {
    public:
        bool isVaild(string s)
        {
            if(s.size() == 1)
            {
                return true;

            }
            else
            {
                int begin = 0;
                int end = s.size() - 1;
                while(begin < end)
                {
                    if(s[end] != s[begin])
                    {
                        return false;
                    }
                    begin++;
                    end--;
                }
                return true;
            }

        }
        int longestPalindrome(string s) {
            int count = 1;
            if(s.size() <= 1)
            {
                return count;

            }
            for(size_t i = 0;i < s.size();++i)
            {
                for(size_t j = i; j < s.size();++j)
                {
                    string temp = s.substr(i,j - i + 1);
                   cout << temp << endl;
                    if(isVaild(temp) && temp.size() > count)
                    {
                        count = temp.size();
                    }
                }

            }
            return count;
        }
};

int main()
{
    Solution a;
    string str;
    cin >> str;
    cout << a.longestPalindrome(str) << endl;
}
