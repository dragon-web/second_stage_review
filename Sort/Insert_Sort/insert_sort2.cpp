#include <iostream>

using namespace std;

void Insert_Sort(int *arr, size_t sz)
{
    for(size_t i = 1; i < sz; ++i)
    {
        int key = arr[i]; // 当前要插入元素
        int end = i - 1; 
        while(key <= arr[end] && end >= 0)
        {
            arr[end+1] = arr[end];
            end--;
        }
        arr[end + 1] = key;
    }
} 

int main()
{
    int arr[100];
    for(int i = 0 ; i < 100 ;++i)
    {
        arr[i] = 100 - i; 
    }
    size_t sz = sizeof(arr)/sizeof(arr[0]);
    Insert_Sort(arr,sz);
    for(size_t i = 0;i < sz;++i)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}
