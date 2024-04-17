//keeping a running total
//mokshn
//24.2.24
#include<iostream>
using namespace std;
int main(){
    // declaring vars 
   int total = 0 , x1, x2, x3; 
   //asking for an input 
   cout<<"Please enter your first number: ";
   // putting the inputed value into a variable 
   cin>>x1; 
   // setting the total to total + x1 
   total += x1;
     //asking for an input 
   cout<<"Please enter your second number: ";
    // putting the inputed value into a variable 
   cin>>x2;
    // setting the total to total + x2
   total += x2; 
     //asking for an input 
   cout<<"Please enter your third number: ";
    // putting the inputed value into a variable 
   cin>>x3;
    // setting the total to total + x3
   total += x3; 
   //printing the total 
   cout<<total; 
}