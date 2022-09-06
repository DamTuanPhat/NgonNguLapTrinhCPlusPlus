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
        else if (index == 12 || index == 1 || index == 2) {
            cout << "Winter" << endl;
        }
        else if (index >= 3 && index <= 5) {
            cout << "Spring" << endl;
        }
        else if (index >= 6 && index <= 8) {
            cout << "Summer" << endl;
        }
        else if (index >= 9 && index <=11) {
            cout << "Autumn" << endl;
        }
        
    } while (!(index >= 1 && index <= 12));

}