#include <bits/stdc++.h>
using namespace std;
int fi(int n){
    if(n ==0) return 0;
    if(n==1) return 1;
    if(n==2) return 1;  
    return fi(n-1)+fi(n-2);
}
int main () {
    char cau; cin >> cau;
    int n;cin >> n;
    float b = 0,c{};
    if(cau == 'a') {
    cout << "A = [ 0 ";
    for(int i=1; i<=n; i++){
      b = fi(i);
     cout << b << " ";
    }
    cout <<  "]";
    }
    else if(cau=='b') {
        for(int i=1; i<=n; i++){
        b =fi(i);
        c +=1/b;
    }
    cout << c;
    }
    else {
        cout << "A = [ ";
        for(int i=n;i>0;i--) {
            b = fi(i);
            cout << b <<" ";
        }
        cout << "0 ]";
    }
}