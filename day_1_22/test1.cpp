#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    bitset<10000000000000000000> BT;
    BT.set(10);
    cout << BT.count() << endl;

    return 0;
}
