#include <iostream>
#include <string.h>

using namespace std;

template <class T>
class Test
{
public:
   typedef Test<T> add; 
   Test(const T* _da = T()):data(_da)
    {

    }

    
private:
int data;

};
int main()
{
   Test<int> da(1);

    return 0;
}
