#include <iostream>

using namespace std;	

int main()
{
    int a[50][50];
    int M, N;
    cout << "Nhap kich thuoc cua ma tran MxN: ";
    cin >> M >> N;
    
    cout << "Nhap gia tri cho ma tran: " << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> a[i][j];
        }
    }

    cout << "Ma tran da nhap vao la: " << endl;
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    for(int i = 0; i < M; i++) {
        int sum = 0;
        for(int j = 0; j < N; j++) {
            sum += a[i][j];
        }
        cout << "Tong cua hang " << i << " la: " << sum << endl;
    }


    for(int i = 0; i < N; i++) {
        int sum = 0;
        for(int j = 0; j < M; j++) {
            sum += a[j][i];
        }
        cout << "Tong cua cot " << i << " la: " << sum << endl;
    }
    return 0;
}
