#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter a Number\n";
    cin>> number;
    while (1)
    {
       if (number>70)
       {
        cout<<"Too High"<<endl;
            cout<<"Enter an other Number\n";
    cin>> number;
       }
       else if (number<20)
       {
        cout<<"Too low"<<endl;
        cout<<"Enter an other Number\n";
        cin>> number;

       }
       if (number>=49 && number<70)
       {
        cout<<" High"<<endl;
            cout<<"Enter an other Number\n";
    cin>> number;
       }
       else if (number>20 && number<47)
       {
        cout<<"low"<<endl;
        cout<<"Enter an other Number\n";
        cin>> number;

       }

       if (number==48)
       {
        cout<<"correct Guess"<<endl;
        break;
       }




    }


}
