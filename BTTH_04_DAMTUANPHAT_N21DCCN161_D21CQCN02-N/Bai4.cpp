#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <cmath>
#include <string>
#include <numeric>
#include <map>
#include <iomanip>
#include <set>

using namespace std;

class So_nguyen_duong {
    private:
        unsigned int Giatri;
    public:
        void setGiatri(unsigned int Giatri) {
            this->Giatri = Giatri;
        }
        unsigned int getGiatri() {
            return Giatri;
        }

        unsigned int Giaithua(unsigned int num) {
            if(num == 0 || num == 1) {
                return 1;
            }

            return num * Giaithua(num - 1);
        }


};

int main() {
    int n;
    cout << "Nhap chieu dai cua chuoi so: ";
    cin >> n;
    So_nguyen_duong arr[1000];
    for(int i = 0; i < n; i++) {
        unsigned int value;
        cout << "Nhap gia tri so nguyen duong thu " << i + 1 << " : ";
        cin >> value;
        arr[i].setGiatri(value);
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i].getGiatri() << "\t";
    }

    unsigned int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i].Giaithua(arr[i].getGiatri());
    }

    cout << endl << "Tong giai thua cua " << n << " so nguyen duong la: " << sum << endl;
    
    return 0;
}