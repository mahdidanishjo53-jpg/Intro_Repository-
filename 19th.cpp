#include <iostream>
using namespace std;

int main()

{
    int choice;
    int num1;
    int num2;

    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cin >> choice;

    cout << "Enter the first num: " ;
    cin >> num1;
    cout << "Enter the second num: ";
    cin >> num2;

    switch (choice == 3)
    {
   case 1:
        cout << "Addition is: " << num1 + num2 << endl;
        break;
    case 2:
        cout << "Subtraction is: " << num1 - num2 << endl;
        break;
    case 3:
         cout << "Multplication is: " << num1 * num2 << endl;
         break;
    case 4:
        cout << "Division is: " << num1 / num2 << endl;
        break;
    default:
        break;
    }
    


    
}