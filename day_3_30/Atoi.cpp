#include <iostream>
#include <string>

using namespace std;

const int Arr[] = {2,21,214,2147,21474,214748,2147483,21474836,214748364,2147483647};
const int Arr1[] = {-2,-21,-214,-2147,-21474,-214748,-2147483,-21474836,-214748364,-2147483648};

int Solution(string str)
{
    int ret = 0;
    if(str.size() > 11)
        return -1;
    else if(str.size() == 11 && str[0] == '-') // 处理负数 && size == 11
    {
        for(size_t  i = 0;i < str.size();++i)
        {
            ret = ret*10 + (str[i] - '0');
            if(-1 * ret < Arr1[i])
            {
                return -1;
            }
        }
    }
    else if(str[0] == '-') // str.size() < 11  处理负数 &&  size < 11
    {
        for(size_t  i = 0;i < str.size();++i)
        {
            ret = ret*10 + (str[i] - '0');
        }
        ret *= -1;
    }
    else if(str.size() == 11)  
        return -1;
    else  // str.size() < 10 处理正数
    {
        for(size_t  i = 0;i < str.size();++i)
        {
            ret += ret*10 + (str[i] - '0');
        }
    }
    return ret;
}

int main()
{
    string str;
    while(cin >> str)
    {
        int ret = Solution(str);
        cout << ret << endl;
    }
    return 0;
}
