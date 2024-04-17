#include<iostream>
using namespace std;
int main(){
   bool flag = true; 
   bool glass = false; 
   bool x1 = 0; //false
   bool x2 = 1; //true 
   
   cout<< (glass == flag)<<" -false" << endl;
   cout<< (x2 == flag) << " -true" << endl;
}