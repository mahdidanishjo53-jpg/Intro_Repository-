#include <iostream>
using namespace std;
//. 1. Age checker: Ask the user for their age and determine whether they are youn, adult or man.
int main()
{
    int age;
    
// 2. Control flow
    cout << "Enter your age: " ;
    cin >> age;

    if (age >= 10 && age <= 20)
    {
        cout << "You are adult";
    }
    else if (age >= 20 && age <= 25)
    {
        cout << "You are young now";
    }
    else if (age >= 25 && age <= 30)
    {
       cout << "You are man";
    }

    else
    {
        cout << "Your age is not defined in the system";
    }
    
// 3. End of your code
    return 0;
    
}