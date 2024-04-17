#include<iostream>
using namespace std;
int main(){
   float p, rate, time, simple_intrest; 
   cout<<"please enter the amount you would like to calculate with: ";
   cin>> p; 
   cout<<"Please enter the rate of intrest: "; 
   cin>>rate;
   cout<<"Please enter the amount of time in which "<< p << " will gather intrest: ";
   cin>>time;
   simple_intrest = (p*rate*time)/100;
   cout<<simple_intrest;


}