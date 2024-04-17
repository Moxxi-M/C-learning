#include <iostream>
using namespace std;
int main()
{
    char ch;
    int x1;
    cout << "Please enter any character: ";
    cin >> ch;

    x1 = (int)ch;  
    //nested if 
    if (x1 >= 65 && x1 <= 91)
    {
     cout << ch << " is a capital letter in the alphabet";
     if (x1 >= 97 && x1 <= 123)
     cout << ch << " is not a capital letter in the alphabet";
    }
      
    else
     cout << ch << " is not a member of the alphabet";
}