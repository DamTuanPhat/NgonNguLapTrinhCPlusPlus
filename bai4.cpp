#include <bits/stdc++.h>
using namespace std;
int main () {
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr); cout.tie(nullptr);
    int a,b; cin >> a >> b;
	if(a==0||b==0) cout << a+b;
	else {
		while(a!=b) {
			if(a>b) {
				a-=b;
			} else {
				b-=a;
		}
	}
	cout << a;
	}
}