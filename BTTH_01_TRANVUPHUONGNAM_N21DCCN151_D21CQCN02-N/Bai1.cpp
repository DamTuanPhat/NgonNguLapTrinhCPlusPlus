/*
Ho ten: Tran Vu Phuong Nam
MSSV: N21DCCN151
Lop: D21CQCN02-N
*/
#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <cmath>
#include <string>
#include <numeric>
#include <map>
#include <iomanip>
#include <set>

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
