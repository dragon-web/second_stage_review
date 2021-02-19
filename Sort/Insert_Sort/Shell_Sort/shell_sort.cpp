#include <iostream>

using namespace std;

void Shell_Sort(int *arr, size_t sz)
{
    int gap = 3;
    while(gap > 0)
    {
        for(size_t i = gap; i < sz; ++i)
        {
            int key = arr[i];
            int end = i - gap;
            while(end >= 0 && key <= arr[end])
            {
                arr[end+gap] = arr[end];
                end -= gap;
            }
            arr[end + gap] = key;
        }
        gap--;
    }
} 

int main()
{
    int arr[] = {1,2,4,4,1,3,6};
    size_t sz = sizeof(arr)/sizeof(arr[0]);
    Shell_Sort(arr,sz);
    for(size_t i = 0;i < sz;++i)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}
