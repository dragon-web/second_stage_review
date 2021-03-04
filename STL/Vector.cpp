#include <iostream>
#include <assert.h>
#include <string.h>

using namespace std;

template <class T>

class Vector
{
    public:
        typedef T* iterator;
    public:
        Vector() : start(nullptr),finish(nullptr),endofstorge(nullptr)
    {}
        Vector(int n ,const T& value = T()) : start(new T[n]),finish(start + n),endofstorge(finish)
    {
        reverse(n);
        while(n--)
        {
            push_back(value);
        }
    }
        template<class InputIterator>
            Vector(InputIterator first , InputIterator last)
            {
                reverse(last - first);
                while(first != last)
                {
                    push_back(*first);
                    ++first;
                }
            }

        Vector(const Vector<T> & v):start(nullptr),finish(nullptr),endofstorge(nullptr)
    {
        reverse(v.capacity());
        iterator it = begin();

    }

    void reverse(size_t n)
    {
        if(n > capacity())
        {
            size_t oldSize = size();
            T* tmp = new T[n];
            if(start)
            {
                for(size_t i = 0 ;i < oldSize; ++i)
                {
                    tmp[i] = start[i];
                }
                start = tmp;
                finish = start + size();
                endofstorge = start + n;
            }
        }
    }

    void resize(size_t n, const T& val = T())
    {

    }

    iterator begin()
    {
        return start;    
    }
    iterator end()
    {
        return finish;
    }
    size_t size()
    {
        return finish - start;
    }
    size_t capacity()
    {
        return endofstorge - start;
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
