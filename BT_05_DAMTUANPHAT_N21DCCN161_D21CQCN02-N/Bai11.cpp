#include<iostream>

using namespace std;

int tichChanLe(int n) {
    if(n == 2 || n == 1) {
        return n;
    }
    return n * tichChanLe(n-2);
}

int main() {
    int n;
    cout << "Nhap vao so n nguyen duong: ";
    cin >> n;

    cout << "Tich chan le " << n << " so tu nhien dau tien la: " << tichChanLe(n);

    return 0;
}