#include <stdio.h>

int main () {

    float x, y;

    printf ("Enter the first number: ");
    scanf ("%f", &x);

    printf ("Enter the second number: ");
    scanf ("%f", &y);

    if (x > y) {
        printf ("%.2f is bigger than %.2f", x, y);
    }

    else {
        printf("%.2f is bigger than %.2f", y, x);
    }

    return 0;
}