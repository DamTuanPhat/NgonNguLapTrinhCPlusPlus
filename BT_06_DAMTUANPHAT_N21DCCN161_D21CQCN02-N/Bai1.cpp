/*
Ho ten: Dam Tuan Phat
MSSV: N21DCCN161
Lop: D21CQCN02-N
*/

#include<iostream>
#include<string.h>
using namespace std;

void upper(char s[]) {
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] >='a' && s[i] <='z'){
            s[i] = s[i] - 32;
        }
    }

    cout << s;
}

int main() {
    char s[100];

    cout << "Nhap xau: ";
    cin >> s;
    upper(s);

}
