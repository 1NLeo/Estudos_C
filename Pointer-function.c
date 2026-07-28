#include <stdio.h>

/*
void findvalue (int* num) {
    *num = 39;
}

int main () {

    int number = 21;

    findvalue (&number); // When we pass the address of the number variable the pointer is assigned with this address

    printf("Number: %d", number);
}
*/

void findsquare (int* number) {

    int square = *number * *number;
    *number = square;
}

int main () {

    int number = 21;

    findsquare (&number);

    printf ("Square is: %d", number);

    return 0;
}
