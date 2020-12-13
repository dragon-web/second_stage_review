#include <iostream>
#include <assert.h>
#include <string.h>

using namespace std;

class String
{
    public:
   String(const char* str)
   {
        if(str == nullptr)
        {
            str = "";
        }
        char *p = new char[strlen(str) + 1]; //预留\0的空间
        strcpy(_str,p);
   }
   String (const String& s)
   {
      _str = s._str;
   }
    
    private:
    char* _str;
};









int main()
{
    
    return 0;
}
