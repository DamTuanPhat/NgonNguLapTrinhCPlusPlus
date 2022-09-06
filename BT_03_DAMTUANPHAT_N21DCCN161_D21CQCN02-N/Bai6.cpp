#include<iostream>

using namespace std;

int main() {
    int kilowatts;
    int unitPrice = 0;
    cout << "Enter number of kilowatts of electricity consumed: ";
    cin >> kilowatts;

    if(kilowatts < 0) {
        cout << "You haven't pay the electricity bill" << endl;
    }
    else if (kilowatts >= 0 && kilowatts <= 100) {
        unitPrice = 2000;
    }
    else if (kilowatts > 100 && kilowatts <= 200) {
        unitPrice = 2500;
    }
    else if (kilowatts > 200 && kilowatts <= 300) {
        unitPrice = 3000;
    }
    else if (kilowatts > 300) {
        kilowatts = 5000;
    }

    int totalMoney = kilowatts * unitPrice;

    cout << "Total money you have to pay your electricity bill is: " << totalMoney << endl;

    return 0;
}