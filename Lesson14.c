#include <stdio.h>
#include <string.h>
#include <locale.h>

#define n 50
int main (){

    char s [n];
    int size;
    
    printf ("Enter a text: ");
    fgets (s, 49, stdin);

    size = strlen(s) - 1;
    printf ("Size of the text: %d\n", size);

    printf ("Last letter:");

    for (int i = size - 1; i < strlen(s); i++){ // Only prints the last letter

        printf ("%c", s[i]);

    }

    puts (s);



    return 0;
}
