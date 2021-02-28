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
        String(const String& s):_str(s._str) 
    {}
        String& operator =(const String & s) 
        {
            this->_str = s._str; 
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
