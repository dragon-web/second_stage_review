#include <iostream>

using namespace std;

class Base
{
  public:
  int Bar(char x)
  {
    return (int)x;
  }
  virtual int Bar(int x)
  {
    return x / 2;
  }
};

class Derived : public Base 
{
  public :
    int Bar(char x)
    {
      return (int)(-x);
    }
    int Bar(int x)
    {
      return x/2;
    }
};

int main()
{
  Derived Obj;
  Base *pObj = &Obj;
  printf("%d,",pObj->Bar((char)(100)));
  printf("%d,",pObj->Bar((100)));
}
