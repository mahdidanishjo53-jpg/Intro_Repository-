#include <iostream>
using namespace std;


// Grade Calculator: Allow students to enter their scores and check them based on level.
int main()
{
int score;

cout << "Enter your score: ";
cin >> score;

cout << "============================================================================ Your grade is ";
if (score <= 60 )
{
    cout << "Failed";
}
else if (score >= 60 && score <= 69)


{
    cout << 'D';
}

else if (score >= 70 && score <= 79)
{
    cout << 'C';
}

else if (score >= 80 && score <= 89 )
{
   cout << 'B';
}
else if (score >= 90 && score <= 100)
{
    cout << 'A';
}
else
{
    cout << "Invalid Score";
}
cout << " ============================================================================";
return 0;
}