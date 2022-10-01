/*
Ho ten: Dam Tuan Phat
MSSV: N21DCCN161
Lop: D21CQCN02-N
*/
#include<iostream>
#include<math.h>

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

        int perimeter() {
            return (dai + rong) * 2;
        }

        int area() {
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
    cout << "Chu vi cua hinh vuong: " << hv.perimeter() << endl;
    cout << "Dien tich cua hinh vuong: " << hv.area() << endl;
    

    return 0;
}

