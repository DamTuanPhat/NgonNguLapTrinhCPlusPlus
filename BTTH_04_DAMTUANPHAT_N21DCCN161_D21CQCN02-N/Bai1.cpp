/*
Ho ten: Tran Vu Phuong Nam
MSSV: N21DCCN151
Lop: D21CQCN02-N
*/

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

class hcn {
    private:
        int dai;
        int rong;
    public: 
        hcn() {}

        hcn(int dai, int rong) : dai(dai), rong(rong) {}

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

        int chuvi() {
            return (dai + rong) * 2;
        }

        int dientich() {
            return dai*rong;
        }
};

class hv : public hcn {
    public:
        hv(int dai) : hcn(dai,dai) {}
};

int main() {
    int dai;
    cout << "Nhap canh cua hinh vuong: ";
    cin >> dai;
    hv hv(dai);
    cout << "Chu vi cua hinh vuong: " << hv.chuvi() << endl;
    cout << "Dien tich cua hinh vuong: " << hv.dientich() << endl;
    

    return 0;
}

