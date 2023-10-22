#include <iostream>

using namespace std;

int main() // Used "int main()" instead of "void main()"
{
    char statement[100];
    int op1, op2;
    char operation;
    char answer = 'Y'; // Used single quotes for characters, and add a semicolon here

    while (answer == 'Y' || answer == 'y') // Used a logical OR to check for both 'Y' and 'y'
    {
        cout << "Enter expression" << endl;
        cin >> op2 >> operation >> op1;

        if (operation == '+') // Removed the semicolon after the if statement
        {
            cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; // Used "<<" instead of ">>"
        }
        if (operation == '-') // Removed the semicolon after the if statement
        {
            cout << op1 << " - " << op2 << " = " << op1 - op2 << endl; // Used "<<" instead of ">>"
        }
        if (operation == '*') // Removed the semicolon after the if statement
        {
            cout << op1 << " * " << op2 << " = " << op1 * op2 << endl; // Added a semicolon here
        }
        if (operation == '/') // Removed the semicolon after the if statement
        {
            cout << op1 << " / " << op2 << " = " << static_cast<double>(op1) / op2 << endl; // Added a semicolon here, and cast op1 to double for division
        }

        cout << "Do you wish to evaluate another expression? " << endl;
        cin >> answer;
    }

    return 0; // Added a return statement at the end of main
}
