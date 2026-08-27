#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int capacidade = 2;      // quantas notas o array suporta agora
    int quantidade = 0;      // quantas notas já foram guardadas
    float *notas = NULL;     // ponteiro que vai apontar para o array dinâmico

    // malloc: aloca memória para 'capacidade' floats (ainda com lixo dentro)
    notas = (float *) malloc(capacidade * sizeof(float));

    if (notas == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    printf("Digite as notas (digite -1 para parar):\n");

    while (1) {
        float nota;
        scanf("%f", &nota);

        if (nota == -1) {
            break;
        }

        // Se o array já está cheio, precisamos crescer com realloc
        if (quantidade == capacidade) {
            capacidade *= 2; // dobra a capacidade
            float *temp = (float *) realloc(notas, capacidade * sizeof(float));

            if (temp == NULL) {
                printf("Erro ao realocar memoria!\n");
                free(notas);
                return 1;
            }

            notas = temp; // só atualizamos 'notas' se o realloc deu certo
            printf("(array expandido para capacidade %d)\n", capacidade);
        }

        notas[quantidade] = nota;
        quantidade++;
    }

    printf("\nNotas digitadas:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%.1f ", notas[i]);
    }
    printf("\n");

    // free: devolve a memória alocada ao sistema
    free(notas);
    notas = NULL; // boa prática: evita "dangling pointer"

    return 0;
}