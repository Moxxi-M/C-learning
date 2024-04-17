#include<iostream>
using namespace std;
int main(){
   int x1; 
   cout<<"Please enter a number: ";
   cin>>x1;
   if ((x1 % 5 == 0) ||  (x1 % 3 == 0 )){

     if(x1 % 15 != 0)
      cout<<"Your number is divisible by 5 or 3 and not by 15";
     else 
       cout<<"Unmatched Condition";
    }
    else 
       cout<<"Unmatched Condition";

    
}