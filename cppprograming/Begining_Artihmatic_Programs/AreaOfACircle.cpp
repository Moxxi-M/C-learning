#include<iostream>
using namespace std;
int main(){
   float radius = 0.0;
   float pi = 3.1415926;
   float area = 0.0;

    cout<<"What is the radius of your circle: ";
    cin>>radius;
    area = (radius*radius)*pi;
    cout<<"The area of your circle is: "<< area; 
    

}