#include<iostream>

using namespace std;

int greatestCommonDivisor(int a, int b) {
    while ( a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    return a; // or return b; a = b
}

int LeastCommonMultiple(int a, int b) {
    int result = greatestCommonDivisor(a, b);
    return a * b / result;
}

int main() {
    int m,n;
    cout << "Enter two positive intergers: ";
    cin >> m >> n;

    if ( m <= 0 || n <= 0) {
        cout << "Invalid value, please re-enter new value!" << endl;
    }
    else {
        cout << "Greatest common divisor of " << m << " and " << n << " is: " << greatestCommonDivisor(m, n) << endl;
        cout << "Least common mltiple of " << m << " and " << n << " is: " << LeastCommonMultiple(m, n) << endl;
    }

    return 0;
}