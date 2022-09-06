#include<iostream>

using namespace std;

void primeNumberAnalysis(int n) {
    int count;
    
    for(int i = 2; i <= n; i++){
        count = 0;
        while(n % i == 0){
            ++count;
            n /= i;
        }
        if(count){
            cout << i;
            if(count > 1) {
                cout << "^" << count;
            }
            if(n > i) {
                cout << " * ";
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if ( n < 0) {
        cout << "Invalid value, please re-enter new value" << endl;
    }
    else {
        cout << n << " = ";
        primeNumberAnalysis(n);
    }

    return 0;
}
