#include <iostream>
using namespace std;
// 1. Even or Odd: The user enters a number and machine will check if they number is odd or even.
int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;
// 2. Control flow is mainly utilized to execute the code.
    if (num % 2 == 0)
    {
        cout << "Even";
    }
    else if (num % 2 != 0)
    {
        cout << "Odd";
    }
    else
    {
        cout << "Your number isn't defined in the system";
    }
    return 0;
}