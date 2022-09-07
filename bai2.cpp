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

int converse(int a) {
    int res =0, temp;
    while (a > 0) {
        temp = a%10;
        res = res*10 + temp;
        a = a/10;
    }
    return res;
}

bool symmetric(int a) {
    string b = to_string(a);
    for ( int i = 0; i < b.size()/2; i++ ) {
       if (b[i] != b[b.size()-1-i]) {
        return false;
        break;
       }
    }
    return true;
}

bool squareNum(int a) {
    int b = sqrt(a);
    if (b*b == a) {
        return true;
    }
    else {
        return false;
    }
}

bool primeNum(int a) {
    for (int i = 2; i < sqrt(a); i++) {
        if (a % i == 0) {
            return false;
            break;
        }
    }
    return true;
}

int oddSum(int a) {
    int sum = 0, temp;
    while (a > 0) {
        temp = a % 10;
        if (temp % 2 != 0) {
            sum += temp;
        }
     a = a /10;
    }
    return sum;
}

int primeSum(int a) {
    int sum = 0, temp;
    while (a > 0) {
        temp = a % 10;
        if (temp == 1 || temp == 2 || temp == 3 || temp == 5 || temp == 7) {
            sum += temp;
        }
        a = a/10;
    }
    return sum;
}

int squareSum (int a) {
    int sum =0, temp;
    while (a > 0) {
        temp = a % 10;
        if (temp == 9 || temp == 4 || temp == 1) {
            sum += temp;
        }
        a = a/10;
    }
    return sum;
}

int countDigit (int a) {
    int count = 0;
    while (a > 0) {
        a = a/10;
        count++;
    }
    return count;
}
bool armStrongNum(int a) {
    int count = countDigit(a);
    int sum =0, temp = a, last;
    for (int i = 0; i < count; i++) {
        last = temp % 10;
        temp = temp / 10;
        sum += pow(last, count);
    }
    if (sum == a) {
        return true;
    }
    else { 
        return false;
    }
}
int main() {
    int a;
    cin >> a;
    cout << converse(a);
    cout << endl;
    if (symmetric(a)) {
        cout <<"Doi xung" << endl;
    }
    else {
        cout <<"Khong doi xung" << endl;
    }
    if (squareNum(a)) {
        cout << "So chinh phuong" << endl;
    }
    else {
        cout <<"Khong phai so chinh phuong" << endl;
    }
    if (primeNum(a)) {
        cout <<"So nguyen to" << endl;
    }
    else {
        cout <<"Khong phai So nguyen to" << endl;
    }
    cout << oddSum(a) << endl;
    cout << primeSum(a) << endl;
    cout << squareSum(a) << endl;
    if (armStrongNum(a)) {
        cout << "So armstrong" << endl;
    }
    else {
        cout <<" khong phai so armstrong" << endl;
    }
}