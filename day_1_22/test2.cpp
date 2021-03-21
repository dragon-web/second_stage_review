/*#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
string str1;
while(cin >> str1)
{
string res;
int Res[129] = {0};
for(auto &e : str1)
{
Res[e]++;  
}
for(int i = 0 ; i < 129 ; ++i)
{
if(Res[i] == 1)
{
char b = toascii(i);
res += b;

}

}
if(res.size() == 0)
cout << -1 << endl;
else
cout << res << endl;

}
return 0;

}*/
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    string str1;
    while(cin >> str1)
    {
        string res;
        int Res[129] = {0};
        for(auto &e : str1)
        {
            Res[e]++;  

        }
        for(auto &i : str1)
        {
            if(Res[i] == 1)
            {
                char b = toascii(i);
                res += b;

            }

        }
        if(res.size() == 0)
            cout << -1 << endl;
        else
            cout << res << endl;

    }
    return 0;

}
