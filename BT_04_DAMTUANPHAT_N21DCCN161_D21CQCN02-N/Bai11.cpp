#include<iostream>

using namespace std;

void nhap(int A[], int &N) {
    cout << "Nhap " << N << " gia tri cho mang: " << endl;
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
}

void xuat(int A[], int N) {
    cout << "Gia tri cac phan tu trong mang: " << endl;
    for(int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
}

int timNhoNhat(int A[], int N) {
    int min = A[0];
    for (int i = 0; i < N; i++) {
        if (A[i] < min) {
            min = A[i];
        }
    }

    return min;
}

double trungbinh(int A[], int N) {
    double sum = 0;
    for (int i = 0; i < N; i++) {
        sum += A[i];
    }

    return sum / (double) N;
}

int timkiem(int A[], int N, int k) {
    for (int i = 0; i < N; i++) {
        if (A[i] == k) {
            return k;
        }
    }

    return -1;
}

int main() {
    int arr[10000];
    int n;
    cout << "Nhap so phan tu muon nhap: ";
    cin >> n;
    nhap(arr, n);
    int k = trungbinh(arr, n);
    cout << "Gia tri nho nhat: " << timNhoNhat(arr, n) << endl;
    cout << "Gia tri trung binh: " << k << endl;

    cout << "Nhap so can tim kiem: ";
    cin >> k;
    if (timkiem(arr, n, k) != -1) {
        cout << "So " << k << " co xuat hien trong mang" << endl;
    }
    else {
        cout << "So " << k << " khong xuat hien trong mang" << endl;

    }
    return 0;
}