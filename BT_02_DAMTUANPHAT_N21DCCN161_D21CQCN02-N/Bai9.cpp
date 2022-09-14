#include<iostream>
#include<cstdlib>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int main()
{
	string a,x;
	cout << "\nChon keo (K)";
	cout << "\nChon bua (B)";
	cout << "\nChon bao (O)\n";
	cout << "\nNhap lua chon cua nguoi choi 1: ";
	cin >> x;    	
	cout << "\nNhap lua chon cua nguoi choi 2: ";
	cin >> a;    	
	if(x==a)
	{
		cout << "\nNguoi choi 1 da chon " << x;
		cout << "\nNguoi choi 2 da chon " << a;
		cout << "\nNguoi choi 1 da hoa voi Nguoi choi 2!";
	}
	else
	{
		if((x=="K" && a=="B") || (x=="B" && a=="O") || (x=="O" && a=="K"))
		{
			cout << "\nNguoi choi 1 da chon " << x;
			cout << "\nNguoi choi 2 da chon " << a;
			cout << "\nNguoi choi 2 da thang Nguoi choi 1!";
		}
		else if((x=="K" && a=="O") || (x=="B" && a=="K") || (x=="O" && a=="B"))
		{
			cout << "\nNguoi choi 1 da chon " << x;
			cout << "\nNguoi choi 2 da chon " << a;
			cout << "\nNguoi choi 1 da thang Nguoi choi 2!";
		}
		else
		{
			cout << "\nLua chon khong hop le xin nhap lai!";
		}

	}
	return 0;
}
