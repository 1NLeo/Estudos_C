/*
Crie um programa que receba o valor total consumido em um restaurante e a quantidade de pessoas que
irão dividir a conta. O programa deverá acrescentar automaticamente 10% de taxa de serviço e mostrar o
valor do consumo, a taxa, o valor total e quanto cada pessoa deverá pagar
*/

#include <stdio.h>

int main () {

    float valor = 0;
    int pessoas = 0;

    printf ("Valor consumido: ");
    scanf ("%f", &valor);

    float taxa = valor / 10;

    printf ("Pessoas: ");
    scanf ("%d", &pessoas);

    printf ("Valor de consumo: %.2f\n", valor);
    printf ("Taxa: %.2f\n", taxa);
    valor = taxa + valor;
    printf ("Valor total: %.2f\n", valor);
    printf ("valor dividido: %.0f", valor / pessoas);


    return 0;
}