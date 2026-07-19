#include <stdio.h>

int main () {

    int age = 0;

    printf ("How old are you? ");
    scanf ("%d", &age);

    (age >= 18) ?
    printf ("You can vote :)"):
    printf ("You cant vote ):");


    return 0;
}