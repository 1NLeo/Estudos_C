#include <stdio.h>
#include <string.h>
#include <locale.h>

int main (){

    char s [50];
    int size;
    
    printf ("Enter a text: ");
    fgets (s, 49, stdin);

    size = strlen(s) - 1;
    printf ("Size of the text: %d\n", size);

    printf ("Position print: \n");

    for (int i = size - 1; i < strlen(s); i++){ // Only prints the last letter

        printf ("%c", s[i]);

    }



    return 0;
}
