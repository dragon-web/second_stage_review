
#include <stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;
int* YangHuiData(int n); 
void YangHuiShow(int *pData, int n);
int main() {
    int n;
    cout << "请输入杨辉三角形的行数";
    cin >> n;
    int *pData = YangHuiData(n);
    YangHuiShow(pData, n);

}

int* YangHuiData(int n) {
    int *a = new int[n*n];
    int i, j;
    for (i = 0; i<n*n; i++) {
        a[i] = 0;
    }

    a[0] = 1;
    a[n] = 1;
    a[n + 1] = 1;
    for (i = 2; i<n; i++) {
        a[i*n] = 1;
        a[i*n + i] = 1;
        for (j = 1; j<i; j++) {
            a[i*n + j] = a[(i - 1)*n + j - 1] + a[(i - 1)*n + j];
        }
    }
    return a;
}
void YangHuiShow(int *a, int n) {
    int i, j;
    for (i = 0; i<n; i++)
    {
        for (j = 0; j<n - i - 1; j++)
            cout << setw(3) << " ";
        for (j = 0; j <= i; j++)
            cout << setw(6) << a[i*n + j];
        cout << endl;
    }
}

