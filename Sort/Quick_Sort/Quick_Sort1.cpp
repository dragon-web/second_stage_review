#include <iostream>

using namespace std;

void Swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partion(int* arr , int left , int right)
{
    int end = right - 1;
    int begin = left;
    int key = arr[end];
    while(begin < end && arr[begin] <= key)
    {
        begin++;
    }
    while(begin < end && arr[end] >= key)
    {
        end--;
    }
    if(begin < end)
    {
        Swap(&arr[begin] , &arr[end]);
    }
    if(begin != right - 1)
    {
        Swap(&arr[begin],&arr[end]);
    }
    return begin;
}


void Quick_Sort(int* arr , int left , int right)
{
    if(right - left > 1)
    {
        int div = Partion(arr, left , right);
        Quick_Sort(arr, left, div);
        Quick_Sort(arr, div + 1 , right);
    }
}

int main()
{
    int arr[] = {1,2,5,1,4,1,4,56,6,8,76,1};
    size_t sz = sizeof(arr) / sizeof(arr[0]);
    Quick_Sort(arr,0,sz);
    for(size_t i = 0;i < sz;++i)
    {
        cout << arr[i] <<" "; 
    }
    return 0;
}
