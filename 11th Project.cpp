#include <iostream>
using namespace std;


int main()
{

    int balance = 1;
    int depsit = 2;
    int withdraw = 3;
    int exit = 4;


    cout << "============== ATM ===============" << endl;
    cout << "Choose an option: " ;
    cin >> balance;

    switch (balance)
    {
    case 1:
        if ( balance >= 5000)
        {
            cout << "You are eligible for withdraw" << endl;
        }
        else
        {
            cout << "Account, not eligible" << endl;
        }
        break;

    case 2:
        if (balance == depsit)
        {
            cout << "Deposit confirmed" << endl;
        }
        else
        {
            cout << "Deposit your account" << endl;
        }
    case 3:
        if ( balance == withdraw && balance < depsit)
        {
            cout << "you can't withdraw"<< endl;
        }
        else
        {
            cout << "Back your money" << endl;
        }
        break;

    case 4:
        if (balance < withdraw)
        {
            cout << "Exit";
        }
        break;
    }
    return 0;


}