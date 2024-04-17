#include<iostream>
using namespace std;
int main(){
   int x1, x2, x3; 
   
   cout<<"Please enter the first number: ";
   cin>>x1;  
   cout<<"Please enter the second number: ";
   cin>>x2;
   cout<<"Please enter the third number: ";
   cin>>x3;

   if (x1 > x2 && x1 > x3)
    cout<< x1 << " is the largest number";

   if (x2 > x1 && x2 > x3)
    cout<< x2 << " is the largest number";
 
   else
    cout<< x3 << " is the largest number";
}