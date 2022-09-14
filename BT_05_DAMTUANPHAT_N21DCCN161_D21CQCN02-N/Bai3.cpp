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

    

    
    
    return 0;
}
