/*
Ten SV: Dam Tuan Phat
MSSV: N21DCCN161
Lop: D21CQCN02-N
*/

#include<iostream>
#include<math.h>

using namespace std;

int main() {
    bool isTriangle = false;
    float a, b, c;
    cin >> a >> b >> c;
    if((a + b) > c && (b + c) > a && (a + c) > b) {
        isTriangle = true;
    }

    if(!isTriangle) {
        cout << a << ", " << b << ", " << c << " Khong phai la ba canh cua tam giac!" << endl;
    }
    else {
        float perimeter = a + b + c;
        float p = perimeter / 2;
        float area = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << "Area of Triangle: " << area << endl;
        cout << "Perimeter of Triangle: " << perimeter << endl;
    }


    return 0;
}