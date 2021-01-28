#include <iostream>

using namespace std;

bool Solution( unsigned long long n ,unsigned long long r )
{
    unsigned double Cir = 2 * 3.14 * r;
    if(Cir - n*1.0  > 1e-6)
    {
        return true;

    }
    else{
        return false;

    }

}
int main()
{
    unsigned long long  n,r;
    while(cin >> n >> r)
    {
        bool res = Solution(n , r);
        if(res == false)
        {
            cout <<"No" << endl;

        }
        else{
            cout << "Yes" <<endl;

        }

    }
    return 0;

}
