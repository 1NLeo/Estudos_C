// achar uma letra do alfabeto de acordo com o numero que o usuário digitar

#include <stdio.h> 

    int main () {

        int cont;

        char alphabet[] = {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

        printf ("Enter a number: ");
        scanf ("%d", &cont);

        for (int i = 1; i <= cont; i++) {
            printf ("%c", alphabet[i]);
        }

    return 0;
}

