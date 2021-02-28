#include <iostream>
#include <string.h>
#include <assert.h>

using namespace std;

class String 
{
    public:
        String(const char* str = "")
        {
            if(nullptr == str)
            {
                str = "";
            }
            _str = new char[strlen(str) + 1];
            strcpy(_str,str); 
        }
        String(const String& s)
        {
                _str = new char[strlen(s._str) + 1];
                strcpy(_str,s._str);
        }
        String& operator = (const String s)
        {
            if(&s != this)
            {
              char* temp = new char[strlen(s._str) + 1];
              strcpy(temp,s._str);
              delete[] _str;
              this->_str = temp;
            }
            return *this;
        }
        ~String()
        {
            if(_str)
            {
                delete[]_str;
                _str = nullptr;
            }
        }
    private:
        char* _str;
};

int main()
{
    
}
