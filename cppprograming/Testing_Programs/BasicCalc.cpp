#include <iostream>
using namespace std;
int main()
{
    // declaring vars as integers
    float x1, x2 = 1, m, total;
    // declaring a boolean variable that allows the user to do multiple calculations while setting that var to true
    bool repeat = true;
    // declaring a string variable that is used to input the users response
    string response = "";

    // using a while loop that repeats as long as the var repeat is true
    while (repeat)
    {
        // asking for an input
        cout << "Please input your first number: ";
        // putting the input into a variable
        cin >> x1;
        // asking for an input
        cout << "Please input your second number: ";
        // putting the input into a variable
        cin >> x2;

        // asking for an input
        cout << "Please input what operator you would like to use: "
             << endl
             << "(1) multiplication "
             << endl
             << "(2) division";
        cout << endl
             << "(3) addition"
             << endl
             << "(4) subtraction"
             << endl;
        // putting the input into a variable
        cin >> m;
        // asking the user to input another number other than 0 if thats their input and they have selcted to do division
        while (x2 == 0 && m == 2)
        {
            cout << "Invalid Input. 0 isnt allowed" << endl;
            cout << "Please enter your second number: ";
            cin >> x2;
        }
        // checking if the variable is equal to one
        if (m == 1)
        { // multiplying it since 1 is correlating to multiplication
            total = x1 * x2;
            // outputting the result
            cout << x1 << " * " << x2 << " = " << total;
        }

        // else if statment to check if its any of the other operators
        else if (m == 2 && x2 != 0)
        { // doing the coresponding equation
            total = x1 / x2;
            // printing the result
            cout << x1 << " / " << x2 << " = " << total;
        }
        // else if statment to check if its the third operator
        else if (m == 3)
        { // doing the coresponding equation
            total = x1 + x2;
            // printing the result
            cout << x1 << " + " << x2 << " = " << total;
        }
        // else if statment to check if its the fourth operator
        else if (m == 4)
        {   // doing the coresponding equation
            total = x1 - x2;
            // printing the result
            cout << x1 << " - " << x2 << " = " << total;
        }
        //printing if another calculation would like to be done 
        cout << endl
             << "Would you like to do another calculation? (y/n): ";
             //inputing the response 
        cin >> response;
        // setting the repeat bool to be true if the user types y 
        repeat = (response == "y");
    }
    // prints if the user types n in the privious question 
    cout << "Thank you for using my claclulator. ";

    return 0;
}