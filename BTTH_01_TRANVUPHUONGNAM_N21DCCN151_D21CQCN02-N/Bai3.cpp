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

int BSCNN(int a, int b) {
    int bcnn;
    int maxV = a * b;
    int step = max(a,b);
    for(int i = step; i <= maxV; i += step) {
        if(i % a == 0 && i % b == 0) {
            bcnn = i;
            break;
        }
    }

    return bcnn;
}

int main() {
    int n;
    
    do {
        cout << "Nhap vao gia tri n (n >= 2): ";
        cin >> n;
    }
    while (n < 2);

    int tong = 0;
    for(int i = 2; i <= n; i ++) {
        cout << "BSCNN(" << i*2 -2 << ", " << i*2 << ")=" << BSCNN(i*2-2, i*2) << endl;
        tong += BSCNN(i*2 - 2, i*2);
    }

    cout << "Tong can tim la: " << tong << endl;
    

    return 0;
}