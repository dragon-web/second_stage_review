#include <iostream>
#define SQR(A) A*A

using namespace std;

int main() {
    int x=6,y=3,z=2;
    x/=SQR(y+z)/SQR(y+z);
    cout<< x<< endl;
    return 0;
}
