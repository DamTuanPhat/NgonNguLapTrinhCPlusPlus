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

int main() {
    int length = 10;
    int a[1000];

    for(int i = 0; i < length; i++) {
        cout << "Nhap gia tri phan tu thu " << i << " : ";
        cin >> a[i];
    }

    cout << "Mang truoc khi sap xep : ";
    for(int i = 0; i < length; i++) {
        cout << a[i] << " ";
    }

    cout << endl << "Mang sau khi sap xep : ";
    for(int i = 0; i < length - 1; i++) {
        for(int j = i + 1; j < length; j++) {
            if(a[i] > a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    for(int i = 0; i < length; i++) {
        cout << a[i] << " ";
    }

    return 0;
}