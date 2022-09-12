/* To Phan Kieu Thuong
   N21DCCN184
   D21CQCN02-N*/
#include<iostream>
#include<math.h>
using namespace std;
int caua(string str)
{
   cout<<"Nhap ki tu hoa: ";
   getline(cin,str);
   int str1=int(str)+int(32);
   cout<<"Ki tu thuong: "<<string(str1)<<endl;
   return 0;

}
int main()
{
   string Str;
   caua(Str);

}