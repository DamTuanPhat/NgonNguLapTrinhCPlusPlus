#include<iostream>

using namespace std;

int tich(int n) {
    if(n == 1) {
        return 1;
    }
    return n*tich(n-1);
}

int main() {
    int n;
    cout << "Nhap vao so n nguyen duong: ";
    cin >> n;

    cout << "Tich " << n << " so tu nhien dau tien la: " << tich(n);
    return 0;
}