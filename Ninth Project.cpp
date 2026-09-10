#include <iostream>
using namespace std;

// 1. Number of days in a month project: Allowing users to understand how many days does a month is consisted of.

int main()
{

int months_Number;

cout << "Enter months number: ";
cin >> months_Number;


switch (months_Number)
{
case 1:
    if (months_Number == 1)
    {
        cout << "January has 30 days";
    }
    else
    {
        break;
    }
    break;

case 2:
    if (months_Number == 2)
    {
        cout << "Febuary has 28 or 29 days";
    }
    else 
    {
        break;
    }
    break;
case 3:
    if (months_Number == 3)
    {
       cout << "March has 30 days";
    }
    else
    {
        break;
    }
    break;

case 4:
     if (months_Number == 4)
    {
        cout << "April has 29 days";
    }
    else
    {
        break;
    }
    break;
case 5:
    if (months_Number == 5)
    {
        cout << "May has 31 days";
    }
    else
    {
        break;
    }
    break;
case 6: 
    if (months_Number == 6)
    {
        cout << "Jun has 29 days";
    }
    else
    {
        break;
    }
    break;
case 7:
    if (months_Number == 7)
    {
        cout << "Jully has 31 days";
    }
    else 
    {
        break;
    }
    break;
case 8:
    if (months_Number == 8)
    {
        cout << "August as 31 days";
    }
    else
    {
        break;
    }
}
return 0;
    
}