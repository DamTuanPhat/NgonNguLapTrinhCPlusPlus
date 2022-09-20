#include<iostream>

using namespace std;

int tongChanLe(int n) {
    if(n == 2 || n == 1) {
        return n;
    }
    return n + tongChanLe(n-2);
}

int main() {
    int n;
    cout << "Nhap vao so n nguyen duong: ";
    cin >> n;

    cout << "Tong chan le " << n << " so tu nhien dau tien la: " << tongChanLe(n);

    return 0;
}