#include <iostream>
#include <string.h>

using namespace std;

class String
{
    public:
    String(const char* str = "")
    {
        if(str == nullptr)
        {
            str = "";
        }
        capacity = strlen(str);
        size = strlen(str);
        _str = new char[strlen(str) + 1];
        strcpy(_str,str);
    }

    String (const String & s) : size(0),capacity(0),_str(nullptr)
    {
       size = s.size;
       capacity = s.capacity;
       _str = new char[strlen(s._str) + 1];
       strcpy(_str,s._str);
    }
    String& operator= (String &s)
    {
        if(&s != this)
        {
            _str = new char[strlen(s._str) + 1];
            capacity = s.capacity;
            size = s.size;
            capacity = s.capacity;
            strcpy(_str,s._str);
        }
        return *this;
    }



    private:
        size_t size;
        size_t capacity;
        char* _str;
        static size_t npos;
};

size_t String::npos = -1;
