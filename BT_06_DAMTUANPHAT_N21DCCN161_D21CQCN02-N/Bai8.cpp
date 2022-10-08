#include<iostream>
#include<string.h>

using namespace std;

void xtrnstart(char s[], int n) {
    for(int i = 0; i < n; i ++) {
        cout << s[i];
    }
}

void xtrnend(char s[], int n) {
    int index = strlen(s) - n;
    for(int i = index; i < strlen(s); i++) {
        cout << s[i];
    }
}

void xtrnpos(char s[], int pos) {
    for(int i = pos; i < strlen(s); i++) {
        cout << s[i];
    }
}

int main() {
    char s[100];
    int n, k;
    cout << "Nhap xau: ";
    cin.getline(s, 100);
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap k: ";
    cin >> k;

    cout << n << " ki tu dau cua chuoi la: " << endl;
    xtrnstart(s, n);
    cout << endl << n << " ki tu cuoi cua chuoi la: " << endl;
    xtrnend(s, n);
    cout << endl << "Ki tu tu vi tri thu k cua chuoi la: " << endl;
    xtrnpos(s, k-1); 
    return 0;
}
