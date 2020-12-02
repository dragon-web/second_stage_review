#include<iostream>
#include<vector>
#include<functional>
using namespace std;

int Solution(int A, int B)
{
  int max = A > B ? A : B;
  int min = A + B - max;
  vector<int> vec1;
  vector<int> vec2;
  if(max == min )
  {
    return max;

  }
  else{

    do
    {
      if (max % A == 0 && max % B == 0)
      {
        return max;

      }
      else
        ++max;

    } while (true);

  }

}

int main()
{
  int A,B;
  while(cin>>A>>B)
  {
    int res = Solution(A,B);   
    cout<<res<<endl;

  }

  return 0;

}
