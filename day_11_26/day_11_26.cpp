#include <iostream>
#include <vector>
using namespace std;

/*
int main()
{
  int n; //总共有多少个数
  cin >> n;
  vector<int> a_n(100000, 0); 
  int i = 0;
  while (i < n)
  {
    cin >> a_n[i]; 
    i++;

  }
  int cut = 0, j = 0; 
  while (j < n)
  {
    if (a_n[j] < a_n[j + 1]) { 
      while (j < n && a_n[j] <= a_n[j + 1]) //判断是否为连续递增
      {
        j++; //如果是连续的就继续向后判断, 直到跳出

      }
      cut++; //当不在是递增的时候cut+1;并跳出递增判断
      j++;
    }
    else if (a_n[j] == a_n[j + 1]){  //判断是否为相等的
      j++;
    }
    else{  //如果是递减数列
      while (j < n && a_n[j] >= a_n[j + 1]) //判断是否为连续递减
      {
        j++; //如果是连续的就继续向后判断,直到跳出

      }
      cut++; //跳出时cut + 1
      j++; 
    }

  }
  cout << cut << endl;
  return 0;

}*/



int main()
{
  int n;
  cin>>n;
  int *A = (int*)malloc(sizeof(int)*n);
  for(int i = 0; i < n;++i)
  {
      cin>>A[i];
  }
  vector<int> temp;
  for(int j = 0;j < n-1;++j)
  {
    if(A[j] < A[j+1] && flag == 0)
    {
      
    }
  }
  return 0;
}
































