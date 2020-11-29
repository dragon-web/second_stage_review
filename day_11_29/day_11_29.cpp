#include<iostream>
#include<vector>
#include<functional>
using namespace std;

int FindGreatestSumOfSubArray(vector<int> vec)
{
  if(vec.size() == 0)
  {
    return 0;

  }
  for(int i = 1;i < vec.size();++i)
  {
    vec[i] = max(vec[i],vec[i]+vec[i-1]);

  }
  return *max(vec.begin(),vec.end());

}
int main()
{
  int n;
  cin>>n;
  vector<int> vec;
  vec.resize(n,0);
  for(int i = 0;i < n;++i)
  {
    cin>>vec[i];

  }
  int count = FindGreatestSumOfSubArray(vec);
  cout<<count<<endl;
  return 0;

}
