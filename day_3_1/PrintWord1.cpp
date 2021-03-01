#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
    public:
        void Print(vector<string> &vec)
        {
            for(size_t i = 0;i < vec.size();++i)
            {
                cout << vec[i] << " ";
            }
        }
        vector<string> printVertically(string s) {
            vector<string> vec;
            vector<string> res;
            int begin = 0;
            int end = s.size() - 1;
            size_t max_size = 0;
            for(size_t i = 0;i < s.size();++i)
            {
                if(s[i] == ' ')
                {
                    end  = i;
                    string temp = s.substr(begin,end - begin);
                    cout << "begin = " << begin << endl;
                    cout << temp << endl;
                    begin = i + 1;
                    vec.push_back(temp);
                    max_size = temp.size() > max_size ? temp.size() : max_size;
                }
            }
            string temp = s.substr(begin,s.size() - begin);
            vec.push_back(temp);
            cout << "vec.size() = " << vec.size() << endl;
            max_size = temp.size() > max_size ? temp.size() : max_size;
            cout << "max_size = " << max_size << endl;
            for(size_t i = 0;i < max_size;++i)
            {
                string contemp;
                for(size_t j = 0; j < s.size();++j)
                {
                    if(j < vec.size() && i < vec[j].size())
                        contemp.push_back(vec[j][i]);
                    else
                        contemp.push_back(' ');
                }
                res.push_back(contemp);
            }
            return res;
        }
};


int main()
{
    string str;
    cin >> str;
    Solution a;
    vector <string> res = a.printVertically(str);
}
