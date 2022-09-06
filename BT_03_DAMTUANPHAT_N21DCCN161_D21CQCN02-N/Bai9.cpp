#include<iostream>

using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n*factorial(n-1);
}

int combination(int k, int n) {
	int combination = (factorial(n))/((factorial(k)*factorial(n-k)));
	return combination;
}


int main() {
	int k,n;
    cout << "Enter two positive intergers: ";
    cin >> k >> n;

    if ( k < 0 || n < k) {
        cout << "Invalid value, please re-enter new value!" << endl;
    }
    else {
        cout << "The convolution k of n is: " << combination(k, n) << endl;
    }
	
	return 0;
}
