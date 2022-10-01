#include<iostream>
#include<math.h>

using namespace std;

struct DIEM
{
    int x;
    int y;
};

void nhap(DIEM *p, int a, int b) {
    p->x = a;
    p->y = b;
}

void xuat(DIEM p) {
    cout << "(" << p.x << ", " << p.y << ")";
}

float distance(DIEM a, DIEM b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int demHoanhDuong(DIEM d[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(d[i].x >= 0) {
            count++;
        }
    }
    return count;
}

int demDiemKhongTrung(DIEM d[], int n) {
    int count = 0;
    for(int i = 0; i < n-1; i++) {
        bool isUnique = true;
        for(int j = i + 1; j < n; j++) {
            if(d[i].x == d[j].x && d[i].y == d[j].y) {
                isUnique = false;
                break;
            }
        }
        if(isUnique) {
            count++;
        }
    }

    return count;
}

void hoanhDoMin(DIEM d[], int n) {
    DIEM min = d[0];
    for(int i = 1; i < n; i++) {
        if(d[i].x < min.x) {
            min = d[i];
        }
    }

    cout << "Diem co hoanh do nho nhat la: ";
    xuat(min);
}

void hoanhDoMax(DIEM d[], int n) {
    DIEM max = d[0];
    for(int i = 1; i < n; i++) {
        if(d[i].x > max.x) {
            max = d[i];
        }
    }
    cout << "Diem co hoanh do lon nhat: ";
    xuat(max);
}

void minDistance(DIEM d[], int n) {
    DIEM O;
    nhap(&O, 0, 0);
    float minDistance = distance(d[0], O);
    int minIndex = 0;
    for(int i = 1; i < n; i++) {
        if(distance(d[i], O) < minDistance) {
            minDistance = distance(d[i], O);
            minIndex = i;
        }
    }

    cout << "Diem gan goc toa do nhat la: ";
    xuat(d[minIndex]);
}

int main()
{
    int n;
    cout << "Nhap so diem trong mat phang toa do: ";
    cin >> n;
    DIEM diem[n];
    for(int i = 0; i < n; i++) {
        int a,b;
        cout << "Nhap diem thu " << i + 1 << " : ";
        cin >> a >> b;
        nhap(&diem[i], a, b);
    }

    for(int i = 0; i < n; i++) {
        xuat(diem[i]);
        cout << endl;
    }

    cout << "So diem co hoanh do duong: " << demHoanhDuong(diem, n) << endl;
    cout << "So diem khong trung voi cac diem khac trong mang: " << demDiemKhongTrung(diem, n) << endl;
    hoanhDoMin(diem, n);
    cout << endl;
    hoanhDoMax(diem, n);
    cout << endl;
    minDistance(diem, n);
    cout << endl;

    return 0;
}
