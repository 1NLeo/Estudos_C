#include <stdio.h>

void prnt1 (int v[], int n){
    for (int i = 0; i < n; i++){
        printf ("%d", v[i]);
    }
}

void prnt2 (int v[5]){
    for (int i = 0; i < 5; i++){
        printf ("%d", v[i]);
    }
}

void prnt3 (int *v, int n){
    for (int i = 0; i < n; i++){
        printf ("%d", v[i]);
    }
}

int main (){

    int vet[5] = {1, 2, 3, 4, 5};

    printf ("First print: ");
    prnt1(vet, 5);

    printf ("\nSecond print: ");
    prnt2(vet);

    printf ("\nThird print: ");
    prnt3(vet, 5);



    return 0;
}