#include <iostream>
using namespace std;

int main()
{
    int weeks_day{6};

    cout << "Enter a number (1 - 7): ";
    cin >> weeks_day;

    switch (weeks_day)
    {
    case 1:
        cout << "Saturday";
        break;

    case 2:
        cout << "Sunday";
        break;
    case 3:
        cout << "Monday";
        break;
    case 4:
        cout << "Tuesday";
        break;

    case 5:
        cout << "Wednesday";
        break;
    case 6:
        cout << "Thursday";
        break;
    case 7:
        cout << "Friday";
        
    }
    return 0;

}