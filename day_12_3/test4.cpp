
#include <iostream>

using namespace std;


class A
{
  public:
    virtual void func(int val = 1)
    { std::cout<<"A->"<< val <<std::endl; }
    virtual void test(){ func(); }

};
class B : public A
{
  public:
    void func(int val=0){ std::cout<<"B->"<< val <<std::endl;  }

};
int main(int argc ,char* argv[])
{
  B*p = new B;
  p->test();
  return 0;

}
