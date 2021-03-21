#include <string>
#include <iostream>
#include <map>

using namespace std;
class SortId 
{
    public:
        bool operator () (const std::string & id1, const std::string & id2) const
        {
            int i=0;
            int m1=0,m2=0;
            while(i<id1.size())
            {
                if(id1[i]>='0' && id1[i]<='9')
                {
                    m1=i;
                    break;

                }
                i++;

            };
            i=0;
            while(i<id2.size())
            {
                if(id2[i]>='0' && id2[i]<='9')
                {
                    m2=i;
                    break;

                }
                i++;

            };
            int a = atoi(id1.substr(m1).c_str());
            int b = atoi(id2.substr(m2).c_str());
            if(a==b)
                return id1<id2;
            return a<b;

        }

};
typedef std::map<std::string, string , SortId > ChildMap;


int main()
{
    string a = a
    ChildMap<string ,string> a; 
    
    return 0;
}
