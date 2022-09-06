#include<iostream>
#include<math.h>

using namespace std;

int main() {
    float x;
    cout << "Nhap x: ";
    cin >> x;
    float y1 = 2 * pow(x, 3) + 5 * pow(x, 2) + 7 * x + 15;
    float y2 = pow(sin(x), 2) + pow(cos(x), 2) + pow(tan(3*x), 2);
    float y3 = pow((x + 10), (x + 5));
    float y4 = 3 * exp(cos(x + 1));
    
    cout << "y1 = " << y1 << endl;
    cout << "y2 = " << y2 << endl;
    cout << "y3 = " << y3 << endl;
    cout << "y4 = " << y4 << endl;
    if (x > -100) {
        float y5 = log(x + 100);
        cout << "y5 = " << y5 << endl;
    }
    else {
        cout << "Invalid value, can't do y5 calculation." ;
    }
    return 0;
}
