#include <stdio.h>
#include <string.h>
#include <locale.h>

int main (){

    char s1 [20];
    char s2 [20];

    printf ("Enter a word: ");
    scanf ("%s", s1);

    printf ("Enter a word: ");
    scanf ("%s", s2);

    printf ("Before the strcat: \n");
    printf ("%s\t", s1 );
    printf ("%s\n", s2);

    strcat(s1,s2); // concatenate (puts together) two strings.

    puts (s1);

    return 0;
}