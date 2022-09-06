#include<iostream>
#include<math.h>

using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n*factorial(n-1);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if ( n < 0) {
        cout << "Invalid value, please re-enter new value" << endl;
    }
    else {
        cout << "Factorial of " << n << " : " << factorial(n);
    }

    return 0;
}
