#include <iostream>
using namespace std;

int main()
{

// 1. Simple calculators allows the user to calculate different values based on a selected operation.
int firstNumber;
int seconNumber;
int operation{3};
// 2. You now enter the digits as a user
cout << "Enter the first number: ";
cin >> firstNumber;

cout << "Enter the second number: ";
cin >> seconNumber;
// 3. This is where story begins.
switch (operation)
{
case 1:
cout << firstNumber + seconNumber;
break;

case 2:
cout << firstNumber - seconNumber;
break;

case 3:
cout << firstNumber * seconNumber;
break;

case 4:
cout << firstNumber / seconNumber;
break;
}
return 0;
}