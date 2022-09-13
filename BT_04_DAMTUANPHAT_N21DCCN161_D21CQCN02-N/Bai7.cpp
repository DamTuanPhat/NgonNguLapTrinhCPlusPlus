#include <iostream>

using namespace std;


int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n*factorial(n-1);
}

int  tongNDGT(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += 1/factorial(i);
    }

    return sum;
}

int tich(int n) {
    int p = 1;
    for(int i = n; i > 0; i -= 2) {
        p *= i;
    }

    return p;
}

int main() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    cout << "tongNDGT cua " << n << " la:" << tongNDGT(n) << endl;
    cout << "Tich cua " << n << " so dau la: " << tich(n) << endl;

    return 0;
}
 
 