#include <stdio.h>

int main () {

    int temp = 0;

    printf("Escreva a temperatura");
    scanf ("%d", &temp);

    if (temp >= 35) {
        printf ("MUITO QUENTE!");
    }

    else if (temp  >= 25) {
        printf ("QUENTE!");
    }

    else if  (temp >= 18) {
        printf ("AGRADAVEL!");
    }

    else {
        printf ("FRIO");
    }

    return 0;
}