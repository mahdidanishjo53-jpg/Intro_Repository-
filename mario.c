#include <stdio.h>


int main(void)
{
   int cents;

   do
   {
    cents = get_int("Change owed: ");
   }

   while (cents < 0);

   int coins = 0;

   while (cents >= 25)
   {
    coins++;
    cents = cents - 25;
   }

   while (cents >= 10)
   {
    coins++;
    cents = cents - 10;
   }

   while (cents >= 5)
   {
    coins++;
    cents = cents-5;
   }

   while ( cents >= 1)
   {
    coins++;
    cents = cents - 1;
   }

   printf("%i\n");
}

