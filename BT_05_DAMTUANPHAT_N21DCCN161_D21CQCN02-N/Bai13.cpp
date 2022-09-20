#include<iostream>

using namespace std;

int phanTu(int n, int a0, int q) {
    if(n == 0) {
        return a0;
    }

    return phanTu(n-1, a0, q) * q;
}

int main() {
    int n, a0, q;
    cout << "Nhap vao so n nguyen duong: ";
    cin >> n;
    cout << "Nhap gia tri ban dau: ";
    cin >> a0;
    cout << "Nhap cong boi: ";
    cin >> q;


    cout << "Phan tu thu" << n << " cua cap so cong la: " << phanTu(n, a0, q);
    return 0;
}
