#include<iostream>
#include<string.h>

using namespace std;

void delblanks(char s[]) {
    for(int i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') {
            for(int j = i; j < strlen(s); j++) {
                s[j] = s[j+1];
            }
        }
    }
    for(int i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') {
            for(int j = i; j < strlen(s); j++) {
                s[j] = s[j+1];
            }
        }
    }
    for(int i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') {
            for(int j = i; j < strlen(s); j++) {
                s[j] = s[j+1];
            }
        }
    }

    cout << s;
}

int main() {
    char s[100];
    cout << "Nhap xau: ";

    cin.getline(s, 100);

    delblanks(s);

    return 0;
}

