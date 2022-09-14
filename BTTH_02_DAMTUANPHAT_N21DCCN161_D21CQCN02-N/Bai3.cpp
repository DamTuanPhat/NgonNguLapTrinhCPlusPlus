#include<iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

using namespace std;

int main() {
    const int n = 500;
    int a[n];
    for(int i = 0; i < n; i++) {
        a[i] = rand() - (RAND_MAX/2);
        cout << a[i] << " ";
    }

    int b[n];
    int size = 0;
    for(int i = 0; i < n; i++) {
        if (a[i] > 0) {
            b[size] = a[i];
            size++;
        }
    }
    
    cout << endl << endl;
    cout << size << endl << endl;

    for(int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }


    return 0;
}
