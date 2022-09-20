#include<iostream>

using namespace std;

int tong(int n) {
    if(n == 1) {
        return 1;
    }
    return n + tong(n-1);
}

int main() {
    int n;
    cout << "Nhap vao so n nguyen duong: ";
    cin >> n;

    cout << "Tong " << n << " so tu nhien dau tien la: " << tong(n);
    return 0;
}