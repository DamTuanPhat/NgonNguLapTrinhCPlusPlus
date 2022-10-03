#include<iostream>

using namespace std;

struct DATHUC
{
    int bac;
    double *heso;
};

void nhap(DATHUC *dt) {
    do {
        cout << "Nhap vao so bac cua da thuc (>= 1):  ";
        cin >> dt->bac;
        if(dt->bac < 1) {
            cout << "So bac cua da thuc phai >= 1. Xin nhap lai!" << endl;
        }
    }
    while (dt->bac < 1);

    dt->heso = new double[dt->bac + 1];
    for(int i = 0; i <= dt->bac; i++) {
        cout << "Nhap vao he so thu " << i << " : ";
        cin >> dt->heso[i];
    }
}

void xuat(DATHUC dt) {
    if(dt.bac == 0) {
        cout << dt.heso[0];
    }
    else if(dt.bac == 1) {
        cout << dt.heso[0] << " + " << dt.heso[1] << " * x";
    }
    else {
        cout << dt.heso[0] << " + " << dt.heso[1] << " * x + ";
        for(int i = 2; i < dt.bac; i++) {
            cout << dt.heso[i] << " * x^" << i << " + ";
        }
        cout << dt.heso[dt.bac] << " * x^" << dt.bac;
    }
    cout << endl;
}

DATHUC tong(DATHUC a, DATHUC b) {
    DATHUC c;
    int bacMin = a.bac < b.bac ? a.bac : b.bac;
    int bacMax = a.bac > b.bac ? a.bac : b.bac;
    c.bac = bacMax;
    c.heso = new double[c.bac + 1];
    for(int i = 0; i <= bacMin; i++) {
        c.heso[i] = a.heso[i] + b.heso[i];
    }
    if(a.bac == bacMax) {
        for(int i = bacMin + 1; i <= bacMax; i++) {
            c.heso[i] = a.heso[i];
        }
    }
    else {
        for(int i = bacMin + 1; i <= bacMax; i++) {
            c.heso[i] = b.heso[i];
        }
    }
    
    return c;
}

DATHUC hieu(DATHUC a, DATHUC b) {
    DATHUC c;
    int bacMin = a.bac < b.bac ? a.bac : b.bac;
    int bacMax = a.bac > b.bac ? a.bac : b.bac;
    c.bac = bacMax;
    c.heso = new double[c.bac + 1];
    for(int i = 0; i <= bacMin; i++) {
        c.heso[i] = a.heso[i] - b.heso[i];
    }
    if(a.bac == bacMax) {
        for(int i = bacMin + 1; i <= bacMax; i++) {
            c.heso[i] = a.heso[i];
        }
    }
    else {
        for(int i = bacMin + 1; i <= bacMax; i++) {
            c.heso[i] = - b.heso[i];
        }
    }
    
    return c;
}

DATHUC tich(DATHUC a, DATHUC b) {
    DATHUC c;
    c.bac = a.bac + b.bac;
    c.heso = new double[c.bac + 1];
    for(int i = 0; i <= c.bac; i++) {
        c.heso[i] = 0; //Init heso
    }
    for(int i = 0; i <= a.bac; i++) {
        for(int j = 0; j <= b.bac; j++) {
            c.heso[i+j] += a.heso[i] * b.heso[j]; 
        }
    }

    return c;
}

DATHUC daoham(DATHUC a) {
    DATHUC c;
    if(a.bac == 1) {
        c.bac = 0;
        c.heso = new double[1];
        c.heso[0] = a.heso[1];
    }
    else {
        c.bac = a.bac - 1;
        c.heso = new double[c.bac + 1];
        for(int i = 0; i <= c.bac; i++) {
            c.heso[i] = a.heso[i+1] * (i+1); 
        }
    }
    return c;
}

DATHUC daohamcapcao(DATHUC a,int k) {
    DATHUC c;
    if(a.bac < k) {
        c.bac = 0;
        c.heso = new double[1];
        c.heso[0] = 0;
        return c;
    }
    int i = 0;
    c = daoham(a);
    i++;
    for( i; i < k; i++) {
        c = daoham(c);
    }
    return c;
}

int main() {
    DATHUC a, b;
    cout << "Nhap da thuc thu 1: " << endl;
    nhap(&a);
    xuat(a);
    cout << "Nhap da thuc thu 2: " << endl;
    nhap(&b);
    xuat(b);
    DATHUC c = tong(a,b);
    cout << "Tong: ";
    xuat(c);
    DATHUC d = hieu(a,b);
    cout << "Hieu: ";
    xuat(d);
    DATHUC e = tich(a,b);
    cout << "Tich: ";
    xuat(e);
    DATHUC f = daoham(a);
    cout << "Dao ham cap 1 cua DATHUC a: ";
    xuat(f);
    int k;
    cout << "Nhap cap ma ban muon dao ham: ";
    cin >> k;
    DATHUC g = daohamcapcao(a,k);
    cout << "Dao ham cap " << k << " cua DATHUC a: ";
    xuat(g);


    return 0;
}
