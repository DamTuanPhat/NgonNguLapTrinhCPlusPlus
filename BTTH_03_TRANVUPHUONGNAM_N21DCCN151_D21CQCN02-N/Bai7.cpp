#include<iostream>
#include<math.h>

using namespace std;

class ptb2 {
    private:
        float a, b, c;
    public:
        ptb2() {
            this->a = 0;
            this->b = 0;
            this->c = 0;
        }

        ptb2(float a, float b, float c) {
            this->a = a;
            this->b = b;
            this->c = c;
        }

        void setA(float a) {
            this->a = a;
        }

        float getA() {
            return a;
        }

        void setB(float b) {
            this->b = b;
        }

        float getB() {
            return b;
        }

        void setC(float c) {
            this->c = c;
        }

        float getC() {
            return c;
        }

        void giaipt() {
            if( a != 0) {
                float delta = pow(b, 2) - 4 * a * c;
                if(delta < 0) {
                    cout << "Phuong trinh vo nghiem!" << endl;
                }
                else {
                    if(delta == 0) {
                        float x = - b / (2 * a);
                        cout << "Phuong trinh co nghiem duy nhat x = " << x << endl;
                    }
                    else {
                        float x1 = (-b - sqrt(delta)) / (2 * a);
                        float x2 = (-b + sqrt(delta)) / (2 * a);
                        cout << "Phuong trinh co 2 nghiem phan biet, x1 = " << x1 << ", x2 = " << x2 << endl; 
                    }
                }
            }
            else {
                if(b != 0) {
                    float x = -b / c;
                    cout << "Phuong trinh co nghiem duy nhat x = " << x << endl;
                }
                else {
                    if(c != 0) {
                        cout << "Phuong trinh vo nghiem!" << endl;
                    }
                    else {
                        cout << "Phuong trinh luon dung voi vo so nghiem!" << endl;
                    }
                }
            }
        }
};

int main() {
    float a, b, c;
    cout << "Nhap tham so a, b, c cua phuong trinh: ax^2 + bx + c = 0: ";
    cin >> a >> b >> c;

    ptb2 pt(a, b, c);
    pt.giaipt();

    return 0;
}
