#include <stdio.h>
#include <stdlib.h>

int main(void) {
int capacidade = 2;
int quantidade = 0; 
float *notas = NULL; 


notas = (float *) malloc(capacidade * sizeof(float)); 

if (notas == NULL) {
printf("Error allocating memory!\n"); 
return 1; 
}

printf("Enter the grades (enter -1 to stop):\n"); 

while (1) {
float nota; 
scanf("%f", &nota); 

if (nota == -1) {
break; 
}


if (quantidade == capacidade) {
capacidade *= 2; 
float *temp = (float *) realloc(notas, capacidade * sizeof(float)); 

if (temp == NULL) {
printf("Error reallocating memory!\n"); 
free(notas); 
return 1; 
}

notas = temp; 
printf("(array expanded to capacity %d)\n", capacidade); 
}

notas[quantidade] = nota; 
quantidade++; 
}

printf("\nGrades entered:\n"); 
for (int i = 0; i < quantidade; i++) {
printf("%.1f ", notas[i]); 
}
printf("\n"); 

free(notas); 
notas = NULL; 

return 0;
}