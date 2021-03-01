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
                cout << vec[i] << "-";
                cout << vec[i].size() << endl;
                cout << endl;
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
                    cout << temp << endl;
                    begin = i + 1;
                    vec.push_back(temp);
                    max_size = temp.size() > max_size ? temp.size() : max_size;
                }
            }
            string temp = s.substr(begin,s.size() - begin);
            vec.push_back(temp);
            Print(vec);
            cout << "vec.size() = " << vec.size() << endl;
            max_size = temp.size() > max_size ? temp.size() : max_size;
            cout << "max_size = " << max_size << endl;
            for(size_t i = 0;i < max_size;++i)
            {
                string contemp;
                for(size_t j = 0; j < vec.size();++j)
                {
                    if(j < vec.size() && i < vec[j].size())
                     contemp.push_back(vec[j][i]);
                    else
                    {    contemp.push_back(' ');
                    }
                }
                cout << "contemp size = " << contemp.size() << endl;
                res.push_back(contemp);
            }
            for(size_t i = 0;i < res.size();++i)
            {
                int end = res[i].size() - 1;
                while(res[i][end] == ' ')
                {
                    end--;
                }
                res[i] = res[i].substr(0,end + 1);
            }
            Print(res);
            return res;
        }
};


int main()
{
    string str;
    getline(cin,str);
    Solution a;
    vector <string> res = a.printVertically(str);
}
