#include<iostream>
#include<math.h>

using namespace std;

struct DIEM {
    int x;
    int y;
};

nhap(DIEM *p, int a, int b) {
    p->x = a;
    p->y = b;
}

xuat(DIEM p) {
    cout << "(" << p.x << ", " << p.y << ")";
}

float distance(DIEM a, DIEM b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

DIEM doixung(DIEM d) {
    if(d.x == 0 && d.y == 0) {
        return d;
    }
    else if(d.x == 0) {
        d.y = -d.y;
    }
    else if(d.y == 0) {
        d.x = -d.x;
    }
    else {
        d.x = -d.x;
        d.y = -d.y;
    }
    return d;
}

void kiemTraGocPhanTu(DIEM d) {
    if(d.x == 0 && d.y == 0) {
        xuat(d);
        cout << " la toa do goc!" << endl;
    }
    else if(d.x != 0 && d.y == 0)  {
        xuat(d);
        cout << " nam tren truc hoanh!" << endl;
    }
    else if(d.x == 0 && d.y != 0)  {
        xuat(d);
        cout << " nam tren tung hoanh!" << endl;
    }
    else if(d.x > 0 && d.y > 0) {
        xuat(d);
        cout << " nam tren goc phan tu thu I!" << endl;
    }
    else if(d.x > 0 && d.y > 0) {
        xuat(d);
        cout << " nam tren goc phan tu thu I!" << endl;
    }
    else if(d.x < 0 && d.y > 0) {
        xuat(d);
        cout << " nam tren goc phan tu thu II!" << endl;
    }
    else if(d.x < 0 && d.y < 0) {
        xuat(d);
        cout << " nam tren goc phan tu thu III!" << endl;
    }
    else if(d.x > 0 && d.y < 0) {
        xuat(d);
        cout << " nam tren goc phan tu thu IV!" << endl;
    }
}

int main() {
    DIEM a,b;
    nhap(&a, 1, 2);
    nhap(&b, 3, 4);
    xuat(a);
    cout << endl;
    xuat(b);
    cout << endl;
    cout << "Khoang cach giua 2 diem A va B la: " << distance(a,b) << endl;
    DIEM c = doixung(a);
    xuat(c);
    cout << endl;
    kiemTraGocPhanTu(a);

    return 0;
}