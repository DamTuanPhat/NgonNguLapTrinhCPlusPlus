#include<iostream>

using namespace std;

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter positive enteger n: ";
    cin >> n;
    cout << "First " << n << " elements of fibonacci: ";
    for(int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }

    return 0;
}
