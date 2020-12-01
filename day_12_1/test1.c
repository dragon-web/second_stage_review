#include <iostream>

using namespace std;;

int Fabi(int N)
{
  int a = 0;
  int b = 1;
  int c = 0;
  while(c < N)
  {
    a = b;
    b = c;
    c = a+b;

  }
  if(c == N)
  {
    return 0;

  }
  else{
    int count = (N - b) > (c - N) ? c - N : N - b;
    return count;

  }


}
int main()
{
  int N;
  int count = 0;
  while(cin>>N)
  {
    int count = Fabi(N);
    cout<<count<<endl;

  }
  return 0;

}
