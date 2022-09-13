#include <iostream>

using namespace std;	

int main()
{
    int a[50][50];
    int M, N;
    cout << "Nhap kich thuoc cua mang MxN: ";
    cin >> M >> N;
    
    cout << "Nhap gia tri cho mang: " << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> a[i][j];
        }
    }

    cout << "Mang da nhap vao la: " << endl;
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    
    
    return 0;
}
