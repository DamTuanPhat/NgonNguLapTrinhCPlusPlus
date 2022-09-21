#include<iostream>
#include<stdio.h>

using namespace std;

void nhap(int a[50][50], int m, int n) {
	int i, j;
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			cout << "a[" << i << "][" << j << "] = "; 
			cin >> a[i][j];
		}
	}
}

void hienThi(int a[50][50], int m, int n) {
	int i, j;
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			cout << a[i][j] << " "; 
		}
		cout << endl;
	}
}

// bij = aji
void chuyenVi(int a[50][50], int m, int n, int b[50][50]) {
	int i, j;
	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			b[i][j] = a[j][i];
		}
	}
}

int main() {
	int a[50][50], b[50][50];
	int m, n;
	while(m <= 0 || n <= 0) {
		cout << "Nhap so nguyen m, n > 0: ";
		cin >> m >> n;
	}
	cout << "Nhap ma tran A: " << endl;
	nhap(a, m, n);
	chuyenVi(a, m, n, b);
	
	cout << "======================\n";
	printf("Ma tran A: \n");
	hienThi(a, m, n);

    cout << "======================\n";
	printf("Ma tran chuyen vi cua A: \n");
	hienThi(b, n, m);
	
	return 0;
}
