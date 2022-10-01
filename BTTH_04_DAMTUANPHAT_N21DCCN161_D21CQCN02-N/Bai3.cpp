#include<iostream>
#include<math.h>

using namespace std;

class Diem {
    private:
        int x;
        int y;
    public:
        Diem() {}
        Diem(int x, int y) : x(x), y(y) {}

        void setX(int x) {
            this->x = y;
        }

        int getX() {
            return x;
        }

        void setY(int y) {
            this->y = y;
        }

        int getY() {
            return y;
        }
        
};

class Doan_thang : public Diem {
    private:
        int a;
        int b;
    public: 
        Doan_thang() {}
        Doan_thang(int x, int y, int a, int b) : Diem(x, y) {
            this->a = a;
            this->b = b;
        }

        void setA(int a) {
            this->a = a;
        }

        int getA() {
            return a;
        }

        void setB(int b) {
            this->b = b;
        }

        int getB() {
            return b;
        }

        void nhap() {
            int a, b, x, y;
            cout << "Nhap diem dau cua doan thang: ";
            cin >> a >> b;
            this->a = a;
            this->b = b;
            cout << "Nhap diem cuoi cua doan thang: ";
            cin >> x >> y;
            Diem::setX(x);
            Diem::setY(y);
        }

        void xuat() {
            cout << "(" << a << ", " << b << ") " << "(" << Diem::getX() << ", " << Diem::getY() << ")" <<  endl; 
        }

        float chieudai() {
            return sqrt(pow(a - Diem::getX(), 2) + pow(b - Diem::getY(), 2));
        }

        bool songsong(Doan_thang dt) {
            float d1 = this->chieudai();
            float d2 = dt.chieudai();
            float VT = (d1*this->getX() - d1*this->getA())*(d2*dt.getY() - d2*dt.getB());
            float VP = (d1*this->getY() - d1*this->getB())*(d2*dt.getX() - d2*this->getA());
            if( VT == VP) {
                return true;
            }
            return false;
        }
};

int main() {
    int a, b, x, y;
    cout << "Nhap toa do dt thu 1: ";
    cin >> a >> b >> x >> y;
    Doan_thang d1(x,y,a,b);
    cout << "Nhap toa do dt thu 2: ";
    cin >> a >> b >> x >> y;
    Doan_thang d2(x,y,a,b);
    
    cout << "Toa do duong thang thu 1: ";
    d1.xuat();
    cout << "Toa do duong thang thu 2: ";
    d2.xuat();
    if(d1.songsong(d2)) {
        cout << "Hai duong thang song song hoac trung nhau" << endl;
    }
    else {
        cout << "Hai duong thang khong song song" << endl;
    }

    return 0;
}
