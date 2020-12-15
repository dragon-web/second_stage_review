#include <iostream>
#include <vector>

using namespace std;

void Bubble_Sort(int *arr,size_t sz)
{
    for(size_t i = 0;i < sz - 1;++i)
    {
        for(size_t j = 0; j < sz - i - 1;++j)
        {
            if(arr[j] > arr[j+1])
            {
               int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {1,12,4,4,4,5,5,3,8};
    size_t sz = sizeof(arr)/sizeof(arr[0]);
    Bubble_Sort(arr,sz);
    for(size_t i = 0;i < sz ;++i)
    {
        cout << arr[i]<<" ";
    }
}
