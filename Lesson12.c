#include <stdio.h>
#include <string.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"Portuguese");

    char origin [15];
    char destiny [15];

    printf("Enter a word: ");
    scanf ("%s", origin);

    printf("Enter a word: ");
    scanf ("%s", destiny);

    printf ("Before the strcpy: \n");
    printf ("%s\t", origin);
    printf ("%s\n", destiny);

    strcpy (destiny, origin); // There is no = for strings so we use strcpy to give a value that already exist to the strings 

    printf ("%s\t", origin);
    printf ("%s\n", destiny);

    return 0;
}