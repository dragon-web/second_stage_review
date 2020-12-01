#include<iostream>

using namespace std;

class Sta
{
  private:
    static int a;
  public:
    Sta()
    {
      a++;
    }
    ~Sta()
    {
      a--;
    }
    static int get_data()
    {
      return a;
    }
};

int Sta::a = 0;

int main()
{
 Sta* p = new Sta;
 delete p;
 cout << Sta::get_data() <<endl;
}
