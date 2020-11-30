#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

struct A
{
  long a;
  short b;
  int d;
  int *c;
}A;

class Solution {
  public:
    int StrToInt(string str) {
      if(str.size() == 0)
      {
        return 0;   

      }
      int temp = 0;
      bool flag = 0; 
      int i;
      if(str[0] == '-')
      {
        flag = 1;

      }
      if(str[0] == '+')
      {
        i = 1;
      }
      for( i;i < str.size();++i )
      {
        if(str[i] >= '0' && str[i] <= '9')
        {
          temp = 10 * temp + (str[i] - '0');
        }
        else
        {
          return 0;
        }
      }
      return temp;
    }
};
int main()
{
  /*int m = 0123;
    int n = 123;
    printf("%o %o \n",m,n);*/

  //cout<<sizeof(A)<<endl;
  Solution a;
  string str = "123";
  cout<<str<<endl;
  int temp = a.StrToInt(str);
  cout<<temp<<endl;
  return 0;
}
