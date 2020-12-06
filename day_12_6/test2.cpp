#include <iostream>
#include <math.h>
#include <vector>
#include <stdlib.h>

using namespace std;

bool JudgeVaild(int Count)
{
  for(int i = 2; i < Count/2;++i)
  {
    if(Count %  i == 0)
    {
      return false;
    }
  }
  return true;
}
void Solution(int num, vector<int>& vec)
{
  vector<int> temp;
  for(int i = 1; i <= num;++i)
  {
    if(JudgeVaild(i) && JudgeVaild(num - i))
    {
      temp.push_back(i);
      temp.push_back(num - i);
      if(temp.size() == vec.size())
      {
        if(abs(temp[0] - temp[1]) < abs(vec[0] - vec[1]))
        {
          vec = temp;
        }
      }
      else if(temp.size() > vec.size())
      {
        vec = temp;
      }
      temp.clear();
    }
  }
}

int main()
{
  int NUM;
  while(cin>>NUM)
  {
    vector<int> vec;
    Solution(NUM,vec);
    for(int i = 0 ;i < vec.size();++i)
    {
      cout<<vec[i]<<endl;
    }
  }
  return 0;
}
