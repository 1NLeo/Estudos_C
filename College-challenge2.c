#include <stdio.h>

int main () {

    int num = 0;

    printf ("Digite um numero");
    scanf ("%d", &num);

    if (num % 2 == 0) {
        printf ("Este é um número par!");
    }

    else {
        printf ("Este e um numero impar");   
    }

    return 0;
}