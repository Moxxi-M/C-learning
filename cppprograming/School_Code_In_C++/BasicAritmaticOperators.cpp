// arythmatic operators
// moksh n
// 24.2.24
#include <iostream>
using namespace std;
int main()
{
  // declaring variables
  int hours = 0;
  float rate = 0.0 , weekly_pay = 0.0;

  // asking for an input
  cout << "Enter how many hours you work: ";
  cin >> hours;
  cout << "Enter how much you get paied per hour: ";
  cin >> rate;
  weekly_pay = (hours * rate);
  cout << "Your weekly pay is: £" << weekly_pay << endl;

  return 0;
}