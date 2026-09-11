#include <iostream>

using namespace std;


int main()
{

    int first_num = 10;
    string name = "Mahdi Hassani";
    double score = 90.32;
    float salary = 500.90f;
    // 1. Show the value of every data types.
    cout << "============================================" << endl;
    cout << "The first value is: " << first_num << endl;
    cout << "Your is: " << name << endl;
    cout << "Your highest score is: " << score << endl;
    cout << "Your salary is: " << salary << endl;

    cout << "============================================" << endl;
    // 2. Show the address of every value.

    cout << "The number address is: " << &first_num << endl;
    cout << "The string address is: " << &name << endl;
    cout << "The double address is: " << &score << endl;
    cout << "The salary address is: " << &salary << endl;
    cout << "============================================" << endl;
    // 3. The following code statements allows the user to observe the size of different codes.

    cout << "The size of number is: " << sizeof(first_num) << endl;
    cout << "The size of string is: " << sizeof(name) << endl;
    cout << "The size of double is: " << sizeof(score) << endl;
    cout << "The size of float is: " << sizeof(salary) << endl;


    return 0;

}
