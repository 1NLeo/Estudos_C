#include <stdio.h>
#include <math.h>

// Power, Cube and square root of a number commands

int main () {

    int num = 0, a = 0, b = 0;

    printf ("Enter a number: ");
    scanf ("%d", &num);

    printf ("Square root of %d = %.2lf \n",num, sqrt(num));

    printf ("Cube root of %d = %.2lf \n", num, cbrt(num));

    printf ("Enter the base number: ");
    scanf ("%d", &a);

    printf ("Enter the exponent: ");
    scanf ("%d", &b);

    double result = pow(a,b); // "Pow" always return a double

    printf ("%.2lf", result);

    



    return 0;
}