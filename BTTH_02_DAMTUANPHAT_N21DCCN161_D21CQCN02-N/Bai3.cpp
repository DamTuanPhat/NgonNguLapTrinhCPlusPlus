#include<iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

using namespace std;

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sap_xep(int *a, int length) {
	for(int i = 0; i < length-1; i++) {
		for(int j = i+1; j < length; j++) {
			if(*(a+i) < *(a+j)) {
				// cout << *(a+i) << " " << *(a+j) << endl;
				swap((a+i), (a+j));
			}
		}
	}
}

int main() {
    const int n = 1000;
    int a[n];
    
    srand(time(NULL));
    for(int i = 0; i < n; i++) {
        a[i] = (rand() - rand()) % 100;
        cout << a[i] << " ";
    }

    int b[n];
    int size = 0;
    for(int i = 0; i < n; i++) {
        if (a[i] > 0) {
            b[size++] = a[i];
        }

    }
    sap_xep(b, size);
    cout << endl << endl << endl << endl;

    for(int i = 0; i < size; i++) {
        cout << b[i] << " ";
    }

    cout << endl << endl << endl << endl;

    cout << "Nhap x tu ban phim: ";
    cin >> b[size++];
    sap_xep(b, size);
    cout << endl ;

    cout << "Mang sau khi them phan tu: " << endl;
    for(int i = 0; i < size; i++) {
        cout << b[i] << " ";
    }

    delete[] a;
    return 0;
}
