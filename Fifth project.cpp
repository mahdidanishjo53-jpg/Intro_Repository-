#include <iostream>
using namespace std;


/*
1. The largest of 3 numbers.
# allowing users to compare three digits and ask which is bigger.
*/

int main()
{
int num1;
int num2;
int num3;


cout << "Enter your first num: ";
cin >> num1;

cout << "Enter your second num: ";
cin >> num2;

cout << "Enter your third num: ";
cin >> num3;


// 2. We are going to use nested if conditinalto spot the largest value.
cout << "===================================================================== ";

if (num1 > num2 && num1 > num3)
    {
        if (num2 < num3 )
        {
            cout << "The first num is the largest ";
        }
        cout << "First number is the largest ";
    }

else if (num2 > num1 && num2 > num3)
{
    if (num3 > num2)
    {
        cout << "The second number is the largest ";
    }
    cout << "Second number is the largest ";
}

else if (num3 > num1 && num3 > num2)
{
    if (num2 < num1)
    {
        cout << "The third number is the largest ";
    }

    cout << "Third value is the largest ";
}

cout << "=====================================================================";

return 0;

}