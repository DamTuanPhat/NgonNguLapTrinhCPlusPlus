#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <=0 ) {
        cout << "Invalid value, please re-enter new value" << endl;
    }
    else {
        int sumWithForLoop = 0;
        int sumWithWhileLoop = 0;
        int sumWithDoWhileLoop = 0;

        cout << "S4 = 1^2 + 2^2 + 3^2 + ... + n^2" << endl;
        int i = 1;
        for( i = 1; i <= n; i++ ) {
            sumWithForLoop += pow(i, 2);
        }
        i = 1;
        while(i <= n) {
            sumWithWhileLoop += pow(i, 2);
            i++;
        }
        i = 1;
        do {
            sumWithDoWhileLoop += pow(i,2);
            i++;
        }
        while(i <= n);
        cout << "Sum with for loop: " << sumWithForLoop << endl;
        cout << "Sum with while loop: " << sumWithWhileLoop << endl;
        cout << "Sum with do while loop: " << sumWithDoWhileLoop << endl;

        sumWithForLoop = 0;
        sumWithWhileLoop = 0;
        sumWithDoWhileLoop = 0;
        cout << "S5 = 1^3 + 3^3 + 5^3 + ... + (2n+1)^3" << endl;
        i = 1;
        for( i = 1; i <= n; i++ ) {
            sumWithForLoop += pow((2*i+1), 3);
        }
        i = 1;
        while(i <= n) {
            sumWithWhileLoop += pow((2*i+1), 3);
            i++;
        }
        i = 1;
        do {
            sumWithDoWhileLoop += pow((2*i+1),3);
            i++;
        }
        while(i <= n);
        cout << "Sum with for loop: " << sumWithForLoop << endl;
        cout << "Sum with while loop: " << sumWithWhileLoop << endl;
        cout << "Sum with do while loop: " << sumWithDoWhileLoop << endl;

        sumWithForLoop = 0;
        sumWithWhileLoop = 0;
        sumWithDoWhileLoop = 0;
        cout << "S6 = 2^4 + 4^4 + 6^4 + ... + 2n^4" << endl;
        i = 1;
        for( i = 1; i <= n; i++ ) {
            sumWithForLoop += pow(2*i, 4);
        }
        i = 1;
        while(i <= n) {
            sumWithWhileLoop += pow(2*i, 4);
            i++;
        }
        i = 1;
        do {
            sumWithDoWhileLoop += pow(2*i, 4);
            i++;
        }
        while(i <= n);
        cout << "Sum with for loop: " << sumWithForLoop << endl;
        cout << "Sum with while loop: " << sumWithWhileLoop << endl;
        cout << "Sum with do while loop: " << sumWithDoWhileLoop << endl;

    }


    return 0;
}
