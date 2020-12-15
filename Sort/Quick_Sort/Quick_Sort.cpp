#include <iostream>

using namespace std;

void Swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int Pation(int* arr, int left, int right)
{
    int begin = left;
    int end = right-1;
    int key = arr[end];
    while(begin < end)
    {
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
            Swap(&arr[begin],&arr[end]);
        }
    }
    if(begin != right-1)
    Swap(&arr[begin],&arr[right -1]);
    return begin;
}

void Quick_Sort(int *arr ,size_t left ,size_t right)
{
    if(right - left > 1)
    {
        int div = Pation(arr,left,right); // 基准值
        Pation(arr,left,div);  
        Pation(arr,div+1,right);
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
