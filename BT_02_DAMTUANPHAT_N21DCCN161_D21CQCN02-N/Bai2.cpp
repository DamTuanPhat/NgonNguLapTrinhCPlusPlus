#include<iostream>

using namespace std;

int main() {
    float x1, y1, x2, y2;
    cout << "Nhap toa do diem A(x1, y1): ";
    cin >> x1 >> y1;
    cout << "Nhap toa do diem B(x2, y2): ";
    cin >> x2 >> y2;
    float x3 = (x1 + x2) / 2, 
          y3 = (y1 + y2) / 2;
    cout << "Toa do trung diem cua hai diem A, B la C:(" << x3 << ", " << y3 << ")." << endl;
}