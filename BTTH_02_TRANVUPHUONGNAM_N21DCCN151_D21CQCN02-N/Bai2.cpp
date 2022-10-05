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

	cout << "Mang truoc khi sap xep: ";
	for(int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
	sap_xep(arr, n);
	cout << "Mang sau khi sap xep: ";
	for(int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	
    return 0;
}
