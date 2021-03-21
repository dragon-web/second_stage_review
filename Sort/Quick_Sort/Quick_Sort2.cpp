#include <iostream>
#include <stack>
#include <queue>
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
    if(begin != right-1)//begin 不是最后一个元素
    Swap(&arr[begin],&arr[right -1]);
    return begin;
}

void Quick_Sort(int *arr ,size_t left ,size_t right)
{
    /*if(right - left > 1)
    {
        int div = Pation(arr,left,right); // 基准值
        Quick_Sort(arr,left,div);  
        Quick_Sort(arr,div+1,right);
    }*/
    stack<int> s;
    int low = left;
    int high = right - 1;
    int div;
    s.push(low);
    s.push(high);
    while(!s.empty())
    {
        high = s.top();
        s.pop();
        low = s.top();
        s.pop();
        div = Pation(arr,low,high);
        if(low < div - 1)
        {
            s.push(low);
            s.push(div - 1);
        }
        if(div + 1 < high)
        {
           s.push(div + 1);
           s.push(high);
        }
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
