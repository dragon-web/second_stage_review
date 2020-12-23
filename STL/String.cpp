#include <iostream>
#include <assert.h>
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
            _str = new char[strlen(str) + 1]; //预留\0的空间
            strcpy(_str,str);
        }
        String (const String& s)
        {
            _str = s._str;
        }
        String& operator= (String &str)
        {
            _str = str._str;
            return *this;
        }
        ~String()
        {
            if(_str)
            {
                delete[] _str;
                _str = NULL;
            }
        }
       friend ostream& operator<<(ostream& out,String &s)
        {
             out << s._str;
            return out;
        }
       friend istream& operator >>(istream &in,String& str)
       {
            in >> str._str;
            return  in;
       }
    private:
        char* _str;
};



int main()
{
    String str("abc");
    String test;
    cin >> test;
    cout << test << endl;
    cout << str<<endl;
    return 0;
}
