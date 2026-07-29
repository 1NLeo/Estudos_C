/*
Exercício 4 — Ponteiro modificando um float

Declare uma variável float preco = 9.99; e um ponteiro float *p apontando pra ela. Usando o ponteiro (ou seja, *p = ...),
mude o valor de preco para 15.50. Depois imprima preco (a variável original, não o ponteiro) pra confirmar que o valor mudou.

Objetivo: praticar que alterar *p altera a variável original, mesmo sem mexer em preco diretamente no código.
*/

#include <stdio.h>

    int main () {

    float price = 9.99;

    float *p;

    p = &price;

    *p = 15;
    
    printf ("Price: %.2f\n", price);
    printf ("P: %.2f", *p);

    return 0;
}