#include<iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int index;
    bool isValid = false;
    do {
        cout << "Hom nay la thu? : ";

        cin >> input;
        index = stoi(input);
        if (!(index >= 1 && index <= 7)) {
            cout << "Invalid value, please fill new value: ";
        }

        switch (index)
        {
        case 1:
            cout << "1: Sunday" << endl;
            isValid = true;
            break;
        case 2:
            cout << "2: Monday" << endl;
            isValid = true;
            break;
        case 3:
            cout << "3: Tuesday" << endl;
            isValid = true;
            break;
        case 4:
            cout << "4: Wenesday" << endl;
            isValid = true;
            break;
        case 5:
            cout << "5: Thursday" << endl;
            isValid = true;
            break;
        case 6:
            cout << "6: Friday" << endl;
            isValid = true;
            break;
        case 7:
            cout << "7: Sartuday" << endl;
            isValid = true;
            break;
        
        default:
            cout << "Invalid value, please re-enter new value" << endl;
            break;
        }
    } while (!isValid);

}