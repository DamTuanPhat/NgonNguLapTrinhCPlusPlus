#include<iostream>
#include <algorithm> 

using namespace std;

float trung_binh(int a, int b, int c) {
    return (float) (a + b + c) / 3;
}

int main() {
    int a, b, c;
    cout << "Nhap gia tri so thu 1 = ";
    cin >> a;
    cout << "Nhap gia tri so thu 2 = ";
    cin >> b;
    cout << "Nhap gia tri so thu 3 = ";
    cin >> c;

    cout << "Gia tri lon nhat cua 3 so vua nhap la: " << max(a, max(b, c)) << endl;
    cout << "Gia tri trung binh cua 3 so la: " << trung_binh(a, b, c) << endl;

    return 0;
}
