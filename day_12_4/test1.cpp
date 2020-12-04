#include <iostream>

using namespace std;

template<class T> 

class Foo
{
  T tVar;
  public:
  Foo(T t) : tVar(t)
  {
  }
};


template<class T>
class FooDerived : public Foo<T>
{
  FooDerived(int a) :  
  {
    cout<<" I am Derived"<< a <<endl;
  }
};
int main()
{
  FooDerived<int> D(2);

  return 0;
}
