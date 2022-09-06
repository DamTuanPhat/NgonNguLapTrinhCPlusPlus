#include<iostream>

using namespace std;

int main() {
    float firstNum, secondNum, thirdNum;
    cout << "Nhap 3 so thuc: ";
    cin >> firstNum >> secondNum >> thirdNum;
    float average = (firstNum + secondNum + thirdNum) / 3;
    cout << "Gia tri trung binh cua 3 so thuc: " << average << endl;
    return 0;
}
