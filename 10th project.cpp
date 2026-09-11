#include <iostream>
using namespace std;

// 1. Vowel or Constant project.

int main()
{
 char vowel_letters['a','e','i','u','o'];
 char constant;

 cout << "Enter a letter: ";
 cin >> vowel_letters;

if (vowel_letters == vowel_letters)
{
    cout << "The letter " << vowel_letters << "is vowel";
}

else
{
    cout << "The letter is constant";
}


 return 0;
}