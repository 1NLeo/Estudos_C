#include <stdio.h>
#include <math.h>

// Cube and square root of a number commands

int main () {

    int num = 0;

    printf ("Enter a number: ");
    scanf ("%d", &num);

    printf ("Square root of %d = %.2lf \n",num, sqrt(num));

    printf ("Cube root of %d = %.2lf", num, cbrt(num));



    return 0;
}