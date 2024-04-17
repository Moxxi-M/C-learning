#include<iostream>
using namespace std;
int main(){
   int x1; 
   cout<<"Please enter a number: ";
   cin>>x1;
   if (x1 % 5 == 0 && x1 % 3 == 0)
    cout<<"This number is divisible by 5 and 3";
   if (x1 % 5 == 0)
    cout<<"This number is divisible by 5";
   if (x1 % 3 == 0)
    cout<<"This number is divisble by 3";
    
}