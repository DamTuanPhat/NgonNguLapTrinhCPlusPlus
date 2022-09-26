#include<iostream>

using namespace std;

float tongNghichDao(int arr[], int n) {
    float sum = 0;
    for(int i = 1; i < n; i++) {
        sum += 1/(float) i;
    }

    return sum;
}

void daoChieu(int arr[], int n) {
    for(int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Nhap vao so phan tu fibonacci: ";
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        arr[i] = fibonacci(i);
    }
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


    cout << endl << "Tong nghich dao cua " << n - 1 << " phan tu dau tien la: " << tongNghichDao(arr, n) << endl;

    cout << endl << "Sau khi dao chieu: " << endl;
    daoChieu(arr,n);

    return 0;
}
