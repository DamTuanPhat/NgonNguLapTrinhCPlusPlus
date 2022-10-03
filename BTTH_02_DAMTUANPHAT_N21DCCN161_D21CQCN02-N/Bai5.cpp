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

void check() {
    int N = 1000;
    bool check[2000];

    for (int i = 2; i <= N; i++) {
        check[i] = true;
    }

    for (int i = 2; i <= N; i++) {
        if (check[i] == true) {
            for (int j = 2 * i; j <= N; j += i) {
            check[j] = false;
            }
        }
    }
    
    for (int i = 2; i <= N; i++) {
        if (check[i] == true) {
            cout << i << " ";
        }
    }
}

int main() {
    check();
    return 0;
}
