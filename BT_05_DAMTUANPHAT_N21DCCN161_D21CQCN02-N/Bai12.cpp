#include<iostream>

using namespace std;

int phanTu(int n, int a0, int d) {
    if(n == 0) {
        return a0;
    }

    return phanTu(n-1, a0, d) + d;
}

int main() {
    int n, a0, d;
    cout << "Nhap vao so n nguyen duong: ";
    cin >> n;
    cout << "Nhap gia tri ban dau: ";
    cin >> a0;
    cout << "Nhap cong sai: ";
    cin >> d;


    cout << "Phan tu thu" << n << " cua cap so cong la: " << phanTu(n, a0, d);
    return 0;
}