#include <stdio.h>

int main () {

    int a, b, year = 0;

    scanf ("%d", &a);
    
    scanf ("%d", &b);


    while (a <= b) {

           a *= 3;
          b *= 2;

            year++;
           
    }

     printf ("%d", year);

        

    return 0;
}