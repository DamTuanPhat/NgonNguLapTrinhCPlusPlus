#include<iostream>
#include<string.h>

using namespace std;


int main() {
    string str;
    cout << "Hay nhap vao mot chuoi: ";
    cin >> str;
    int count = 0;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == 'i' && str[i+1] == 't') {
            count++;
        }
    }

    cout << "So chuoi con it co trong chuoi tren la: " << count << endl;

    return 0;
}
