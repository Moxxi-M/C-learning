#include<iostream>
using namespace std;
int main(){

   int selling_price = 0; 
   int cost_price = 0;
   int profit = 0;
  

   cout<<"Please enter the cost price of your product (USD): ";
   cin>> cost_price;

   cout<<"Please enter the selling price of your product (USD): ";
   cin >> selling_price;

   profit = selling_price - cost_price;

   if(profit < 0)
    profit *= -1; 
   
   if (selling_price > cost_price)
    cout<<"You made a " << profit <<  " dollar profit";
   if (selling_price == cost_price)
    cout<<"Neither profit  nor loss ";
   if (selling_price < cost_price)
    cout<<"You made a " << profit << " dollar loss";
}