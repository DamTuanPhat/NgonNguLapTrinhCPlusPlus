/*
Ho va Ten: Tran Vu Phuong Nam
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

int tong(int *a, int *b) {
    return *a + *b;
}

int main() {
    int n;
    cout << "Nhap vao so nguyen duong n:";
    cin >> n;
    
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum = tong(&sum, &i);
    }

    cout << "Tong tu 1 den " << n << " la: " << sum << endl;

    return 0;
}
