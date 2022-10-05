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

int tong_le(int a[], int length) {
    int sum = 0;
    for(int i = 0; i < length; i++) {
        if ( a[i] % 2 == 1) {
            sum += a[i];
        }
    }

    return sum;
}

int main() {
    int length = 10;
    int a[1000];

    for(int i = 0; i < length; i++) {
        cout << "Nhap gia tri phan tu thu " << i << " : ";
        cin >> a[i];
    }

    cout << "Tong cac so le co trong mang tren: " << tong_le(a, length);

    return 0;
}