#include <iostream>

using namespace std;

int func(int n)
{
  if(n < 2)
  {
    return n;
  }
  return 2*func(n-1) + func(n-2);
}

int main()
{
 int res = func(5);
  cout << res <<endl;
}
