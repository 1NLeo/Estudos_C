#include <stdio.h>

int main () {

    int num = 0;

    printf ("Enter an integer number: ");
    scanf ("%d", &num);

    (num % 2 == 0) ?
    printf ("This is an even number."):
    printf ("This is not an even number.");

    return 0;
}