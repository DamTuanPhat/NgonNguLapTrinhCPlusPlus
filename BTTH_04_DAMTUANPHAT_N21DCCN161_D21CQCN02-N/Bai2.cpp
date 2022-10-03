#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <cmath>
#include <string>
#include <numeric>
#include <map>
#include <iomanip>
#include <set>

using namespace std;

class ptbn
{
private:
    int b;
    int c;

public:
    ptbn() {}
    ptbn(int b, int c) : b(b), c(c) {}

    void setB(int b)
    {
        this->b = b;
    }

    void setC(int c)
    {
        this->c = c;
    }

    int getB() {
        return b;
    }

    int getC() {
        return c;
    }

    void giai()
    {
        if (b != 0)
        {
            float x = -b / c;
            cout << "Phuong trinh co nghiem duy nhat x = " << x << endl;
        }
        else
        {
            if (c != 0)
            {
                cout << "Phuong trinh vo nghiem!" << endl;
            }
            else
            {
                cout << "Phuong trinh luon dung voi moi x." << endl;
            }
        }
    }
};

class ptbh : public ptbn
{
private:
    int a;

public:
    ptbh(int a, int b, int c) : ptbn(b, c)
    {
        this->a = a;
    }


    void giai()
    {
        if (a != 0)
        {
            float delta = pow(ptbn::getB(), 2) - 4 * a * ptbn::getC();
            if (delta < 0)
            {
                cout << "Phuong trinh vo nghiem!" << endl;
            }
            else
            {
                if (delta == 0)
                {
                    float x = -ptbn::getB() / (2 * a);
                    cout << "Phuong trinh co nghiem kep x = " << x << endl;
                }
                else
                {
                    float x1 = (-ptbn::getB() - sqrt(delta)) / (2 * a);
                    float x2 = (-ptbn::getB() + sqrt(delta)) / (2 * a);
                    cout << "Phuong trinh co 2 nghiem phan biet, x1 = " << x1 << ", x2 = " << x2 << endl;
                }
            }
        }
        else
        {
            ptbn::giai();
        }
    }
};

int main()
{
    int a, b, c;
    cout << "Nhap cac he so a, b, c: ";
    cin >> a >> b >> c;
    ptbh pt(a,b,c);
    pt.giai();
    return 0;
}
