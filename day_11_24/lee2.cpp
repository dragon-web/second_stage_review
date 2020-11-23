#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
  string strA; 
  getline(cin,strA);
  string strB;
  getline(cin,strB);
  unordered_map<char,int> mp;
  string ret = "";
  for(auto& e:strB)
  {
    mp[e]++;

  }
  for(size_t i = 0;i < strA.size();++i)
  {
    if(mp.find(strA[i]) != mp.end()&& mp[strA[i]] > 0)
      continue;
    ret += strA[i];

  }
  cout << ret << endl;
  return 0;

}
