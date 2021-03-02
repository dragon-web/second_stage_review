#include <iostream>
#include <string.h>

using namespace std;

class String
{
    public :
        typedef char* iterator;
    public:
    String(const char* str = "")
    {
        if(str == nullptr)
        {
            str = "";
        }
        _capacity = strlen(str);
        _size = strlen(str);
        _str = new char[strlen(str) + 1];
        strcpy(_str,str);
    }

    String (const String & s) : _size(0),_capacity(0),_str(nullptr)
    {
       _size = s._size;
       _capacity = s._capacity;
       _str = new char[strlen(s._str) + 1];
       strcpy(_str,s._str);
    }
    String& operator= (String &s)
    {
        if(&s != this)
        {
            _str = new char[strlen(s._str) + 1];
            _capacity = s._capacity;
            _size = s._size;
            _capacity = s._capacity;
            strcpy(_str,s._str);
        }
        return *this;
    }
    ~String()
    {
        if(_str)
        {
            delete []_str;
            _capacity = 0;
            _size = 0;
            _str = nullptr;
        }   
    }   
    iterator begin()
    {
        return _str;
    }
    iterator end()
    {
        return _str + _size;
    }
    size_t size() const 
    {
        return _size;
    }
    size_t capacity() const 
    {
        return _capacity;
    }
    bool empty() const 
    {
        return _size == 0;
    }
    void clear()
    {
        _str[0] = '\0';
        _size = 0;
    }
    void reserve(size_t newcapacity)
    {
        if(newcapacity > capacity())
        {
            char* temp = new char[newcapacity + 1];
            strcpy(temp,_str);
            delete[] _str;
            _str = temp;
            _capacity = newcapacity;
        }
    }
    void resize(size_t newsize , char ch)
    {
        while(newsize > _capacity)
        {
            
        }   

    }
    private:
        size_t _size;
        size_t _capacity;
        char* _str;
        static size_t npos;
};

size_t String::npos = -1;
