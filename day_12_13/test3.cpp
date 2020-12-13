#include <iostream>
#include <iomanip>

using namespace std;
#define N 256

void print_pyramid(int a[N][N], int lines);

int main(void) {
    int n = 0;
    int a[N][N] = {0};
    cout << "请输入要打印的杨辉三角形行数：";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                a[i][j] = 1;
            }
            else {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
    } 
    print_pyramid(a, n);
    return 0;
}

void print_pyramid(int a[N][N],int lines) {
    for (int i = 0; i < lines; i++) {
        int width = (lines - i) * 2;
        cout << setw(width) << a[i][0];
        for (int j = 1; j <= i; j++) {
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
}
