#include<iostream>

using namespace std;

void Swap(int *num1 ,int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void AdjustDown(int arr[] , int size, int parent)
{
    int child = parent * 2 + 1;
    while(child < size)
    {
        if(child + 1 < size && arr[child] < arr[child + 1])
        {
            child++;
        }
        if(arr[child] > arr[parent])
        {
            Swap(&arr[child], &arr[parent]);
            parent = child;
            child = 2 * child + 1;
        }
        else 
        {
            return;
        }
    }
}

void HeapSort(int arr[], int size)
{
    int end = size - 1;
    for(int i = (size - 2) / 2 ; i > 0 ; i --)
    {
        AdjustDown(arr,size,i);
    }
    while(end)
    {
        Swap(&arr[0],&arr[end]);
        AdjustDown(arr,end,0);
        end--;
    }
}

int main()
{
    int arr[100];
    for(int i = 0;i < 100;++i)
    {
        arr[i] = 1000 - i;
    }
    int sz = sizeof(arr)/sizeof(arr[0]);
    HeapSort(arr,sz);
    for(auto &e : arr)
    {
        cout << e <<" ";
    }
}


