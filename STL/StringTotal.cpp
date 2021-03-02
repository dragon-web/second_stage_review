#include <iostream>
#include <string.h>

using namespace std;
using std::ostream;
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
        size_t beginsize = _size;
        size_t oldsize = _capacity;
        while(newsize > oldsize)
        {
            oldsize = 2 * _capacity;
            reserve(oldsize);
        }   
        memset(_str + beginsize ,ch,oldsize - beginsize);
        _size = newsize;
    }
    char& operator[](size_t index)
    {
        return this->_str[index]; 
    }
    String& operator += (const char *str)
    {
        while(strlen(str) + _size > _capacity)
        {
            reserve(2 * _capacity);
        }
        strcat(_str,str);
        return *this;
    }
   friend ostream& operator << (ostream &out,String &s)
    {
        out << s._str;
        return out;
    }
    private:
        size_t _size;
        size_t _capacity;
        char* _str;
        static size_t npos;
};

size_t String::npos = -1;

int main()
{
    String S = "I LOVE YOU";
    cout << S[2];
    cout << S << endl;
    S += "HELLO";
    cout << S <<endl;
    return 0;
}
