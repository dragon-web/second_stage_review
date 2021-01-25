#include <iostream>
#include <string>
#include <vector>

using namespace std;

int Solution(string str1, string str2)
{
    if(str1.size() == 0)
    {return str2.size();}
    if(str2.size() == 0)
    {return str1.size();}
    vector <vector<int>> dp (str1.size(),vector<int> (str2.size() , 0));
    int res = str1.size() > str2.size() ? str1.size() : str2.size(); 
    int max_id = 0;
    for(size_t i = 0;i < str1.size();++i)
    {
        for(size_t j = 0; j < str2.size(); ++j)
        {
            if(str1[i] == str2[j])
            {
                if(i != 0 && j != 0)
                {
                    dp[i][j] = dp[i-1][j - 1] + 1;   

                }
                else{
                    dp[i][j] = 1;

                }
                if(dp[i][j] > max_id)
                {
                    max_id = dp[i][j];

                }

            }

        }

    }
    return res - max_id;

}

int  main()
{
    string str1,str2;
    while(cin >> str1 >> str2)
    {
        int ret = Solution(str1 , str2);
        cout << ret << endl;

    }
    return 0;

}
