#include<iostream>

using namespace std;

int main() {
    int unitPrice = 30000;
    int karaokeTime;
    int totalMoney = 0;
    int timeEnter, timeOut;

    cout << "Open time 8:00 - 24:00" << endl;
    cout << "Enter time enter room: ";
    cin >> timeEnter;
    cout << "Enter time out: ";
    cin >> timeOut;
    karaokeTime = timeOut - timeEnter;

    if (karaokeTime < 0) {
        cout << "Invalid value! " << endl;
    }
    else if (karaokeTime >= 0 && karaokeTime < 3) {
        totalMoney = karaokeTime * unitPrice;
    }
    else if (karaokeTime >= 3) {
        int discountTime = karaokeTime - 3;
        int discountUnitPrice = unitPrice * 0.7;
        totalMoney = 3 * unitPrice + discountTime * discountUnitPrice;
    }

    if (timeEnter >= 8 && timeOut <= 17) {
        totalMoney *= 0.9;
    }

    cout << "Your bill is: " << totalMoney << endl;
    return 0;
}