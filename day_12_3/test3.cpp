#include <iostream>
#include <vector>

using namespace std;

int main ()
{
  int row = 0;
  int col = 0;
  while(cin >> row >> col)
  {
    //创建一个二维数组，横向的大小为横向格子数+1， 纵向的大小也为纵向格子数+1
    vector<vector<int>> Max_M(row+1,vector<int>(col+1,1)); 
    if(Max_M.empty())
    {
      cout << 0 << endl;
      return 0;
    }
    for(int i = 1; i < row+1; i++)
    {
      for(int j = 1; j < col+1; j++) //走到一个格子数，肯定是走到这个格子的左边的或者走到上边格子的总和
      {
        Max_M[i][j] = Max_M[i-1][j]+Max_M[i][j-1];
      }
    }
    cout << Max_M[row][col] << endl; //返回右下角的格子数
  }
}
