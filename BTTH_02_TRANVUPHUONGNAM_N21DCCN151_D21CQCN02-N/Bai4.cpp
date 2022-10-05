#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <cmath>
#include <string>
#include <numeric>
#include <map>
#include <iomanip>
#include <set>

using namespace std;

int binarySearch(int T, int a[], int length) {
    int result;
    int left = 0, right = length - 1;

    while (left < right)
    {
        int m = floor((left + right) / 2);
        if (a[m] < T) {
            left = m + 1;
        }
        else if (a[m] > T) {
            right = m - 1;
        }
        else if (a[m] == T) {
            return m;
        }
    }
    
    return -1;
}

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
	int n;
	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;
	
	int arr[1000];
	for(int i = 0; i < n; i++) {
		cout << "Nhap gia tri phan tu thu " << i << " = ";
		cin >> arr[i];
	}

    int x;
	cout << endl << "Nhap gia tri tim kiem: ";
    cin >> x;

    if(binarySearch(x, arr, n) != -1) {
        cout << "Co xuat hien gia tri trong mang!" << endl;
    }
    else {
        cout << "Khong co xuat hien gia tri trong mang!" << endl;

    }
	
    return 0;
}
