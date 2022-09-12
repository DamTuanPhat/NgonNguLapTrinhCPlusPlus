/* To Phan Kieu Thuong
   N21DCCN184
   D21CQCN02-N*/
#include<iostream>
#include<math.h>
using namespace std;

int caua(int n)
  {
   int S=0;
      for(int i=1;i<=n;i++)
      {
         S=S+i;
      }
      return S;
  }
  int caub(int n)
  {
      int S=0;
      for(int i=1;i<=n;i++)
      {
         S=S+pow(i,2);
      }
      return S;
  }
  float cauc(int n)
  {
      float S=0;
      for(int i=1;i<=n;i++)
      {
         S=S+1/float(i);
      }
      return S;
  }
  int caud(int n)
  {
   int p=1;
   for(int i=1;i<=n;i++)
   {
      p=p*i;
   }
   return p;
  }
  int caue(int n)
  {
   int p=1;
   int T=0;
   for(int i=1;i<=n;i++)
   {
      p=p*i;
      T=T+p;
   }
   return T;
  }
int main()
{
   int n;
   do
   {
      cout<<"Nhap so nguyen duong n: ";
      cin>>n;
   } while(n<=0);
   cout<<"Cau a: S1= "<<caua(n)<<endl;
   cout<<"Cau b: S2= "<<caub(n)<<endl;
   cout<<"Cau c: S3= "<<cauc(n)<<endl;
   cout<<"Cau d: S4= "<<caud(n)<<endl;
   cout<<"Cau e: S5= "<<caue(n)<<endl;



}