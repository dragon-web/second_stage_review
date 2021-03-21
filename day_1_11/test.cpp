#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
   int Judge (vector<vector <int>> &test)
   {
   size_t begin = 0;
   vector <int> line1 = test[0];
   int line_start = line1[0];
   while( begin < test.size() )
   {

   if(line_start == test)

   begin++;
   }
   }
   */

int main()
{
    vector<vector <int>> dp;
    vector<int> temp;
    size_t length;
    cout << "请输入你要输入二维数组行数"<<endl;
    cin >> length;
    size_t count = 0;
    while(count < length)
    {
        int num;
        while(cin >> num )
        {
            temp.push_back(num);
        }
        dp.push_back(temp);
        count++;
    }
    for(size_t i = 0;i < dp.size() ;++i)
    {
        for(size_t j = 0; j < dp[i].size(); ++j)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
