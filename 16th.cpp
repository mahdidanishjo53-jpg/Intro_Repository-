#include <iostream>
using namespace std;


int main()
{

    int N;
    cout << "Enter a number: ";
    cin >> N;
    for (int num = 1; num < 10; num++)
    {
        cout << "Result is: " << num * N << endl;

    }
    cout << "Multiplication is done.";
    return 0;
}
