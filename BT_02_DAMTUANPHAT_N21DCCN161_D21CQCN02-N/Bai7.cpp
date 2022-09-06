#include<iostream>

using namespace std;

int main() {
    int workingMonths;
    const int basicSalary = 650000;
    float number;
    cout << "Enter working months of employee: ";
    cin >> workingMonths;

    if(workingMonths < 12) {
        number = 1.92;
    }
    else if (workingMonths >= 12 && workingMonths < 36) {
        number = 2.34;
    }
    else if (workingMonths >= 36 && workingMonths < 60) {
        number = 3;
    }
    else if (workingMonths >= 60) {
        number = 4.5;
    }

    float salary = number * (float)basicSalary;
    cout << "Salary of employee: " << (int)salary << endl;

    return 0;
}