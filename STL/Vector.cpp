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

        size_t size()
        {
            return finish - start;
        }
        size_t capacity()
        {
            return endofstorge - start; 
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
            if(n > capacity())
            {
                size_t oldsize = capacity();
                T* tmp = new T[n];
                if(start)
                {
                    for(size_t i = 0;i < oldsize;++i)
                    {
                        tmp[i] = start[i];
                    }
                }
                start = tmp;
                finish = start + size();
                endofstorge = start + n;
            }
        }

        void resize(size_t n,const T& value = T())
        {
            if(n < size())
            {
                finish = start + n;
            }
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
