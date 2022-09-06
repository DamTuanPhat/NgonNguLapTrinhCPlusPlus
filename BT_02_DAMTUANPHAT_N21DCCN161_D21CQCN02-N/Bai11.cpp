#include<iostream>
#include<string>

using namespace std;

int main() {
    string input;
    int index;

    do {
        cout << "This month is? : ";
        cin >> input;
        index = stoi(input);
        if (!(index >= 1 && index <= 12)) {
            cout << "Invalid value, please fill new value: ";
        }
        else if (index == 1) {
            cout << "1: January" << endl;
        }
        else if (index == 2) {
            cout << "2: February " << endl;
        }
        else if (index == 3) {
            cout << "3: March " << endl;
        }
        else if (index == 4) {
            cout << "4: April" << endl;
        }
        else if (index == 5) {
            cout << "5: May" << endl;
        }
        else if (index == 6) {
            cout << "6: June" << endl;
        }
        else if (index == 7) {
            cout << "7: July" << endl;
        }
        else if (index == 8) {
            cout << "8: August" << endl;
        }
        else if (index == 9) {
            cout << "9: September	" << endl;
        }
        else if (index == 10) {
            cout << "10: October" << endl;
        }
        else if (index == 11) {
            cout << "11: November" << endl;
        }
        else if (index == 12) {
            cout << "12: December" << endl;
        }
    } while (!(index >= 1 && index <= 12));

}