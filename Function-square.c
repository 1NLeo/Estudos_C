#include <stdio.h>

void calculatesquare () {
    
    int number;
    printf ("Enter a number: ");
    scanf ("%d", &number);

    int square = number * number;
    printf ("Square of %d is %d \n", number, square);
}


int main () {

    calculatesquare();

    return 0;
}