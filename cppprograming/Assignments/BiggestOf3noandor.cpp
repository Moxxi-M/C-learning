#include <iostream>
using namespace std;
int main()
{
    int x1, x2, x3;

    cout << "Please enter your first number: ";
    cin >> x1;
    cout << "Please enter your second number: ";
    cin >> x2;
    cout << "Please enter your third number: ";
    cin >> x3;

    if (x1 > x2)
    {
        if (x1 > x3)
            cout << x1 << " is the biggest number";
    }

    if (x2 > x1)
    {
        if (x2 > x3)
            cout << x2 << " is the biggest number";
    }

    if (x3 > x1)
    {
        if (x3 > x2)
            cout << x3 << " is the biggest number";
    }
}