#include<iostream>

using namespace std;

struct NGAY {
    int ngay;
    int thang;
    int nam;
};

void nhap(NGAY *n, int ngay, int thang, int nam) {
    n->ngay = ngay;
    n->thang = thang;
    n->nam = nam;
} 

void xuat(NGAY n) {
    cout << "Ngay " << n.ngay << " thang " << n.thang << " nam " << n.nam;
}

bool isNamNhuan(int nam) {
    if(nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0) {
        return true;
    }

    return false;
}

int thuTuNgay(NGAY n) {
    int thuTuNgay = n.ngay;
    switch (n.thang)
    {
    case 1:
        break;
    case 2:
        thuTuNgay += 31;
        break;
    case 3:
        thuTuNgay += 31;
        if(isNamNhuan(n.nam)) {
            thuTuNgay += 28;
        }
        else {
            thuTuNgay += 29;
        }
        break;
    case 4:
        thuTuNgay += 31 + 31;
        if(isNamNhuan(n.nam)) {
            thuTuNgay += 28;
        }
        else {
            thuTuNgay += 29;
        }
        break;
    case 5:
        thuTuNgay += 31 + 31 + 30;
        if(isNamNhuan(n.nam)) {
            thuTuNgay += 28;
        }
        else {
            thuTuNgay += 29;
        }
        break;
    case 6:
        thuTuNgay += 31 + 31 + 30 + 31;
        if(isNamNhuan(n.nam)) {
            thuTuNgay += 28;
        }
        else {
            thuTuNgay += 29;
        }
        break;
    case 7:
        thuTuNgay += 31 + 31 + 30 + 31 + 30;
        if(isNamNhuan(n.nam)) {
            thuTuNgay += 28;
        }
        else {
            thuTuNgay += 29;
        }
        break;
    case 8:
        thuTuNgay += 31 + 31 + 30 + 31 + 30 + 31;
        if(isNamNhuan(n.nam)) {
            thuTuNgay += 28;
        }
        else {
            thuTuNgay += 29;
        }
        break;
    case 9:
        thuTuNgay += 31 + 31 + 30 + 31 + 30 + 31 + 31;
        if(isNamNhuan(n.nam)) {
            thuTuNgay += 28;
        }
        else {
            thuTuNgay += 29;
        }
        break;
    case 10:
        thuTuNgay += 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
        if(isNamNhuan(n.nam)) {
            thuTuNgay += 28;
        }
        else {
            thuTuNgay += 29;
        }
        break;
    case 11:
        thuTuNgay += 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
        if(isNamNhuan(n.nam)) {
            thuTuNgay += 28;
        }
        else {
            thuTuNgay += 29;
        }
        break;
    case 12:
        thuTuNgay += 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
        if(isNamNhuan(n.nam)) {
            thuTuNgay += 28;
        }
        else {
            thuTuNgay += 29;
        }
        break;
    default:
        break;
    }

    return thuTuNgay;
}

int thuTuNgayTu01010001(NGAY n) {
    int thuTuNgay = n.ngay;
    for(int i = 1; i < n.nam; i++) {
        if(isNamNhuan(i)) {
            thuTuNgay += 366;
        }
        else {
            thuTuNgay += 365;
        }
    }
    switch (n.thang)
    {
    case 1:
        break;
    case 2:
        thuTuNgay += 31;
        break;
    case 3:
        thuTuNgay += 31;
        if(isNamNhuan(n.nam)) {
            thuTuNgay += 28;
        }
        else {
            thuTuNgay += 29;
        }
        break;
    case 4:
        thuTuNgay += 31 + 31;
        if(isNamNhuan(n.nam)) {
            thuTuNgay += 28;
        }
        else {
            thuTuNgay += 29;
        }
        break;
    case 5:
        thuTuNgay += 31 + 31 + 30;
        if(isNamNhuan(n.nam)) {
            thuTuNgay += 28;
        }
        else {
            thuTuNgay += 29;
        }
        break;
    case 6:
        thuTuNgay += 31 + 31 + 30 + 31;
        if(isNamNhuan(n.nam)) {
            thuTuNgay += 28;
        }
        else {
            thuTuNgay += 29;
        }
        break;
    case 7:
        thuTuNgay += 31 + 31 + 30 + 31 + 30;
        if(isNamNhuan(n.nam)) {
            thuTuNgay += 28;
        }
        else {
            thuTuNgay += 29;
        }
        break;
    case 8:
        thuTuNgay += 31 + 31 + 30 + 31 + 30 + 31;
        if(isNamNhuan(n.nam)) {
            thuTuNgay += 28;
        }
        else {
            thuTuNgay += 29;
        }
        break;
    case 9:
        thuTuNgay += 31 + 31 + 30 + 31 + 30 + 31 + 31;
        if(isNamNhuan(n.nam)) {
            thuTuNgay += 28;
        }
        else {
            thuTuNgay += 29;
        }
        break;
    case 10:
        thuTuNgay += 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
        if(isNamNhuan(n.nam)) {
            thuTuNgay += 28;
        }
        else {
            thuTuNgay += 29;
        }
        break;
    case 11:
        thuTuNgay += 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
        if(isNamNhuan(n.nam)) {
            thuTuNgay += 28;
        }
        else {
            thuTuNgay += 29;
        }
        break;
    case 12:
        thuTuNgay += 31 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
        if(isNamNhuan(n.nam)) {
            thuTuNgay += 28;
        }
        else {
            thuTuNgay += 29;
        }
        break;
    default:
        break;
    }

    return thuTuNgay;
}

NGAY timNgay(NGAY n, int k) {
    NGAY c;
    int ngay = n.ngay + k;
    if(n.thang == 2) {
        if(isNamNhuan(n.nam)) {
            if(ngay > 28) {
                ngay -= 28;
                n.thang++;
            }
            else if (ngay < 1) {
                ngay = 28 - ngay;
                n.thang--;
            }
        }
        else {
            if(ngay > 29) {
                ngay -= 29;
                n.thang++;
            }
            else if (ngay < 1) {
                ngay = 29 - ngay;
                n.thang--;
            }
        }
    }
    else if(n.thang == 1 // Cac thang co 31 ngay
         || n.thang == 3 
         || n.thang == 5 
         || n.thang == 7 
         || n.thang == 8 
         || n.thang == 10 
         || n.thang == 12) {
            if(ngay > 31) {
                ngay -= 31;
                n.thang++;
            }
            else if (ngay < 1) {
                ngay = 31 - ngay;
                n.thang--;
            }
            if(n.thang == 0) {
                n.thang = 12;
                n.nam--;
            }
            if(n.thang == 13) {
                n.thang = 1;
                n.nam++;
            }
    }
    else { // Cac thang co 30 ngay
        if(ngay > 30) {
            ngay -= 30;
            n.thang++;
        }
        else if (ngay < 1) {
            ngay = 30 - ngay;
            n.thang--;
        }
    }

    n.ngay = ngay;

    return n;
}

void soSanh(NGAY a, NGAY b) {
    if(a.nam > b.nam) {
        xuat(a);
        cout << " tre hon ";
        xuat(b);
        cout << endl;
    }
    else if(a.nam < b.nam) {
        xuat(a);
        cout << " som hon ";
        xuat(b);
        cout << endl;
    }
    else {
        if(a.thang > b.thang) {
            xuat(a);
            cout << " tre hon ";
            xuat(b);
            cout << endl;
        }
        else if(a.thang < b.thang) {
            xuat(a);
            cout << " som hon ";
            xuat(b);
            cout << endl;
        }
        else {
            if(a.ngay > b.ngay) {
                xuat(a);
                cout << " tre hon ";
                xuat(b);
                cout << endl;
            }
            else if (a.ngay < b.ngay) {
                xuat(a);
                cout << " som hon ";
                xuat(b);
                cout << endl;
            }
            else {
                cout << "Cung mot ngay!." << endl;
            }
        }
    }
}


int main() {
    NGAY n, m;
    nhap(&n, 27, 9 , 2022);
    xuat(n);
    cout << endl;
    nhap(&m, 28, 9, 2022);
    xuat(m);
    cout << endl;
    soSanh(n, m); 

    cout << endl;
    xuat(n);
    cout << " la ngay thu " << thuTuNgay(n) << " trong nam." << endl;

    xuat(n);
    cout << " la ngay thu " << thuTuNgayTu01010001(n) << " ke tu ngay 01/01/01" << endl;

    NGAY p = timNgay(n, 10);
    xuat(p);

    return 0;
}
