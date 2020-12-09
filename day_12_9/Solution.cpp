/*
 * 输入：[[0,3,4,4,5,6,9],[2,4,5,9,9,10],[3,5,8,9,11],[1,4,5,7,9]] 
 * 输出：5   
 * 描述：子元素长度不等 内部有序  递增 元素可重复 不唯一 找出在每个数组中都出现的最小值 没有此值返回-1   
 */ 


#include <iostream>
#include <vector>
#include <functional>

using namespace std;

void Swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int Quick_Sort(int arr[],int length)
{
    int low = 0;
    int high = length - 1;
    int num = arr[0];
    while(low <=high )
    {
        if(arr[low] > num)
        {
            Swap(&arr[low],&arr[high]);
            low++;
        }
        if(arr[high] < num)
        {
            Swap(&arr[low],&arr[high]);
            high--;
        }
    }
return : 
}
void Sort(int arr[] , int length)
{
    Sort(arr,);    
    Sort(arr,);
}








int main()
{
    vector<vector<int>> dp;
    int  col,row;
    cin >> col>>row;  
    vector <int> res;
    res.resize(col*row, 0);
    dp.resize(col,vector<int>());
    for(int i = 0; i < col;++i)
    {
        for(int j = 0;i < row;++j)
        {
            int num;
            cin >> num;
            dp[i].push_back(num);
            res.push_back(num);
        }
    }
   

    
    

    

    return 0;
}

