#include <stdio.h>
#include <string.h>

int main() {
    int turma, cont;
    float nota, maior_nota;
    
    char aluno[50];
    char maior_aluno[50];

    printf("-------------------\n");
    printf(" Leo´s school \n");
    printf("-------------------\n");

    printf("Quantity of students in the classroom: ");
    scanf("%d", &turma);

    cont = 0;
    maior_nota = 0.0; 

    while (cont < turma) {
        cont++;
        printf("Aluno %dc", cont);
        
        printf("Nome do aluno: ");
        scanf ("%s", &aluno);

        printf("Nota do aluno: ");
        scanf("%f", &nota);

        if (nota > maior_nota) {
            maior_nota = nota;
            strcpy(maior_aluno, aluno);
        }
    }

    printf( "%s foi o melhor aluno, e sua nota foi: %f.:2f\n", maior_aluno, maior_nota );

    return 0;

}
