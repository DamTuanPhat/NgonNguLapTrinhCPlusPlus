#include<iostream>

using namespace std;

bool isPrimeNumber(int n) {
    if (n < 2){
        return false;
    }       
     
    for (int i = 2; i < (n - 1); i++){
        if (n % i == 0){
            return false;
        }   
    }
     
    return true;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n < 2 ) {
        cout << "Invalid value, please re-enter new value" << endl;
    }
    else {
        for(int i = 1; i <= n; i++) {
            if (isPrimeNumber(i)) {
                cout << i << " is prime number." << endl;
            }
            // else {
            //     cout << i << " is not prime number." << endl;
            // }
        }
        
    }

    return 0;
}