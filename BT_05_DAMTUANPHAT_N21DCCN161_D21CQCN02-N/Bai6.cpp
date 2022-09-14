#include <iostream>

using namespace std;	

int main()
{
    int M, N, P, Q;
    cout << "Nhap kich thuoc cua ma tran 1 dang MxN: ";
    cin >> M >> N;
    
    int a[50][50];
    cout << "Nhap gia tri cho ma tran 1: " << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> a[i][j];
        }
    }

    cout << "Nhap kich thuoc cua ma tran 2 dang NxP: ";
    cin >> P >> Q;
    int b[50][50];
    cout << "Nhap gia tri cho ma tran 2: " << endl;
    for (int i = 0; i < P; ++i) {
        for (int j = 0; j < Q; ++j) {
            cin >> b[i][j];
        }
    }

    if(N == P) {
        int result[50][50];
        cout << "Tich cua 2 ma tran: " << endl;
        for(int i = 0; i < M; i++) {
            for(int j = 0; j < Q; j++) {
                result[i][j] = 0;
                for(int k = 0; k < N; k++) {
                    result[i][j] = result[i][j] + (a[i][k]*b[k][j]);
                }
                cout << result[i][j] << " ";
                       
            }
            cout << endl;
        }
    }

    return 0;
}
