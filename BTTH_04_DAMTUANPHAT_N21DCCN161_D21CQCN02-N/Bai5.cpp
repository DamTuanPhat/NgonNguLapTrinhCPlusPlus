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

class Tam_giac {
    private:
        int Canhday;
        int Chieucao;
    public:
        Tam_giac() {}
        Tam_giac(int Canhday, int Chieucao) : Canhday(Canhday), Chieucao(Chieucao) {}

        void setCanhday(int Canhday) {
            this->Canhday = Canhday;
        }

        int getCanhday() {
            return Canhday;
        }

        void setChieucao(int Chieucao) {
            this->Chieucao = Chieucao;
        }

        int getChieucao() {
            return Chieucao;
        }

        float dientich() {
            return 0.5 * Canhday * Chieucao;
        }
};

int main() {
    int n;
    cout << "Nhap so tam giac: ";
    cin >> n;
    Tam_giac arr[1000];
    for(int i = 0; i < n; i++) {
        int a, b;
        cout << "Nhap chieu cao va canh day cua tam giac thu " << i + 1 << " : ";
        cin >> a >> b;
        arr[i].setChieucao(a);
        arr[i].setCanhday(b);
    }

    for(int i = 0; i < n; i++) {
        cout << "Thong tin tam giac thu " << i+1 << endl;
        cout << "Chieu cao: " << arr[i].getChieucao() << endl;
        cout << "Canh day: " << arr[i].getCanhday() << endl;
        cout << "Dien tich: " << arr[i].dientich() << endl << endl;
    }
    return 0;
}
