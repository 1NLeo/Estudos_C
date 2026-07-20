#include <stdio.h>
#include <math.h>

int main () {

    int num = 0;

    printf ("Enter a number: ");
    scanf ("%d", &num);

    printf ("%.2lf", sqrt(num));

    return 0;
}