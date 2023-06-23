#include <stdio.h>
 
int main () 
{
   int a = 0;

   while( a < 21 ) //While suivi de sa condition et pas de ;
   {
      printf("La valeur de a est %d\n", a);
      a++;
   }
   return 0;
}