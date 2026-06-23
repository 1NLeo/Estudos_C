#include <stdio.h>
#include <ctype.h>


// Need to learn more to complete this challenge. Still to hard for me 6/22/2026

int main () {

 char string[100];

    scanf ("%s", &string);

    for (int i = 0; string[i] != '\0'; i++) {

        string[i] = tolower(string[i]);

    }

    printf ("%s", string);


 return 0;

}