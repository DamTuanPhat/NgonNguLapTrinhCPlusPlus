#include <iostream>

using namespace std;	

int main()
{
    int M, N;
    cout << "Nhap kich thuoc cua ma tran MxN: ";
    cin >> M >> N;
    
    int a[50][50];
    cout << "Nhap gia tri cho ma tran 1: " << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> a[i][j];
        }
    }

    int b[50][50];
    cout << "Nhap gia tri cho ma tran 2: " << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> b[i][j];
        }
    }

    cout << "Tong cua 2 ma tran: " << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout <<  a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Hieu cua 2 ma tran: " << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout <<  a[i][j] - b[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}
