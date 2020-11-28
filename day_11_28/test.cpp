/*#include<stdio.h>

  int cnt = 0;

  int fib(int n)
  {
  cnt++;
  if(n == 0)
  {
  return 1;
  }
  if(n == 1)
  {
  return 2;
  }
  else{
  return fib(n-1)+fib(n-2);
  }
  }

  int main()
  {
  fib(8);
  printf("%d \n",cnt);

  return 0;
  }*/




#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;

int main()
{
  int M,N;
  while(cin>>M>>N)
  {
    if(M == N)
    {
      cout<<M<<endl;

    }
    else{
      stack<int> dp;
      while(M)
      {
        int Re = M % N;
        dp.push(Re);
        M /= N;       

      }
      vector<int> res;
      string P;
      while(!dp.empty())
      {
        int temp = dp.top();
        dp.pop();
        res.push_back(temp);

      }
      for(int i = 0;i < res.size();++i)
      {
        if(res[i] > 9)
        {
          P.push_back(res[i] - 10 + 'A');

        }
        else{
          P.push_back(res[i] + '0');

        }

      }
      cout<<P;
    }
  }
      return 0;
}
