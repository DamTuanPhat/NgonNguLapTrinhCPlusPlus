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

// long long tongNDGT(long n) {
    
//     if ( n == 1) {
//         return 1;
//     } 
//     return tongNDGT(n - 1)*n;

// }

// int main() {
//     long n;
//     cin >> n;
//       float sum = 0;
//    for (int i = 1; i <= n; i++) {
//      float a =tongNDGT(i);
//      sum+= 1/a;
// }
// cout <<  sum << endl;
// }
 int main() {
    int n ; cin >> n;
    int fre = 1;
    int a;
    if ( n % 2 == 1) {
        a = 1;
    }
    else a = 2;
    for (int i = a;i<=n;i+=2) {
         fre*=i;
    }
    cout << fre << endl;
    }
 