#include <iostream>
#include <string>

using namespace std;

string Trase(int num)
{
  string str = "";
  string temp = "01";
  while(num)
  {
    str = temp[num % 2] + str;
    num = num >> 1;
  }
  return str;
}


int main()
{
  int num;
  while(cin >> num)
  {
    string str = Trase(num);
    cout << str <<endl;
  }
  return 0;
}
