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

class hinhchunhat {
    private:
        int dai;
        int rong;
    public:
        hinhchunhat() {
            this->dai = -1;
            this->rong = -1;
        }

        hinhchunhat(int dai, int rong) {
            this->dai = dai;
            this->rong = rong;
        }

        void setDai(int dai) {
            this->dai = dai;
        }

        int getDai() {
            return dai;
        }

        void setRong(int rong) {
            this->rong = rong;
        }

        int getRong() {
            return rong;
        }

        void dientich() {
            int dientich = dai * rong;
            cout << "Dien tich hinh chu nhat: " << dientich << endl;
        }

        void chuvi() {
            int chuvi = (dai + rong) * 2;
            cout << "Chu vi hinh chu nhat: " << chuvi << endl; 
        }
};

int main() {
    int dai, rong;
    cout << "Nhap chieu dai hinh chu nhat: ";
    cin >> dai;
    cout << "Nhap chieu rong hinh chu nhat: ";
    cin >> rong;
    hinhchunhat HCN(dai, rong);
    HCN.dientich();
    HCN.chuvi();

    return 0;
}
