#include <stdio.h>

void troca (int a, int b) {
    int aux = a;
    a = b;
    b = aux;
}

int main () { 

int a = 5, b = 10;

    troca (a,b);

    printf ("A: %d, B: %d", a, b);

    return 0;
}