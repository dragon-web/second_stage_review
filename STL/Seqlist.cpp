#include <iostream>
#include <assert.h>

using namespace std;

template <typename T>

class SeqList
{
    public:
       SeqList(size_t capacity = 10) : _array(new T[capacity]), _capacity(capacity), _size(0)
        {  }
        void push_back(const T& data);
        void pop_back()
        {
            if(!Empty())
            {
                --_size;
            }
        }
        bool Empty()const 
        {return _size == 0;}
        size_t Size()
        {return _size;}
        size_t Capacity()const 
        {return _capacity;}
        ~SeqList()
        {
            if(_array)
            {
                delete _array;
                _size = 0;
                _capacity = 0;
            }
        }
        T& operator[](size_t data)
        {
            assert(data < _size);
            return _array[data];
        }
        T& operator[](size_t data) const
        {
            assert(data < _size);
            return _array[data];
        }
    private:
        T* _array;
        size_t _capacity;
        size_t _size;
};

template <typename T>

void SeqList<T>::push_back(const T& data)
{
    if(_size == _capacity)
    {
        cout << "The SeqList is full" << endl;
        return;
    }
    else 
    {
        _array[_size++] = data;
    }
}
int main()
{
    SeqList<int> dp;
    dp.push_back(1);
    dp.push_back(2);
    for(size_t i = 0; i < dp.Size();++i)
    {
        cout << dp[i] << " ";
    }
    return 0;
}




