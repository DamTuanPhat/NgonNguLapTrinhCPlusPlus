#include<iostream>
#include<string.h>

using namespace std;

void proper(char s[]) {
    if (s[0] >= 'a' && s[0] <= 'z') {
        s[0] -= 32;
    }
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] == ' ' && (i+1) < strlen(s)) {
            if (s[i+1] >= 'a' && s[i+1] <= 'z') {
                s[i+1] -= 32;
            }
        } 
    }

    cout << s;
}

int main() {
    char s[100];
    cout << "Nhap xau: ";
    cin.getline(s, 100);
    proper(s);

    return 0;
}
