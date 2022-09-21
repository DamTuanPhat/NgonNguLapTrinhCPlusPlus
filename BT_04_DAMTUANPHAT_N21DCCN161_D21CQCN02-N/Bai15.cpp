#include<iostream>

using namespace std;

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    int arr[n];
    cout << "Nhap gia tri cho cac phan tu: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    

    return 0;
}
