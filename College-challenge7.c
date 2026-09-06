#include <stdio.h>
/*
Crie um programa que receba o valor de uma compra e o valor entregue pelo cliente. Calcule o troco e
informe: Pagamento realizado com sucesso, se o valor for maior que a compra; Não há troco, se for
exatamente igual; ou Valor insuficiente, se for menor
*/
int main () {

    float valor_compra = 0, valor_entregue = 0, troco = 0;

    printf ("Valor da compra: ");
    scanf ("%f", &valor_compra);

    printf ("Valor entregue: ");
    scanf ("%f", &valor_entregue);

    if (valor_entregue == valor_compra) {
        printf ("Sem troco, valor igual");
    }

    else if (valor_entregue < valor_compra) {
        printf ("Valor insuficiente");
    }

    else {
        troco = valor_entregue - valor_compra;
        printf ("Troco: %.2f", troco);
    }


    return 0;
}

