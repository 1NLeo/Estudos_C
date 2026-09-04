#include <stdio.h>
 /*
Crie um programa que receba do usuário uma quantidade total de segundos e converta esse valor para
horas, minutos e segundos. Utilize divisão inteira e o operador de resto da divisão (%).
Exemplo:
Digite a quantidade de segundos: 7385
Resultado:
2 hora(s)
3 minuto(s)
5 segundo(s)
*/

#include <stdio.h>

int main() {
    int seconds, hours, minutes, rest;

    printf("Enter the quantity of seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    rest = seconds % 3600;

    minutes = rest / 60;
    seconds = rest % 60;

    printf("\nResultado:\n");
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", minutes);
    printf("%d segundo(s)\n", seconds);
    
    return 0;
}