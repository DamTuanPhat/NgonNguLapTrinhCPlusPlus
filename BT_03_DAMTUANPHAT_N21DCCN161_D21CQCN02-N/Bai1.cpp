/*
Ten SV: Dam Tuan Phat
MSSV: N21DCCN161
Lop: D21CQCN02-N
*/

#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if ( n <= 0 ) {
        cout << "Invalid value, please re-enter new value" << endl;
    }
    else {
        int sumWithLoop = 0;
        int sumWithFormula = 0;

        cout << "S1 = 1 + 2 + 3 + ... + n = n(n+1)/2" << endl;
        for(int i = 1; i <= n; i++) {
            sumWithLoop += i;
        }
        sumWithFormula = n*(n+1)/2;
        cout << "Sum with loop " << sumWithLoop << endl;
        cout << "Sum with formula " << sumWithFormula << endl << endl;

        cout << "S2 = 1 + 3 + 5 + ... + (2n + 1) = (n+1)^2" << endl;
        sumWithLoop = 0;
        for (int i = 0; i <= n; i++) {
            sumWithLoop += 2*i+1;
        }
        sumWithFormula = pow((n+1), 2);
        cout << "Sum with loop " << sumWithLoop << endl;
        cout << "Sum with formula " << sumWithFormula << endl << endl;

        cout << "S3 = 2 + 4 + 6 + ... + 2n = n(n+1)" << endl;
        sumWithLoop = 0;
        for (int i = 1; i <= n; i++) {
            sumWithLoop += 2*i;
        }
        sumWithFormula = n*(n+1);
        cout << "Sum with loop " << sumWithLoop << endl;
        cout << "Sum with formula " << sumWithFormula << endl << endl;

    }
    return 0;
}
