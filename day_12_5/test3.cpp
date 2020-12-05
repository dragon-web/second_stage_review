#include <iostream>
using namespace std;
int main()
{
  int n;
  while(cin>>n)
  {
    int maxcount=0,count=0;
    while(n)
    {
      if(n&1)
      {
        ++count;
        maxcount = max(count,maxcount);

      }
      else
      {
        count = 0;

      }
      n>>=1;

    }
    cout<<maxcount<<endl;

  }
  return 0;

}

