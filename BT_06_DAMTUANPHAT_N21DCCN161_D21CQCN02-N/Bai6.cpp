#include<iostream>
#include<string.h>

using namespace std;

void countWords(char s[]) {
    int count = 0;
    for(int i = 0; i < strlen(s); i++) {
        if (s[i] != ' ') {
            count++;
        }
    }
    cout << count << endl;
    for(int i = 0; i < strlen(s); i++) {
        if (s[i] != ' ') {
            cout << s[i];
        }
        else {
            cout << endl;
        }
    }
}

int main() {
    char s[100];
    cout << "Nhap xau: ";
    cin.getline(s, 100);

    countWords(s);

    return 0;
}
