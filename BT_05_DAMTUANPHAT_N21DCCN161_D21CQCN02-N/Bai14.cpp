#include<iostream>

using namespace std;

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int sumOfFibonacci(int n) {
    if(n == 0 || n == 1) {
        return n;
    }

    return fibonacci(n) + sumOfFibonacci(n - 1);
}

int main() {
    int n;
    cout << "Nhap so phan tu cua day fibonacci: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }

    cout << endl << "Tong cua " << n << " phan tu dau la: " << sumOfFibonacci(n - 1) << endl;
    return 0;
}

