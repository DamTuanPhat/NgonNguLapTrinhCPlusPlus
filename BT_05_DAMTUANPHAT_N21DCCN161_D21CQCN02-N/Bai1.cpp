#include<iostream>

using namespace std;

int main() {
    int a[50][50];
    int N;
    cout << "Nhap kich thuoc cua ma tran vuong: ";
    cin >> N;

    cout << "Nhap gia tri cho ma tran: ";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> a[i][j];

    cout << "Ma tran da nhap vao la: " << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << a[i][j] << ' ';

        cout << endl;
    }

    cout << endl << "Duong cheo chinh la: " << endl;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if (i != j) {
                cout << "  ";
            }
            else {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }

    cout << endl << "Duong cheo phu la: " << endl;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if (!(i + j == N - 1)) {
                cout << "  ";
            }
            else {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }


    return 0;
}