#include<iostream>
#include<math.h>
using namespace std;
int ucln(int a,int b {
    int max,min;
    int i;
    if ( a== b) {
        return a;
    }
    else {
        if(a > b) {
            max = a;
            min = b;
        }
        else {
            max = b;
            min = a;
        }
        for( i= min; i >= 0; i--) {
            if(min%i==0 && max%i==0) {
            
            break;
            }
        }
        return i;
    }
}

int main() {
    int a,b;
    do {
        cout << "Nhap a: ";
        cin >> a;
    } while(a<=0);
    do {
        cout << "Nhap b: ";
        cin>>b;
    } while(b<=0);
    cout << "UCLN: " << ucln(a,b) << endl;

    return 0;
}
