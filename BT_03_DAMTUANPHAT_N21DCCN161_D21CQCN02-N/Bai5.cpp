#include<iostream>
#include<math.h>

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
    if (n <=0 ) {
        cout << "Invalid value, please re-enter new value" << endl;
    }
    else {
        if (isPrimeNumber(n)) {
            cout << n << " is prime number." << endl;
        }
        else {
            cout << n << " is not prime number." << endl;
        }
        
    }
    return 0;
}