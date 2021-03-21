#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main()
{
   map<string,string> mp;
   mp.insert("I","love you");
   cout << mp["I"].first() << " " << mp["I"].second() << endl;
    return 0;
}
