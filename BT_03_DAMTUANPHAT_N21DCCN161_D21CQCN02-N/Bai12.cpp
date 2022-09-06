#include<iostream>

using namespace std;

int main() {
   int x;
   int i=0;
   int S=0;
   int a[i];
   cout<< "Enter Array: " << endl;
   while(x!=9999)
   {
      cin>>x;
      a[i]=x;
      i++;
   }
   cout<< "Array : " << endl;
   for(int j=0;j<i;j++)
   {
      cout << a[j] << " " ;
      S += a[j];
   }
   cout << endl << "TBC: " << S / (float) i ;

}