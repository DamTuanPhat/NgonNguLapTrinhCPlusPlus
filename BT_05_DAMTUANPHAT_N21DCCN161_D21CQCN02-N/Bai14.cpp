#include<iostream>

using namespace std;

int sumOfFibonacci(int n) {
    if(n == 1) {
        return 1;
    }

    return sumOfFibonacci(n-1) + 0;
}

int fibonacci(int n,int a0, int a1, int p, int q) {
    if (n == 0) {
        return a0;
    }else if(n == 1) {
        return a1;
    }

    return fibonacci(n - 1, a0, a1, p, q) + fibonacci(n - 2, a0, a1, p, q);
}


// Chua hieu ro

int main() {
    int a0, a1, p, q, n;
    cout << "Nhap vao n: ";
    cin >> n;
    cout << "Nhap vao a0: ";
    cin >> a0;
    cout << "Nhap vao a1: ";
    cin >> a1;
    cout << "Nhap vao p: ";
    cin >> p;
    cout << "Nhap vao q: ";
    cin >> q;




    return 0;
}

