#include <iostream>
using namespace std;

//1. The largest of two numbers: This source code allow users to enter two digits, compare them and decide which one is the biggest one.

int main()
{
// 2. We are going to declare our variables and initialize them using the control flow conditions in C++.

int num ;
int num2;
cout << "Enter the first number: ";
cin >> num;

cout << "Enter the second number: ";
cin >> num2;

// 3. Conditionla flow
if ( num > num2)
{
    cout << "The first number is larger";
}
else if (num2 > num)
{
   cout << "The second number is larger";
}
else 
{
    cout << "Not defined in the system";
}
return 0;



}