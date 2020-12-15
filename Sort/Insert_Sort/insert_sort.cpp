#include <iostream>

using namespace std;

void Insert_Sort(int *arr, size_t sz)
{
    for(size_t i= 1; i < sz ; ++i)
    {
        int key = arr[i];
        int end = i-1;
        while(end >= 0 && key <= arr[end])
        {
            arr[end+1] = arr[end];
            end--;
        }
        arr[end+1] = key;
    }
} 

int main()
{
    int arr[] = {1,2,4,4,1,3,6};
    size_t sz = sizeof(arr)/sizeof(arr[0]);
    Insert_Sort(arr,sz);
    for(size_t i = 0;i < sz;++i)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}
