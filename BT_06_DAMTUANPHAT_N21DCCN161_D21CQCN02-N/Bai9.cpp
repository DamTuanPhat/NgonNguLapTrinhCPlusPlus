#include <iostream>

using namespace std;

struct PHANSO
{
    int tu;
    int mau;
};

void nhap(PHANSO *ps, int a, int b) {
    ps->tu = a;
    ps->mau = b;
}

void xuat(PHANSO ps) {
    if(ps.mau == 1) {
        cout << ps.tu << endl;
    }
    else {
        cout << ps.tu << "/" << ps.mau << endl;
    }
}

PHANSO rutGon(PHANSO *ps)
{
    if(ps->tu == 1) {
        return *ps;
    }
    else if (ps->mau / ps->tu != 0)
    {
        PHANSO c;
        int boi = ps->mau / ps->tu;
        c.tu = ps->tu / boi;
        c.mau = ps->mau / boi;
        return c;
    }else if (ps->tu / ps->mau != 0) {
        PHANSO c;
        int boi = ps->tu / ps->mau;
        c.tu = boi;
        c.mau = 1;
        return c;
    }
    else
    {
        return *ps;
    }
}

PHANSO tong(PHANSO a, PHANSO b)
{
    PHANSO c;
    if (a.mau == b.mau)
    {
        c.tu = a.tu + b.tu;
        c.mau = a.mau;
    }
    else
    {
        c.mau = a.mau * b.mau;
        c.tu = a.tu * b.mau + b.tu * a.mau;
    }
    return c;
}

PHANSO hieu(PHANSO a, PHANSO b)
{
    PHANSO c;
    if (a.mau == b.mau)
    {
        c.tu = a.tu - b.tu;
        c.mau = a.mau;
    }
    else
    {
        c.mau = a.mau * b.mau;
        c.tu = a.tu * b.mau - b.tu * a.mau;
    }
    return c;
}

PHANSO tich(PHANSO a, PHANSO b)
{
    PHANSO c;
    c.tu = a.tu * b.tu;
    c.mau = a.mau * b.mau;
    return c;
}

PHANSO thuong(PHANSO a, PHANSO b)
{
    PHANSO c;
    c.tu = a.tu * b.mau;
    c.mau = a.mau * b.tu;
    return c;
}

bool isToiGian(PHANSO a)
{
    if(a.tu == 1) {
        return true;
    }
    if (a.mau / a.tu != 0)
    {
        return false;
    }
    return true;
}

bool isPositive(PHANSO ps) {
    if(ps.tu < 0 && ps.mau < 0 || ps.tu >= 0 && ps.mau > 0) {
        return true;
    }
    return false;
}

void quyDong(PHANSO *a, PHANSO *b) {
    if(a->mau == b->mau) {
        return;
    }
    else {
        PHANSO c,d;
        c.mau = a->mau * b->mau;
        d.mau = c.mau;
        c.tu = a->tu*b->mau;
        d.tu = b->tu*a->mau;
        *a = c;
        *b = d;
    }
}

void soSanh(PHANSO a, PHANSO b) {
    if(a.mau == b.mau) {
        if (a.tu > b.tu) {
            cout << a.tu << "/" << b.tu << " > " << b.tu << "/" << b.mau << endl;
        } else if (a.tu < b.tu) {
            cout << a.tu << "/" << b.tu << " < " << b.tu << "/" << b.mau << endl;
        } else {
            cout << a.tu << "/" << b.tu << " = " << b.tu << "/" << b.mau << endl;
        }
    }
    else {
        quyDong(&a,&b);
        if(a.mau == b.mau) {
        if (a.tu > b.tu) {
            cout << a.tu << "/" << b.tu << " > " << b.tu << "/" << b.mau << endl;
        } else if (a.tu < b.tu) {
            cout << a.tu << "/" << b.tu << " < " << b.tu << "/" << b.mau << endl;
        } else {
            cout << a.tu << "/" << b.tu << " = " << b.tu << "/" << b.mau << endl;
        }
    }
    }
}

int main()
{
    PHANSO p,q,z;
    int a = 2;
    int b = 4;
    int c = 3;
    int d = 4;
    nhap(&p, a, b);
    nhap(&q,c,d);
    xuat(p);
    xuat(q);

    p = rutGon(&p);

    cout << "Rut gon p: " << p.tu << "/" << p.mau << endl ;
    z = tong(p, q);
    cout << "Tong: " << z.tu << "/" << z.mau << endl;
    z = hieu(p, q);
    cout << "Hieu: " << z.tu << "/" << z.mau << endl;
    z = tich(p, q);
    cout << "Tich: " << z.tu << "/" << z.mau << endl;
    z = thuong(p, q);
    cout << "Thuong: " << z.tu << "/" << z.mau << endl;
    
    if(isToiGian(p)) {
        cout << p.tu << "/" << p.mau << " la so toi gian" << endl;
    }
    else {
        cout << p.tu << "/" << p.mau << " la chua so toi gian" << endl;
    }

    quyDong(&p, &q);
    xuat(p);
    xuat(q);
    soSanh(p, q);

    return 0;
}