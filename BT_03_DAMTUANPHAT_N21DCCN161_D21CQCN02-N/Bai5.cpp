#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    bool isPrimeNumber = false;
    if (n <=0 ) {
        cout << "Invalid value, please re-enter new value" << endl;
    }
    else {
        if ( n > 1) {
            if ( (n-1)*(n-2) != n ) {
                isPrimeNumber = true;
            }
        }
    }

    if (isPrimeNumber) {
        cout << n << " is prime number." << endl; 
    }
    else {
        cout << n << " is not prime number." << endl;
    }

    return 0;
}