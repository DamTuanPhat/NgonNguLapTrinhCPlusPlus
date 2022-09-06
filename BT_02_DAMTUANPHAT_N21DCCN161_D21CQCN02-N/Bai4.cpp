#include<iostream>

using namespace std;

int main() {
    float a, b;
    cout << "Enter 2 parameters of the equation ax + b = 0:";
    cin >> a >> b;
    if (a != 0) {
        float x = - b / a;
        cout << "The equation has a unique solution x = " << x << endl;
    }
    else {
        if (b != 0) {
            cout << "The equation has no solution." << endl;
        }
        else {
            cout << "The equation is always true for all variables x." << endl;
        }
    }

    return 0;
}