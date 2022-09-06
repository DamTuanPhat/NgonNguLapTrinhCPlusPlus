#include<iostream>

using namespace std;

int main() {
    float dayLon, dayNho, chieuCao;
    cout << "Nhap day lon, day nho, chieu cao cua hinh thang: ";
    cin >> dayLon >> dayNho >> chieuCao;
    float area = (dayLon + dayNho) * chieuCao / 2; 
    cout << "Dien tich cua hinh thang la: " << area << endl;

    return 0;
}

