/*#include<iostream>
#include<vector>
using namespace std;

int Count(vector<int> vec)
{
vector<int> res;
res.resize(vec.size(),0);
for(int i = 0; i < vec.size();++i)
{
if(i == 0 && vec[i] > 0)
{
res[i] = 1;
continue;

}
if(vec[i] > 0)
{
res[i] = res[i-1]+1;    

}
else{
res[i] = 0;

}

}
int count = 0;
int temp = 0;
for(int j = 0; j < vec.size();++j)
{
if(res[j] > 0)
{
count += vec[j];
if(count > temp)
{
temp = count;

}

}
else{
count = 0;

}

}
return temp;

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
int count = Count(vec);
cout<<count<<endl;
return 0;
}*/

#include<iostream>
#include<vector>
using namespace std;

int Count(vector<int> vec)
{
  vector<int> res;
  res.resize(vec.size(),0);
  for(int i = 0; i < vec.size();++i)
  {
    if(i == 0 && vec[i] >= 0)
    {
      res[i] = 1;
      continue;

    }
    if(vec[i] >= 0)
    {
      res[i] = res[i-1]+1;    

    }
    else{
      res[i] = 0;

    }

  }
  int count = 0;
  int temp = 0;
  for(int j = 0; j < vec.size();++j)
  {
    if(res[j] > 0)
    {
      count += vec[j];
      if(count >= temp)
      {
        temp = count;

      }

    }
    else{
      count = 0;

    }

  }
  return temp;

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
  bool flag = 0;
  int max = vec[0];
  for(int i = 0;i < vec.size();++i)
  {
    if(vec[i] > 0)
      flag = 1;
    max = max > vec[i] ? max : vec[i];

  }
  if(!flag){
    cout<<max<<endl;

  }
  else
  {
    int count = Count(vec);
    cout<<count<<endl;

  }
  return 0;

}


