#include<iostream>
using namespace std;
int main(){
   int x1 = 1;
   int x2 = 156;
   int x3 = 1000;
   int x4 = 554;
   int x5 = 69;
   char lucki = '%' ; 

   cout<<"Please give me your first number: ";
   cin>>x1 ; 
   cout<<"Please give me your second number: ";
   cin>>x2 ;
   cout<<"Please give me your third number: ";
   cin>>x3 ;
   cout<<"Please give me your fourth number: ";
   cin>>x4 ;
   cout<<"Please give me your fifth number: ";
   cin>>x5 ;
   float percent = (x1 + x2 + x3 + x4 + x5) / 5.0 ;
   cout<<percent<<lucki; 
  

}