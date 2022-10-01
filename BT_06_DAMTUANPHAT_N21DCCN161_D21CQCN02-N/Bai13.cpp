#include<iostream>
#include<math.h>

using namespace std;

struct TAMGIAC {
    int a;
    int b;
    int c;
};

void nhap(TAMGIAC *tg, int a, int b, int c) {
    tg->a = a;
    tg->b = b;
    tg->c = c;
}

void xuat(TAMGIAC tg) {
    cout << "Tam giac co do dai 3 canh lan luot la: " << tg.a << " " << tg.b << " " << tg.c << endl;
}

int chuvi(TAMGIAC tg) {
    return tg.a + tg.b + tg.c;
}

float dientich(TAMGIAC tg) {
    float p = chuvi(tg) / 2;
    return sqrt(p*(p - tg.a)*(p - tg.b)*(p - tg.c));
}

int main() {
    TAMGIAC tg;
    nhap(&tg, 3, 4, 5);
    xuat(tg);
    cout << "Chu vi cua tam giac: " << chuvi(tg) << endl;
    cout << "Dien tich cua tam giac: " << dientich(tg) << endl;
    return 0;
}
