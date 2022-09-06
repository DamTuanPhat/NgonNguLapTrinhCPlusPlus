#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int key;
    do
    {
        cout << "1. Tinh dien tich, chu vi hinh tron bang ban kinh" << endl;
        cout << "2. Tinh ban kinh cua hinh tron bang dien tich" << endl;
        cout << "0. Thoat" << endl;
        cout << "Chon chuong trinh: ";
        cin >> key;
        cout << endl;
        switch (key)
        {
        case 0: 
            {
                break;
            }

        case 1:
            {
                float r;
                cout << "Nhap ban kinh cua hinh tron: ";
                cin >> r;
                float d = 3.14*r*r;
                float c = 3.14*2*r;
                cout << "Dien tich hinh tron la: " << d << endl;
                cout << "Chu vi hinh tron la: " << c << endl << endl;
                break;
            }

        case 2:
            {
                float d;
                cout << "Nhap dien tich cua hinh tron: ";
                cin >> d;
                float r = sqrt(d / 3.14);
                cout << "Ban kinh cua hinh tron la: " << r << endl << endl;
                break;
            }

        default:
            {
                cout << "Loi khi chon chuong trinh, vui long chon lai chuong trinh!" << endl << endl;
                break;
            }
        }
    } while (key != 0);
    

    return 0;
}
