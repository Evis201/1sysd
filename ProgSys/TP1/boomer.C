#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int my_rand (void);

int main (void)
{
   int i;

   for (i = 0; i<1000; i++)
   {
     printf ("%d\n", my_rand());
   }
   return (EXIT_SUCCESS);
}

int my_rand (void)
{
   return (rand ());
}
