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

};
