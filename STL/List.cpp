#include <iostream>

using namespace std;

template<class T>

class ListNode
{
    ListNode(const T& value = T())
    : next(nullptr),prev(nullptr),data(value) 
    {} 
    ListNode<T> *next;
    ListNode<T> *prev;
    T data;
};



template<class T>

struct ListIterator
{
    typedef ListNode<T> Node;
    typedef ListIterator<T> Self;
    
    ListIterator(Node* str = nullptr) : _ptr(str)
    {}
    Self& operator* ()
    {
        return _ptr->data; 
    }
    Self& operator->() 
    {
        return  &_ptr->data;
    }
    Self& operator++()
    {
        _ptr = _ptr->next;
        return (*this);
    }
    Self& operator++(int)
    {
       Self tmp(*this);
       _ptr = _ptr->next;
       return tmp;
    }
    Self& operator-- ()
    {
        _ptr = _ptr->prev;
        return (*this);
    }
    Self& operator--(int)
    {
        Self tmp(*this);
        _ptr = _ptr->prev;
        return tmp;
    }
    bool operator != (const Self& L) const
    {
        return _ptr != L._ptr;
    }
    bool operator == (const Self L) const{
        return _ptr != L._ptr;
    }

     Node* _ptr;
};
