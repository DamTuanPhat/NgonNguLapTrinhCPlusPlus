#include<iostream>

#pragma once

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


int main() {
    int arr[10000];
    int n;
    cout << "Nhap so phan tu muon nhap: ";
    cin >> n;
    nhap(arr, n);
    xuat(arr, n);
    return 0;
}