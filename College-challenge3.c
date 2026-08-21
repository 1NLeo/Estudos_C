#include <stdio.h>

int main  () {

    int num = 0;

    printf ("Digite um numero: ");
    scanf ("%d", &num);

    if (num >= 0) {
        printf ("%d e um numero positivo", num);
    }

    else {
        printf ("%d e um número negativo", num);
    }

    return 0;
}