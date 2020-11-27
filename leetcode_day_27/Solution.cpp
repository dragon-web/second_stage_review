#include<iostream>
#include<vector>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

string Solution(string Str)
{
  vector<int> dp;
  dp.resize(Str.size(),0);
  for(int i = 0;i < Str.size();++i)
  {
    if(Str[i] >= '0'&&Str[i] <='9')
    {
      dp[i] = 1;

    }  
    else{
      dp[i] = 0;

    }
    if(Str[i] >= '0'&&Str[i] <='9'&&Str[i] == Str[i-1]+1 )
    {
      dp[i] = dp[i-1]+1;

    }

  }
  string temp;
  string temp1;
  for(int j = 0;j < dp.size();++j)
  {
    if(dp[j] != 0)
    {
      temp.push_back(Str[j]);
      if(temp.size() >= temp1.size())
      {
        temp1 = temp; 

      }

    }
    else{
      temp.clear();

    }

  }
  return temp1;

}

int main()
{
  string str;
  while(getline(cin,str))
  {
    string temp = Solution(str);
    cout<<temp<<endl;

  }
  return 0;

}

