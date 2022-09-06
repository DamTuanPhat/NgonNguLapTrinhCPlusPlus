#include<iostream>
#include<cstdlib>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int main()
{
	int a,x;
	srand((int)time(0));
	do
	{
	    a=1+rand()%(3);
		cout<<"\n1.Chon keo";
		cout<<"\n2.Chon bua";
		cout<<"\n3.Chon bao\n";
		cout<<"\nNhap lua chon cua ban: ";cin>>x;    	
    	if(x==a)
    	{
    		cout<<"\nBan da chon "<<x;
    		cout<<"\nMay da chon "<<a;
	    	cout<<"\nBan da hoa voi may!";
	    }
	    else
	    {
    		if((x==1 && a==2) || (x==2 && a==3) || (x==3 && a==1))
    		{
		    	cout<<"\nBan da chon "<<x;
		    	cout<<"\nMay da chon "<<a;
		    	cout<<"\nBan da thua may!";
		    }
		    else if((x==1 && a==3) || (x==2 && a==1) || (x==3 && a==2))
		    {
    			cout<<"\nBan da chon "<<x;
    			cout<<"\nMay da chon "<<a;
    			cout<<"\nBan da thang may!";
    		}
    	        else if(x==0)
	        {
         		cout<<"\nTro choi ket thuc!";
         	}
         	else
         	{
	         	cout<<"\nLua chon khong hop le xin nhap lai!";
	        }
    	}
	}while(x!=0);
	return 0;
}
