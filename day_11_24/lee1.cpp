#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  int n;
  while(cin >> n)
  {
    vector<int> v(3*n,0);
    long long sum = 0;
    for(int i = 0; i < (3 * n); ++i)
    {
      cin >> v[i];

    }
    sort(v.begin(), v.end());
    for(int i = n; i <= 3 * n - 2; i += 2)
    {
      sum += v[i];

    }
    cout << sum << endl;

  }

}
