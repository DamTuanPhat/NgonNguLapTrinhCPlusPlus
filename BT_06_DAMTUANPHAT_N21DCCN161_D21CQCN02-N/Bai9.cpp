#include<iostream>

using namespace std;

struct PHANSO {
    int tu;
    int mau;

    PHANSO rutGon(PHANSO ps) {
        if (ps.mau / ps.tu != 0) {
            PHANSO c;
            int boi = ps.mau / ps.tu;
            c.tu = ps.tu / boi;
            c.mau = ps.mau / boi;
            return c;
        }
        else {
            return ps;
        }
    }

    PHANSO tong(PHANSO a, PHANSO b) {
        PHANSO c;
        if (a.mau == b.mau) {
            c.tu = a.tu + b.tu;
            c.mau = a.mau;
        }
        else {
            c.mau = a.mau * b.mau;
            c.tu = a.tu * b.mau + b.tu * a.mau;
        }
        return c; 
    }

    PHANSO hieu(PHANSO a, PHANSO b) {
        PHANSO c;
        if (a.mau == b.mau) {
            c.tu = a.tu - b.tu;
            c.mau = a.mau;
        }
        else {
            c.mau = a.mau * b.mau;
            c.tu = a.tu * b.mau - b.tu * a.mau;
        }
        return c; 
    }

    PHANSO tich(PHANSO a, PHANSO b) {
        PHANSO c;
        c.tu = a.tu * b.tu;
        c.mau = a.mau * b.mau;
        return c;
    }

    PHANSO thuong(PHANSO a, PHANSO b) {
        PHANSO c;
        c.tu = a.tu * b.mau;
        c.mau = a.mau * b.tu;
        return c;
    }

    bool isToiGian(PHANSO a, PHANSO b) {
        if( a.mau / a.tu != 0) {
            return false;
        }
        return true;
    }

    
}

int main() {
    int a = 1;
    int b = 2;
    return 0;
}