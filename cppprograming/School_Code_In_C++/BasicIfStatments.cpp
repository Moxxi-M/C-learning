//basic if statments
//mokshn
//24.2.24
#include<iostream>
using namespace std;
int main(){
   string name; 
   int age = 0;
   cout<<"Enter your name: ";
   cin>>name;
   cout<<"Enter your age: ";
   cin>>age; 
   if (age < 18 ){
        cout<<"You are not old enough to vote";
   }
   else{
    cout<< name << " ,you are old enough to vote";
   }
}