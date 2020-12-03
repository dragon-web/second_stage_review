#include <iostream>

using namespace std;

class Myclass
{
   public:
     Myclass(int i = 0){cout << 1;}
     Myclass(const Myclass& x){cout << 2;} 
     Myclass &operator = (const Myclass& x){cout << 3;return *this;}
     ~Myclass(){cout << 4;}
};

int main()
{
  Myclass obj(1),obj1(2),obj2(obj1);
  return 0;
}
