#include<iostream>
#include<string.h>

using namespace std;

void lower(char s[]) {
    for(int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }

    cout << s;
}

int main() {
    char s[100];
    cout << "Nhap xau: ";
    cin >> s;

    lower(s);

    return 0;
}
