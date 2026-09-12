#include <stdio.h>
#include <stdlib.h>

// Em uma fila (FIFO - First in, first out), o enfileiramento adiciona um valor no fim, e o desenfileiramento remove o valor da frente.

typedef struct {
    char nome[30];
    int idade;
} Pessoa;

typedef struct no{
    Pessoa p;
    struct no *proximo;
} No;

Pessoa lerPessoa() {
    Pessoa p;

    getchar();
    printf("\nInforme seu nome: ");
    scanf("%29[^\n]", p.nome);
    printf("Informe sua idade: ");
    scanf("%d", &p.idade);

    return p;
}

void imprimirPessoa(Pessoa p) {
    printf("\nNome: %s\nIdade: %d\n", p.nome, p.idade);
}

//função enqueue (inserir no final)
void enfileiramento(No **fila) {
    No *aux, *novo = malloc(sizeof(No));

    if(novo) {
        novo->p = lerPessoa();
        novo->proximo = NULL;
        if(*fila == NULL) 
            *fila = novo;
        else {
            aux = *fila;
            while(aux->proximo)
                aux = aux->proximo;
            aux->proximo = novo;
        }
    }
    else
        printf("\nErro ao alocar memória.\n");
}

// função dequeue (remover do início)
No* desenfileiramento(No **fila) {
    No *remover = NULL;

    if(*fila) {
        remover = *fila;
        *fila = remover->proximo;
    }
    else
        printf("\nFila vazia.");
    return remover;
}

// função para imprimir a fila
void imprimirFila(No *fila) {
    printf("\n-------------------- FILA --------------------\n");
    while(fila) {
        imprimirPessoa(fila->p);
        fila = fila->proximo;
    }
    printf("\n----------------------------------------------\n");
}

int main() {
    No *remover, *fila = NULL;
    int opcao;

    do {
        printf("\n0 - Sair\n1 - Inserir\n2 - Remover\n3 - Imprimir\n");
        printf("Digite a opção escolhida: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            enfileiramento(&fila);
            if(fila) {
                printf("\nElemento inserido com sucesso!\n");
            }
            break;
        case 2:
            remover = desenfileiramento(&fila);
            if(remover) {
                printf("\nElemento removido com sucesso!");
                free(remover);
            }
            else
                printf("\nNenhuma pessoa registrada.\n");
            break;
        case 3:
            imprimirFila(fila);
            break;
        default:
            if(opcao != 0)
                printf("\nOpção inválida!\n");
            break;
        }

    } while(opcao != 0);

    return 0;
}