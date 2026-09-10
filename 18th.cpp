#include <iostream>
using namespace std;

int main() {
   int num1 = 90, num2 = 100;
   int min = (num1 > num2)? num2 : num1 ;
   cout << "The min value is: " << min << endl;
   return 0;
}
