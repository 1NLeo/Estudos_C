#include <stdio.h>

int main () {

   int x = 42;

   int *y = &x;

   printf ("%d", *y);

   return 0; 
}