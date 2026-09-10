#include <iostream>
using namespace std;

int main()
{
    string userName{};
    int password{};

    cout << "Enter the username: ";
    getline(cin, userName);

    cout << "Enter your password: ";
    cin >> password;


    if (password == 1234)
    {
        cout << "Login Successful!";
    }
    else if (password != 1234)
    {
       cout << "Invalid user name or Password " << endl;
    }

   

    
    return 0;
    
}