#include <iostream>
using namespace std;


int main()
{
    int password{};
    cout << "Enter password: " ;
    cin >> password;

   

 

    if (password == 12345)
    {
        cout << "Access Granted";

    }
    
    else if (password != 12345 )
    {
        cout << "Wrong password";
    }
return 0;
    
}