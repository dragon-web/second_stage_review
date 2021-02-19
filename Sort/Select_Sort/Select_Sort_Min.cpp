#include<iostream>
// 原理 ： 每趟排序在当前待排序序列中选出关键码最小的记录 ，添加到有序序列中

using namespace std;

void Swap(int *num1 ,int *num2)
{
  int temp = *num1;
  *num1 = *num2;
  *num2 = temp; 
}

void Print(int *arr,int sz)
{
    for(int i = 0;i < sz;++i)
    {
        cout << arr[i] <<" ";
    }
    cout << endl;
}
void Select_Sort(int* arr,size_t len)
{
    for(size_t i = 0;i < len - 1;++i)
    {
        int min = i;
        for(size_t j = i; j < len;++j)
        {
          if(arr[j] < arr[min])
         {
            min = j;
         }
        }
        Swap(&arr[min],&arr[i]);
    }
}
int main()
{
  int arr[] = {1,43,5,21,2,4,5,7,12,4,32,2};
  size_t len = sizeof(arr)/sizeof(arr[0]);
  Select_Sort(arr,len);
  for(auto &e : arr)
  {
    std::cout << e << " ";
  }
  return 0;
}
