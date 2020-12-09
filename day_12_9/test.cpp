#include <iostream>
#include <vector>

using namespace std;

int Solution(int* arr[],int row ,int col)
{
    int i = 0; // 标记行
    int j = 0; // 标记列
    int num = 0;
    while(i < row - 1 && j < col - 1)                                                                                              
    {
        if(arr[i][j] == arr[i+1][j])
        {
            i++;
        }
        else
        {
            j++;
            i = 0;
        }
    }
    num = arr[i][j];
}


