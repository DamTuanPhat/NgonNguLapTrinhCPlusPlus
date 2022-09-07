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

void xuatchan(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0) cout << a[i] << " ";
    }
    cout << endl;
}
void xuatVTchan(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(i%2==0) cout << a[i] << " ";
    }
    cout << endl;
}

void thanhle(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            a[i]++;
        }
        cout << a[i] << " ";
    }
}

int main() {
    int arr[10000];
    int n;
    cout << "Nhap so phan tu muon nhap: ";
    cin >> n;
    nhap(arr, n);
    xuatchan(arr, n);
    xuatVTchan(arr, n);
    thanhle(arr, n);

    return 0;   
}