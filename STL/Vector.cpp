#include <iostream>
#include <assert.h>
#include <string.h>

using namespace std;

template <class T>

class Vector
{
    public:
        typedef T* iterator;
        typedef const T* const_iterator;
    public:
        Vector() : start(nullptr),finish(nullptr),endofstorge(nullptr)
        {}
        Vector(int n ,const T& data = T()) : start(new T[n]),finish(start + n),endofstorge(finish)
        {
            for(int i = 0;i < n;++i)
            {
                start[i] = data;
            }
        }
       /* Vector(const Vector<T> &v)
        {
            start =  
        } 
       */
        size_t size()
        {
            return finish - start;
        }

        iterator begin()
        {
            return start;
        }
        iterator end()
        {
            return finish;
        }
        void reverse(size_t n)
        {
            
        }

    private:
        iterator start;
        iterator finish;
        iterator endofstorge;
};

int main()
{

    return 0;
}
