#include <iostream>

using namespace std;

bool JudgeVaild(int Count)
{
  for(int i = 2; i <= Count/2;++i)
  {
    if(Count % i == 0)
    {
      return false;
    }
  }
  return true;
}


int main()
{
  int NUM;
  while(cin >>NUM)
  {
    cout << JudgeVaild(NUM) << endl;
  }

  return 0;
}
