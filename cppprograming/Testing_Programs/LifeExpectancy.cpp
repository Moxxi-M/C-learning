#include <iostream>
using namespace std;
int main()
{
   int age, dyear, avg_expectancy = 73, death_age;
   cout << "Enter your current age: ";
   cin >> age;

   if (age > 73)
   {
      cout << "You have already surpassed the global avrage age! Good job!";
      cout << endl;
   }

   if (age <= 15)
   {
      avg_expectancy = 84;
   }

   if (age >= 60)
   {
      avg_expectancy = 21;
   }

   cout << "Enter the year of your birth: ";
   cin >> dyear;

   death_age = (age + avg_expectancy);
   dyear += death_age;

   cout << "I predict that you will live to the age: " << death_age;
   cout << endl
        << "And you will turn that age during the year: " << dyear;
        
   return 0; 
}