#include <iostream>
#include<conio.h>
#include<math.h>

using namespace std;	

float det(float a[100][100],int n)
{
    int i, j, k, dem = 0, kt;
    float b[100], h, det=1, c[100];
    for(i = 0;i < n-1; i++)
    {
        if(a[i][i] == 0) {
            kt = 0;
            for(j = 0;j < n; j++) {
                if(a[i][j] != 0) {
                    for(k = 0;k < n; k++) {
                        // Doi cot j voi cot i
                        c[k] = a[k][i];
                        a[k][i] = a[k][j];
                        a[k][j] = c[k];
                    }
                    dem++;// dem so lan doi cot
                    kt++;// Kiem tra xem co so 0 o dong i cot j
                    break;
                }
            }
        }

        if(kt == 0) {
            return 0;
        }

        b[i] = a[i][i];

        for(j = 0; j < n; j++) {
            a[i][j] = a[i][j]/b[i];//tao so 1 o dong i,cot i
        }

        for(j = i+1; j < n; j++) {
            h = a[j][i];
            for(k = 0;k < n; k++) {
                a[j][k] = a[j][k] -h*a[i][k];//lay dong thu j-h*dong i
            }
        }
    }
    b[n-1] = a[n-1][n-1];

    for(i = 0; i < n; i++) {
        det = det*b[i];// Nhan cac so da lay ra ngoai dinh thuc
    }

    return abs(det);

    
}

int main()
{
    float a[100][100];
    int n;
    cout << "Nhap kich thuoc cua ma tran nxn: ";
    cin >> n;
    
    cout << "Nhap gia tri cho ma tran: " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    cout << "Dinh thuc cua ma tran vuong la: " << det(a, n);

    
    
    return 0;
}
