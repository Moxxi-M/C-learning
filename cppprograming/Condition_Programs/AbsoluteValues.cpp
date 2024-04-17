#include<iostream>
using namespace std;
int main(){
   int a;
   cout<<"Please enter a number: ";
   cin>> a; 
   if (a >= 0){
    cout<< a; 
   }
   else{
    cout<<-a; //or cout<<(a*(-1)); 
   }
}