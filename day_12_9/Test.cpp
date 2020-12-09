#include <iostream>
#include <vector>

using namespace std;

void Solu(int* arr[],int col , int row)
{
    int num = 0;
    int i = 0;
    int j = 0;
    while(i < col && j < row)
    {
     if(arr[i][j] == arr[i+1][j])
     {
        i++;
        continue;
     }
    else{
        j++;
        i = 0;
    }
}
}
}
if(j == 0)

    }


int main()
{


    return 0;
}
