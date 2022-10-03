#include<iostream>
#include<math.h>

using namespace std;

struct DONTHUC {
        double heso;
        int somu;
};

void nhap(DONTHUC &dt, double heso, int somu) {
    dt.heso = heso;
    dt.somu = somu;
}

void xuat(DONTHUC dt) {
    cout << dt.heso << "x^" << dt.somu << endl;
}

DONTHUC tich(DONTHUC a, DONTHUC b) {
    DONTHUC c;
    double heso = a.heso * b.heso;
    c.heso = heso;
    int somu = a.somu * b.somu;
    c.somu = somu;
    return c;
}

DONTHUC thuong(DONTHUC a, DONTHUC b) {
    DONTHUC c;
    double heso = a.heso / b.heso;
    c.heso = heso;
    int somu = a.somu / b.somu;
    c.somu = somu;
    return c;
}

DONTHUC daohamcap1(DONTHUC dt) {
    DONTHUC res;
    res.heso = dt.heso * dt.somu;
    res.somu = dt.somu - 1;
    return res;
}

int tinh(DONTHUC dt, int x0) {
    return dt.heso * pow(x0, dt.somu);
}


int main() {
    double heso;
    int somu;
    cout << "Nhap he so cua da thuc: ";
    cin >> heso;
    cout << "Nhap so mu cua da thuc: ";
    cin >> somu;
    DONTHUC dt;
    DONTHUC dt2, dt3, dt4, dt5;
    nhap(dt, heso, somu);
    xuat(dt);
    nhap(dt2, 2, 3);
    dt3 = tich(dt, dt2);
    dt4 = thuong(dt, dt2);
    dt5 = daohamcap1(dt);
    xuat(dt3);
    xuat(dt4);
    xuat(dt5);

    cout << "Tai x0 = 1, dt co gia tri: " << tinh(dt, 1) << endl;;
    return 0;
}
