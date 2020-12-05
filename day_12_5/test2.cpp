#include <iostream>
#include <string>
using namespace std;

int main()
{
  int NUM;
  while(cin >> NUM)
  {
    string str;
    string test = "01";
    while(NUM)
    {
      str = test[NUM % 2] + str;
      NUM = NUM >> 1;

    }
    int count = 0;
    int temp = 0;
    for(int i = 0; i < str.size(); ++i)
    {
      if( i == 0 && str[i] == '1' )
      {
        count++;
        if(count >= temp)
          temp = count;
        continue;

      }
      if(str[i] == '1' && str[i - 1] == '1')
      {
        count++;
        if(count >= temp)
          temp = count;

      }
      else 
      {
        count = 0;

      }

    }
    cout << temp << endl;

  }  
  return 0;

}
