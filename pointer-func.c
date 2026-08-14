#include <stdio.h>

void atualizarvoluntario (int *total, int novos) {

    *total = *total + novos;
    novos = 0;
    

} 

int main () {

    int total_cadastrados  = 100;
    int fila_novos = 25;

    atualizarvoluntario(&total_cadastrados, fila_novos);

    printf("Total: %d, Fila:  %d", total_cadastrados, fila_novos);
    

    return 0;
}