//Escreva uma função int soma_vetor(int *v, int tamanho) 
//que soma os elementos de um vetor de inteiros usando aritmética de ponteiros (sem usar v[i], só *(v+i)).
#include <stdio.h>

int sum_array(int *v) {

    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += *(v + i);
    }

    return sum;
}

int main () {

    int arr[5] = {1, 2, 3, 4, 5};

    int result = sum_array (arr);

    printf ("Result: %d", result);

    
    return 0;
}