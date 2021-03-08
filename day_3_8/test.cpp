#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
#include <algorithm>
#include <functional>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

string char_count(string str) {
    string temp;
    int pos = 0;
    for(size_t i = 0;i < str.size();++i)
    {
        string Ch;
        int count = 1;
        for(size_t j = i + 1; j < str.size();++j)
        {
            if(str[i] == str[j])
            {
                count++;
                pos = j;
            }
            else{
                pos = j;
                break;
            }
        }
        Ch  = to_string(count);
        count = 1;
        temp.assign(Ch);
        temp.push_back(str[i]);
        i = pos;
    }
    return temp;
}

int main() {
    string res;

    string _str;
    cin >> _str;
    res = char_count(_str);
    cout << res << endl;
    return 0;
}


