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

    if (n <=0 ) {
        cout << "Invalid value, please re-enter new value" << endl;
    }
    else {
        float sumWithForLoop = 0;
        float sumWithWhileLoop = 0;
        float sumWithDoWhileLoop = 0;

        cout << "S7 = 1 + 1/2 + 1/3 + ... + 1/n" << endl;
        int i = 1;
        for( i = 1; i <= n; i++ ) {
            sumWithForLoop += (float) 1/i;
        }
        i = 1;
        while(i <= n) {
            sumWithWhileLoop += (float) 1/i;
            i++;
        }
        i = 1;
        do {
            sumWithDoWhileLoop += (float) 1/i;
            i++;
        }
        while(i <= n);
        cout << "Sum with for loop: " << sumWithForLoop << endl;
        cout << "Sum with while loop: " << sumWithWhileLoop << endl;
        cout << "Sum with do while loop: " << sumWithDoWhileLoop << endl;

        sumWithForLoop = 0;
        sumWithWhileLoop = 0;
        sumWithDoWhileLoop = 0;
        cout << "S8 = 1/1 + 1/(2^2) + 1/(3^2) + ... + 1/(n^2)" << endl;
        i = 1;
        for( i = 1; i <= n; i++ ) {
            sumWithForLoop += (float) 1/(pow(i,2));
        }
        i = 1;
        while(i <= n) {
            sumWithWhileLoop += (float) 1/(pow(i,2));
            i++;
        }
        i = 1;
        do {
            sumWithDoWhileLoop += (float) 1/(pow(i,2));
            i++;
        }
        while(i <= n);
        cout << "Sum with for loop: " << sumWithForLoop << endl;
        cout << "Sum with while loop: " << sumWithWhileLoop << endl;
        cout << "Sum with do while loop: " << sumWithDoWhileLoop << endl;

        sumWithForLoop = 0;
        sumWithWhileLoop = 0;
        sumWithDoWhileLoop = 0;
        cout << "S9 = 1/1! + 1/2! + 1/3! + ... + 1/n!" << endl;
        i = 1;
        for( i = 1; i <= n; i++ ) {
            sumWithForLoop += (float) 1/factorial(i);
        }
        i = 1;
        while(i <= n) {
            sumWithWhileLoop += (float) 1/factorial(i);
            i++;
        }
        i = 1;
        do {
            sumWithDoWhileLoop += (float) 1/factorial(i);
            i++;
        }
        while(i <= n);
        cout << "Sum with for loop: " << sumWithForLoop << endl;
        cout << "Sum with while loop: " << sumWithWhileLoop << endl;
        cout << "Sum with do while loop: " << sumWithDoWhileLoop << endl;

    }


    return 0;
}
