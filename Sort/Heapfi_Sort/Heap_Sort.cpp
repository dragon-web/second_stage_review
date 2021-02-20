#include<iostream>

using namespace std;

void Swap(int *num1 ,int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void HeapAdjust(int array[], int size, int parent)//向下调整
{
    int child = parent * 2 + 1;
    while(child < size)
    {
        //找较大孩子 先保证parent 的右孩子存在

        if(child+1 < size && array[child + 1] > array[child])
        {
            child += 1;
        }

        if(array[child] > array[parent])
        {
            Swap(&array[child],&array[parent]);
            parent = child;
            child = parent * 2 + 1;
        }
        else 
        {
            return;
        }
    }
}
void HeapSort(int array[], int size)
{
   
    int end = size - 1; 
    for(int root = (size-2)/2;root >= 0;root--)
    {
        HeapAdjust(array,size,root);//向下调整
    }
    //利用堆删除的思想进行排序
    while(end)
    {
        Swap(&array[0] , &array[end]);
        HeapAdjust(array,end,0);
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


