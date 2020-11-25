nclude<iostream>
#include<string>

using namespace std;
string  Solution(string str)
{
  string temp;
  int bpos = str.find(' ');
  int epos = str.rfind(' ');
  size_t end = str.size()-1;
  if(bpos == epos)
  {
    return str;

  }
  while(epos >= bpos)
  {
    string temp = str.substr(epos，end - epos);
    temp.push_back(temp);
    temp.push_back(' ');

  }
  string temp1 = str.substr(0,epos);
  temp.push_back(temp1);
  return temp;

}

int main()
{
  string str1;

  while(cin>>str1)
  {
    string res = Solution(str1);
    cout<<res<<endl;

  }
  return 0;

}
