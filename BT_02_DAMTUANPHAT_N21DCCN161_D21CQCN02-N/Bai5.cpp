#include<iostream>
#include<math.h>

using namespace std;

int main() {
    float a, b, c;
    cout << "Enter 3 parameters of the equation ax^2 + bx + c = 0:";
    cin >> a >> b >> c;

    if( a != 0) {
        float delta = pow(b, 2) - 4 * a * c;
        if(delta < 0) {
            cout << "The equation has no solution!" << endl;
        }
        else {
            if(delta == 0) {
                float x = - b / (2 * a);
                cout << "The equation has unique solution x = " << x << endl;
            }
            else {
                float x1 = (-b - sqrt(delta)) / (2 * a);
                float x2 = (-b + sqrt(delta)) / (2 * a);
                cout << "The equation has 2 distinct solutions, x1 = " << x1 << ", x2 = " << x2 << endl; 
            }
        }
    }
    else {
        if(b != 0) {
            float x = -b / c;
            cout << "The equation has unique solution x = " << x << endl;
        }
        else {
            if(c != 0) {
                cout << "The equation has no solution!" << endl;
            }
            else {
                cout << "The equation is always true for all variables x." << endl;
            }
        }
    }

    return 0;
}