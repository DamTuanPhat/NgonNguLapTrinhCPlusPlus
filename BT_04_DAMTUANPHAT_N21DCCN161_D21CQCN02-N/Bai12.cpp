#include<iostream>

using namespace std;

int timkiem(int A[], int N, int k) {
    for (int i = 0; i < N; i++) {
        if (A[i] == k) {
            return k;
        }
    }

    return -1;
}

int main() {
    const int n = 100;
    int arr[n];
    int count = 0;
    for(int i = 0; i < n; i++) {
        if (count == 20) {
            break;
        }

        do {
            cout << "Nhap so nguyen thu " << i << " (>= 10, <= 100) :";
            cin >> arr[i];
        }
        while (!(arr[i] >= 10 && arr[i] <= 100));
        
        if(timkiem(arr, n, arr[i]) == -1) {
            count++;
            for(int i = 0; i < count; i++) {
                cout << arr[i] << " ";
            }
        }
    }

    return 0;
}