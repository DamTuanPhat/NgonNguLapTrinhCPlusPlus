#include<iostream>

using namespace std;

int doubleFactorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    
    return n*doubleFactorial(n-2);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if ( n < 0) {
        cout << "Invalid value, please re-enter new value" << endl;
    }
    else {
        cout << "Factorial of " << n << " : " << doubleFactorial(n);
    }

    return 0;
}
