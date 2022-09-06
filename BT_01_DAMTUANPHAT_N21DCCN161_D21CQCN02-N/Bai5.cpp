#include<iostream>

using namespace std;

int main() {
    float x, y;
    cout << "Nhap vao 2 so thuc: ";
    cin >> x >> y;
    cout << "Tong 2 so thuc: " << x + y << endl;
    cout << "Hieu 2 so thuc: " << x - y << endl;
    cout << "Tich 2 so thuc: " << x * y << endl;
    if( y != 0 ) {
        cout << "Thuong 2 so thuc: " << x / y << endl;
    }
    cout << "Gia tri trung binh 2 so thuc: " << (x + y) / 2 << endl;

    return 0;
}
