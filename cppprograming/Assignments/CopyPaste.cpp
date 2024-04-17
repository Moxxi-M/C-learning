#include<iostream>
using namespace std;
int main(){

   int x1 = 0; 
   cout<<"input a positive number: ";
   cin>>x1; 

   if (x1 > 99 && x1 < 1000)
    cout<<"This number is a three digit number";
   else 
    cout<<"This isnt a three digit number"; 
}