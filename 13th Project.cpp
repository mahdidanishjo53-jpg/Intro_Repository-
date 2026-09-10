#include <iostream>
using namespace std;

int main()
{
    int num{};
    cout << "Guess the number: ";
    cin >> num;

    while (num > 0 && num < 55)
    {
        if (num <= 50 && num >= 44)
        {
            cout << "Too high";
        }
        else if (num <= 43 && num >= 38)
        {
           cout << "Close";
        }
        else if (num == 37)
        {
           cout << "Correct";
        }

        else if (num <= 36)
        {
          cout << "Abit low";
        }

        else if ( num <= 30 && num == 0)
        {
            cout << "Too low";
        }
        else
        {
            cout << "invalid number";
        }


    }

        return 0;
}
