#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>

using namespace std;
template<class T1, class T2>
struct pair
{
    typedef T1 first_type;
    typedef T2 second_type;
    
    T1 first;
    T2 second;
    pair():first(T1()) , second(T2())
    {}
    pair(const T1& a, const T2& b)
    {
        first = a;
        second = b;
    }
};

int main()
{
    int array[] = { 1,3, 3, 5, 7, 9, 2, 4, 6, 8, 0, 1, 3, 5, 7, 9, 2, 4, 6, 8, 0  };
    set<int> se(array,array + sizeof(array) / sizeof(array[0]));
   cout << se.count(3)<< endl; 
}




