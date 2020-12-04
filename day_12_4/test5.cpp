#include <iostream>

using namespace std;

int Count(int num)
{
  int a = 0;
  while(num)
  {
    num = num >> 1;
    a++;
  }
  return a;
}
int main()
{
  int num;
  cin >> num;
  int ret = Count(num);
  cout << ret << endl;



}
